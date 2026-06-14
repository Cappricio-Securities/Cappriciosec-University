# RF (Radio Frequency) Basics

## What is RF?

**RF (Radio Frequency)** refers to electromagnetic waves used for wireless communication. These waves travel through the air and carry information between devices without requiring physical cables.

RF technology is used in:

- Wi-Fi
- Bluetooth
- Mobile Networks (2G, 3G, 4G, 5G)
- Radio Broadcasting
- Television Broadcasting
- Satellite Communication
- GPS
- RFID
- IoT Devices
- Remote Controls

---

# RF Frequency Spectrum

| Band | Full Form | Frequency Range | Common Uses |
|--------|-----------|----------------|-------------|
| VLF | Very Low Frequency | 3–30 kHz | Submarine communication, navigation systems |
| LF | Low Frequency | 30–300 kHz | Long-wave radio, navigation beacons |
| MF | Medium Frequency | 300 kHz–3 MHz | AM radio broadcasting |
| HF | High Frequency | 3–30 MHz | Shortwave radio, amateur radio |
| VHF | Very High Frequency | 30–300 MHz | FM radio, aircraft communication |
| UHF | Ultra High Frequency | 300 MHz–3 GHz | Wi-Fi, Bluetooth, GPS, Cellular |
| SHF | Super High Frequency | 3–30 GHz | Radar, Satellite, 5 GHz Wi-Fi |
| EHF | Extremely High Frequency | 30–300 GHz | 5G mmWave, Scientific Research |

---

# Commonly Used RF Frequencies

| Frequency | Technology | Typical Range | Common Applications |
|------------|------------|---------------|---------------------|
| 315 MHz | RF Remote Control | 50–200m | Car remotes, wireless switches |
| 433 MHz | RF Remote Control | 50–500m | Home automation, wireless sensors |
| 868 MHz | LoRa | 2–15 km | Long-range IoT communication |
| 915 MHz | LoRa | 2–15 km | IoT and Industrial Sensors |
| 1.575 GHz | GPS | Global | Navigation and Tracking |
| 2.4 GHz | Wi-Fi | 30–100m | Internet Access |
| 2.4 GHz | Bluetooth | 10–100m | Wireless Accessories |
| 2.4 GHz | BLE (Bluetooth Low Energy) | 10–100m | Smart Watches, IoT Devices |
| 2.4 GHz | Zigbee | 10–100m | Smart Home Devices |
| 5 GHz | Wi-Fi | 15–50m | High-Speed Wireless Networking |
| 24 GHz | Radar | Varies | Speed Detection, Sensors |
| 28 GHz | 5G mmWave | Short Range | Ultra-Fast Mobile Internet |
| 60 GHz | Wireless Data Links | Short Range | High-Speed Communication |

---

# Why Different Technologies Use Different Frequencies

| Technology | Frequency | Why It Uses That Frequency |
|------------|------------|----------------------------|
| Wi-Fi | 2.4 GHz | Good balance between range and speed |
| Wi-Fi | 5 GHz | Higher speed with less interference |
| Bluetooth | 2.4 GHz | Global license-free frequency band |
| BLE | 2.4 GHz | Low power consumption and compatibility |
| Zigbee | 2.4 GHz | Low power and mesh networking support |
| GPS | 1.575 GHz | Reliable satellite communication |
| LoRa | 868/915 MHz | Long-range communication with low power |
| RF Remote | 315/433 MHz | Better penetration through walls |
| 5G mmWave | 24–39 GHz | Extremely high bandwidth |
| FM Radio | 88–108 MHz | Good audio quality over long distances |
| AM Radio | 535–1705 kHz | Very long communication range |

---

# Radio Broadcasting Frequencies

## FM Radio

| Parameter | Value |
|------------|--------|
| Frequency Range | 88–108 MHz |
| Modulation | Frequency Modulation (FM) |
| Audio Quality | High |
| Coverage | Medium to Long Range |
| Example | FM Music Stations |

### Why FM Uses VHF Frequencies

- Better audio quality
- Less noise
- Suitable antenna size
- Supports stereo broadcasting

---

## AM Radio

| Parameter | Value |
|------------|--------|
| Frequency Range | 535–1705 kHz |
| Modulation | Amplitude Modulation (AM) |
| Audio Quality | Moderate |
| Coverage | Very Long Range |
| Example | News and Talk Radio |

### Why AM Uses MF Frequencies

- Travels hundreds of kilometers
- Can reflect from the ionosphere
- Effective for large-area broadcasting

---

# Popular RF Modules

| Module | Frequency | Typical Range | Common Use |
|----------|-----------|---------------|-------------|
| HC-12 | 433 MHz | Up to 1 km | Wireless Serial Communication |
| NRF24L01 | 2.4 GHz | 100m–1 km | IoT Projects |
| LoRa SX1278 | 433 MHz | Up to 15 km | Long-Range IoT |
| LoRa SX1276 | 868/915 MHz | Up to 15 km | Smart Agriculture |
| ESP32 Wi-Fi | 2.4 GHz | 50–100m | IoT and Automation |
| ESP32 BLE | 2.4 GHz | 10–100m | Wearables and Sensors |

---

# Arduino

## What is Arduino?

Arduino is an open-source microcontroller platform used for electronics and embedded system development.

### Features

| Feature | Description |
|-----------|-------------|
| Microcontroller | ATmega328P (Arduino Uno) |
| Programming Language | C/C++ |
| USB Programming | Yes |
| GPIO Pins | Digital and Analog |
| Wi-Fi | No (requires module) |
| Bluetooth | No (requires module) |

### Common Uses

- Robotics
- Home Automation
- Sensor Projects
- RF Communication Projects
- IoT Prototyping

---

# NodeMCU (ESP8266)

## What is NodeMCU?

NodeMCU is a development board based on the ESP8266 Wi-Fi microcontroller.

### Features

| Feature | Description |
|-----------|-------------|
| MCU | ESP8266 |
| Wi-Fi | Built-in |
| Bluetooth | No |
| GPIO | Yes |
| Cost | Low |
| Programming | Arduino IDE, Lua |

### Common Uses

- IoT Projects
- Web Servers
- Smart Home Automation
- Wi-Fi Sensors
- MQTT Communication

---

# Raspberry Pi

## What is Raspberry Pi?

Raspberry Pi is a small single-board computer capable of running Linux operating systems.

### Features

| Feature | Description |
|-----------|-------------|
| Processor | ARM-based CPU |
| Operating System | Linux |
| Wi-Fi | Built-in (newer models) |
| Bluetooth | Built-in (newer models) |
| GPIO | Yes |
| HDMI | Yes |
| USB | Yes |

### Common Uses

| Use Case | Example |
|-----------|---------|
| Cybersecurity Lab | Kali Linux |
| SDR Projects | RTL-SDR |
| Home Automation | Home Assistant |
| Servers | Web Servers |
| AI Projects | Computer Vision |
| IoT Gateway | MQTT Broker |

---

# Arduino vs NodeMCU vs Raspberry Pi

| Feature | Arduino | NodeMCU | Raspberry Pi |
|-----------|---------|----------|-------------|
| Type | Microcontroller | Wi-Fi Microcontroller | Single Board Computer |
| Wi-Fi | External Module | Built-in | Built-in |
| Bluetooth | External Module | No | Built-in |
| Operating System | No | No | Linux |
| Processing Power | Low | Medium | High |
| Programming | C/C++ | C++, Lua | Python, C, Java, Go |
| Best For | Sensors & Control | IoT Projects | Advanced Computing |

---

# RF Security Applications

| Technology | Security Testing Use Cases |
|------------|---------------------------|
| Wi-Fi | Wireless Penetration Testing |
| Bluetooth | BLE Security Assessments |
| SDR | Signal Analysis |
| RFID | Access Control Testing |
| LoRa | IoT Security Research |
| Zigbee | Smart Home Security Testing |
| GPS | Signal Monitoring |
| Cellular | Mobile Network Research |




# Raspberry Pi Setup Guide


---

# Hardware Requirements

| Component                     | Description                        |
| ----------------------------- | ---------------------------------- |
| Raspberry Pi 4/5              | Main Device                        |
| MicroSD Card (32GB or Higher) | Operating System Storage           |
| Power Adapter                 | Official Raspberry Pi Power Supply |
| HDMI Cable                    | Display Output                     |
| Keyboard & Mouse              | Initial Setup                      |
| Internet Connection           | Updates and Remote Access          |

---

# Download Raspberry Pi Imager

Download Raspberry Pi Imager from:

https://www.raspberrypi.com/software/

Install it on your Windows, Linux, or macOS system.

---

# Flash Raspberry Pi OS

1. Open Raspberry Pi Imager
2. Select Device
3. Select Raspberry Pi OS
4. Select Storage (MicroSD Card)
5. Click Next

---

# Advanced Configuration

Before writing the image:

Click:

```text
Edit Settings
```

Configure:

```text
Hostname: raspberrypi
Username: pi
Password: StrongPassword
```

Enable:

```text
SSH
```

Configure Wi-Fi:

```text
SSID: YourWiFi
Password: YourWiFiPassword
Country: IN
```

Click:

```text
Save
```

Write the image to the SD card.

---

# First Boot

1. Insert SD Card
2. Connect Power
3. Wait for Boot

Login:

```text
Username: pi
Password: YourPassword
```

---

# Find Raspberry Pi IP Address

Linux:

```bash
ip neigh
```

Windows:

```cmd
arp -a
```

Router:

```text
Connected Devices
DHCP Clients
```

---

# Connect via SSH

Linux/macOS:

```bash
ssh pi@192.168.1.100
```

Windows PowerShell:

```powershell
ssh pi@192.168.1.100
```

---

# Update System

```bash
sudo apt update
sudo apt upgrade -y
```

---

# Configure Raspberry Pi

Launch configuration tool:

```bash
sudo raspi-config
```

Useful options:

```text
Change Password
Change Hostname
Configure Wi-Fi
Enable SSH
Enable I2C
Enable SPI
Enable Camera
```

---

# Check System Information

CPU Information:

```bash
cat /proc/cpuinfo
```

Memory:

```bash
free -h
```

Storage:

```bash
df -h
```

Operating System:

```bash
cat /etc/os-release
```

---

# Install Common Tools

```bash
sudo apt install git curl wget vim net-tools htop -y
```

---

# Install Python

Check Version:

```bash
python3 --version
```

Install Pip:

```bash
sudo apt install python3-pip -y
```

Install Package:

```bash
pip3 install requests
```

---

# Enable Remote Access

SSH Status:

```bash
sudo systemctl status ssh
```

Enable SSH:

```bash
sudo systemctl enable ssh
```

Start SSH:

```bash
sudo systemctl start ssh
```

---

# Audio Setup

List Audio Devices:

```bash
aplay -l
```

Test Audio:

```bash
speaker-test -c 2
```

Play Audio:

```bash
aplay sample.wav
```

---

# Network Troubleshooting

View IP Address:

```bash
ip addr
```

Test Internet:

```bash
ping 8.8.8.8
```

Test DNS:

```bash
ping google.com
```

---

# Install Development Tools

```bash
sudo apt install build-essential git cmake gcc g++ -y
```

Verify GCC:

```bash
gcc --version
```

---

# GPIO Testing

Install GPIO Tools:

```bash
sudo apt install gpiod -y
```

List GPIO:

```bash
gpioinfo
```

---

# Recommended Projects

* Home Automation
* IoT Development
* Network Monitoring
* Security Research Lab
* Web Server Hosting
* Python Automation
* SDR Projects
* Media Server
* Internet Radio Streaming

---

# Security Recommendations

| Recommendation           | Reason                      |
| ------------------------ | --------------------------- |
| Change Default Password  | Prevent Unauthorized Access |
| Enable Automatic Updates | Security Patches            |
| Use SSH Keys             | Strong Authentication       |
| Disable Unused Services  | Reduce Attack Surface       |
| Use Firewall             | Protect Network Services    |

---

# Useful Commands

Update System:

```bash
sudo apt update && sudo apt upgrade -y
```

Reboot:

```bash
sudo reboot
```

Shutdown:

```bash
sudo shutdown now
```

View Running Processes:

```bash
htop
```

Check Network:

```bash
ip addr
```

Check Storage:

```bash
df -h
```

Check Memory:

```bash
free -h
```


# PiFmRds Installation & Setup Guide (Raspberry Pi)

## Overview

PiFmRds allows a Raspberry Pi to transmit FM radio signals directly using its GPIO pin. It can broadcast audio and RDS (Radio Data System) information such as station name and radio text.

**Requirements**

* Raspberry Pi (Pi 3, Pi 4, Pi Zero, etc.)
* Raspberry Pi OS
* Internet connection
* Audio file (WAV format recommended)
* Small wire antenna (20-75 cm connected to GPIO 4)

> ⚠️ Important: Broadcasting on FM frequencies may be regulated or illegal in some countries without authorization. Use only within applicable laws and regulations.

---

# Step 1: Update Raspberry Pi

```bash
sudo apt update && sudo apt upgrade -y
```

Install required packages:

```bash
sudo apt install git build-essential sox ffmpeg -y
```

---

# Step 2: Download PiFmRds

```bash
git clone https://github.com/ChristopheJacquet/PiFmRds.git
```

Move into the project directory:

```bash
cd PiFmRds/src
```

---

# Step 3: Compile PiFmRds

```bash
make
```

After compilation you should see:

```bash
pi_fm_rds
```

---

# Step 4: Prepare Audio File

Convert MP3 to WAV:

```bash
ffmpeg -i song.mp3 song.wav
```

Or:

```bash
sox song.mp3 -r 228k -c 2 song.wav
```

---

# Step 5: Connect Antenna

Connect a short wire to:

```text
GPIO 4 (Pin 7)
```

GPIO Layout:

```text
(1) 3.3V   (2) 5V
(3) SDA    (4) 5V
(5) SCL    (6) GND
(7) GPIO4  <-- Antenna
```

---

# Step 6: Start Broadcasting

Basic transmission:

```bash
sudo ./pi_fm_rds -freq 100.0 -audio song.wav
```

Example:

```bash
sudo ./pi_fm_rds \
-freq 100.0 \
-ps "MYRADIO" \
-rt "Welcome to My Radio Station" \
-audio song.wav
```

Parameters:

| Option | Description  |
| ------ | ------------ |
| -freq  | FM Frequency |
| -ps    | Station Name |
| -rt    | Radio Text   |
| -audio | Audio File   |

---

# Step 7: Listen on FM Radio

Tune any nearby FM receiver to:

```text
100.0 MHz
```

You should hear the transmitted audio.

---

# Broadcasting Live Audio

Transmit microphone input:

```bash
arecord -f cd - | \
sudo ./pi_fm_rds -freq 100.0 -audio -
```

---

# Continuous Playlist

Create playlist:

```bash
mkdir music
```

Copy WAV files:

```bash
cp *.wav music/
```

Loop playback:

```bash
while true; do
    for i in music/*.wav; do
        sudo ./pi_fm_rds \
        -freq 100.0 \
        -ps "MYRADIO" \
        -rt "24x7 Music Station" \
        -audio "$i"
    done
done
```

---

# Auto Start on Boot

Create service:

```bash
sudo nano /etc/systemd/system/pifmrds.service
```

Paste:

```ini
[Unit]
Description=PiFmRds Radio Station
After=network.target

[Service]
Type=simple
WorkingDirectory=/home/pi/PiFmRds/src
ExecStart=/home/pi/PiFmRds/src/pi_fm_rds \
-freq 100.0 \
-ps "MYRADIO" \
-rt "Welcome to Raspberry Pi Radio" \
-audio /home/pi/song.wav

Restart=always

[Install]
WantedBy=multi-user.target
```

Enable service:

```bash
sudo systemctl daemon-reload
sudo systemctl enable pifmrds
sudo systemctl start pifmrds
```

Check status:

```bash
sudo systemctl status pifmrds
```

---

# Troubleshooting

### Command Not Found

```bash
make clean
make
```

### Audio Not Playing

Verify WAV file:

```bash
file song.wav
```

### Weak Signal

* Increase antenna length slightly.
* Keep antenna vertical.
* Reduce obstacles around Raspberry Pi.

### Permission Errors

Run:

```bash
sudo ./pi_fm_rds
```

---

# Project Structure

```text
PiFmRds/
├── src/
│   ├── pi_fm_rds
│   ├── makefile
│   └── ...
├── README.md
└── LICENSE
```

## Useful Commands

```bash
# Update system
sudo apt update && sudo apt upgrade -y

# Clone project
git clone https://github.com/ChristopheJacquet/PiFmRds.git

# Build
cd PiFmRds/src
make

# Broadcast
sudo ./pi_fm_rds -freq 100.0 -audio song.wav

# Check service
sudo systemctl status pifmrds
```





