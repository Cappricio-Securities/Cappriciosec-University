### OWASP Top 10 (2021) Explained

| ID  | Vulnerability                                  | What It Means                                                | Example                                                                    |
| --- | ---------------------------------------------- | ------------------------------------------------------------ | -------------------------------------------------------------------------- |
| A01 | **Broken Access Control**                      | Users can access resources they shouldn't be able to access. | Changing `/profile/123` to `/profile/124` and viewing another user's data. |
| A02 | **Cryptographic Failures**                     | Sensitive data is not properly protected with encryption.    | Passwords stored in plain text instead of being hashed.                    |
| A03 | **Injection**                                  | Untrusted input is executed as commands or queries.          | SQL Injection: `' OR 1=1 --` bypasses login.                               |
| A04 | **Insecure Design**                            | Security was not considered during application design.       | Password reset without verification steps.                                 |
| A05 | **Security Misconfiguration**                  | Unsafe default settings or improper configurations.          | Admin panel exposed publicly with default credentials.                     |
| A06 | **Vulnerable and Outdated Components**         | Using software with known security flaws.                    | Running an old version of Apache with public vulnerabilities.              |
| A07 | **Identification and Authentication Failures** | Weak authentication mechanisms.                              | No account lockout after multiple failed logins.                           |
| A08 | **Software and Data Integrity Failures**       | Untrusted software updates or data processing.               | Downloading and executing unsigned updates.                                |
| A09 | **Security Logging and Monitoring Failures**   | Security events are not logged or monitored.                 | Failed login attempts are never recorded.                                  |
| A10 | **Server-Side Request Forgery (SSRF)**         | Server fetches resources based on user input.                | User supplies URL causing server to access internal systems.               |

---

## Quick Examples

| OWASP Category            | Real-World Example                                            |
| ------------------------- | ------------------------------------------------------------- |
| Broken Access Control     | Viewing another student's marks by changing an ID             |
| Cryptographic Failures    | Database leak exposes plain-text passwords                    |
| Injection                 | SQL Injection dumps all users                                 |
| Insecure Design           | Banking app lacks transaction approval                        |
| Security Misconfiguration | `.git` directory publicly accessible                          |
| Vulnerable Components     | Old WordPress plugin exploited                                |
| Authentication Failures   | Weak passwords like `admin123`                                |
| Integrity Failures        | Malicious package installed via dependency manager            |
| Logging Failures          | Attack occurs with no logs available                          |
| SSRF                      | Internal cloud metadata endpoint accessed through application |

---

## Impact Ranking

| Risk                      | Typical Impact               |
| ------------------------- | ---------------------------- |
| Broken Access Control     | Account takeover, data theft |
| Cryptographic Failures    | Sensitive data disclosure    |
| Injection                 | Database compromise, RCE     |
| Insecure Design           | Business logic abuse         |
| Security Misconfiguration | Server compromise            |
| Vulnerable Components     | Known exploit execution      |
| Authentication Failures   | Unauthorized access          |
| Integrity Failures        | Supply chain attacks         |
| Logging Failures          | Delayed incident detection   |
| SSRF                      | Internal network access      |

---

## Easy Way to Remember

| Category | Keyword        |
| -------- | -------------- |
| A01      | Authorization  |
| A02      | Encryption     |
| A03      | Injection      |
| A04      | Design         |
| A05      | Configuration  |
| A06      | Components     |
| A07      | Authentication |
| A08      | Integrity      |
| A09      | Logging        |
| A10      | SSRF           |

### Memory Trick

**A-C-I-D-C-C-A-I-L-S**

* **A**ccess Control
* **C**ryptography
* **I**njection
* **D**esign
* **C**onfiguration
* **C**omponents
* **A**uthentication
* **I**ntegrity
* **L**ogging
* **S**SRF

This covers the current OWASP Top 10 web application security risks.
