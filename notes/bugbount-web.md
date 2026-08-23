# Web Security Notes

## HTTP Methods

| Method   | Purpose                             |
| -------- | ----------------------------------- |
| `GET`    | Retrieve data from the server       |
| `POST`   | Create or submit data to the server |
| `PUT`    | Update existing data                |
| `DELETE` | Delete data                         |

---

## HTTP Status Codes

### `2xx` — Success

| Code             | Meaning                              |
| ---------------- | ------------------------------------ |
| `200 OK`         | Request successful                   |
| `201 Created`    | Resource successfully created        |
| `204 No Content` | Request successful, no response body |

### `3xx` — Redirection

The requested resource requires a redirect or further action.

### `4xx` — Client Error

The request contains an error or the client is not authorized to perform the requested action.

### `5xx` — Server Error

The server encountered an error while processing the request.

---

# Understanding a URL

Example:

```text
https://www.example.com:443/products/view.php?id=123&category=books#reviews
```

```text
https://
   │
   └── Protocol / Scheme

www.example.com
   │
   └── Domain / Host

:443
   │
   └── Port

/products/view.php
   │
   └── Path

?id=123&category=books
   │
   ├── Query string
   │
   └── Query parameters

#reviews
   │
   └── Fragment
```

### URL Components

* **Scheme:** `https`
* **Host:** `www.example.com`
* **Port:** `443`
* **Path:** `/products/view.php`
* **Query string:** `?id=123&category=books`
* **Query parameters:**

  * `id=123`
  * `category=books`
* **Fragment:** `#reviews`

---

# No Rate Limiting

## What is a No Rate-Limiting Vulnerability?

A **rate-limiting vulnerability** occurs when an application does not properly restrict how frequently a user can perform a sensitive action.

For example, an OTP endpoint might allow:

```text
User
  ↓
Mobile Number
  ↓
POST /send-otp
  ↓
Server
  ↓
OTP
  ↓
User's Mobile
```

If the endpoint accepts unlimited requests, an attacker could repeatedly trigger OTP messages.

### Example

```text
Request 1  → OTP sent
Request 2  → OTP sent
Request 3  → OTP sent
Request 4  → OTP sent
...
Request N  → OTP sent
```

This can potentially result in:

* OTP spamming
* SMS abuse
* Increased operational costs
* Resource consumption
* User inconvenience

> Testing should only be performed against systems you own or have explicit authorization to test.

---

## How to Fix Rate Limiting

A practical OTP policy could be:

```text
Maximum: 5 OTP requests
Window: 1 minute
Cooldown: enforced after repeated requests
```

Additional protections:

1. **IP-based rate limiting**
2. **Phone/account-based rate limiting**
3. **Session/device-based limits**
4. **Cooldown period between OTP requests**
5. **CAPTCHA after suspicious activity**
6. **Return HTTP `429 Too Many Requests`**
7. **Monitor and log excessive requests**

### Example

```text
9090909090

Request 1 → Allowed
Request 2 → Allowed
Request 3 → Allowed
Request 4 → Allowed
Request 5 → Allowed
Request 6 → Blocked / 429
```

---

# Vulnerability Report: Rate Limiting

## Priority

**P4 — Low**

## Scope

```text
https://www.thekarikadai.com/user_login
```

## Description

The `/user_login` endpoint appears to lack effective rate limiting, allowing repeated login requests to be submitted without sufficient throttling.

An attacker could potentially automate a large number of requests against the endpoint.

## Impact

### 1. OTP / Authentication Spam

Repeated requests could potentially trigger excessive authentication or OTP-related activity, depending on the application's login flow.

### 2. Financial Loss

If the endpoint triggers paid SMS/OTP messages, excessive requests could generate unnecessary SMS costs for the organization.

### 3. Resource Consumption

A large number of requests can consume application and server resources.

### 4. User Experience Impact

Excessive authentication requests may inconvenience legitimate users.

## Mitigation

1. Implement server-side rate limiting on the `/user_login` endpoint.
2. Return HTTP `429 Too Many Requests` after the configured threshold is exceeded.
3. Add a cooldown period between repeated OTP/login requests.
4. Apply limits based on multiple factors such as IP address, account/phone number, and session/device.
5. Add CAPTCHA or additional verification when suspicious request patterns are detected.
6. Monitor and log excessive requests and automatically block abusive traffic.

**POC By:** `karthithehacker`

---

# Vulnerability Report: OTP Disclosure in API Response

## Priority

**P2 — High**

## Scope

```text
https://www.thekarikadai.com/user_login
```

## Description

The `/user_login` endpoint returns the user's OTP directly within the API response.

The response contains sensitive authentication information in the `otp_no` parameter:

```json
"otp_no": "1358"
```

The OTP is also accompanied by other sensitive account information, including the user's mobile number and authentication token.

An OTP is intended to be delivered through a secure out-of-band channel such as SMS. Returning the actual OTP in the HTTP response defeats the intended security model of OTP-based authentication and may allow anyone with access to the API response to obtain the OTP without accessing the user's mobile device.

---

## Proof of Concept

The server responds with:

```json
{
  "status": "SUCCESS",
  "message": "OTP has been send to your mobile",
  "data": {
    "mobile": "8270913635",
    "user_auth_token": "a3902177563c4bc2bbd6deed719ffd78",
    "otp_no": "1358",
    "otp_verify": "VERIFIED"
  }
}
```

### Sensitive Fields

```text
otp_no
user_auth_token
```

The most critical issue is:

```json
"otp_no": "1358"
```

---

## Impact

### 1. OTP Disclosure

The authentication OTP is directly exposed through the API response.

### 2. Authentication Bypass Risk

An attacker who can obtain the response may be able to retrieve the OTP without access to the victim's phone.

### 3. Account Takeover Risk

If the OTP is used for login, verification, password reset, or another sensitive operation, disclosure could potentially facilitate account takeover.

### 4. Sensitive Data Exposure

The response also exposes authentication-related information such as `user_auth_token`.

### 5. Increased Attack Surface

The returned OTP could potentially be exposed through:

* Browser history
* Proxy logs
* Application logs
* Debugging tools
* Client-side storage
* Compromised clients

---

# Mitigation

1. **Never return the actual OTP in API responses.**
2. Store OTPs securely on the server and verify them server-side.
3. Return only a generic success message such as `OTP sent successfully`.
4. Remove sensitive fields such as `otp_no` and authentication tokens from unnecessary API responses.
5. Ensure OTPs expire after a short period and can only be used once.
6. Implement rate limiting and attempt limits for OTP generation and verification.
7. Avoid logging OTP values or other authentication secrets.
8. Review all API endpoints to ensure sensitive authentication information is not unintentionally exposed.

---

## Recommended Response

Instead of returning:

```json
{
  "otp_no": "1358"
}
```

the API should return something similar to:

```json
{
  "status": "SUCCESS",
  "message": "OTP sent successfully"
}
```

The OTP should remain exclusively on the server and be delivered through the user's authorized delivery channel.

---

**POC By:** `karthithehacker`
