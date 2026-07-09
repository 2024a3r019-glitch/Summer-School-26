# Q37 – Wi-Fi Security for IoT

## 📌 Objective

Research common Wi-Fi security threats affecting IoT devices, identify best practices for securing ESP32 Wi-Fi connections, and explain why hardcoding Wi-Fi credentials in source code is a security risk.

---

# 📶 Wi-Fi Security for IoT

Wi-Fi connectivity is a fundamental requirement for modern IoT devices, enabling seamless communication between sensors, controllers, and cloud services. However, insecure Wi-Fi configurations can expose IoT devices to cyberattacks, data theft, and unauthorized access. Implementing strong security measures is essential to protect IoT networks and sensitive information.

---

# ⚠️ Common Wi-Fi Security Threats

## 1. Brute-Force & Dictionary Attacks

Attackers capture the Wi-Fi authentication handshake and attempt to guess the password using large dictionaries or automated brute-force techniques. Weak passwords make these attacks successful.

**Prevention:**
- Use strong, unique Wi-Fi passwords.
- Prefer WPA3 over WPA2 whenever available.

---

## 2. Evil Twin Attack

An attacker creates a fake Wi-Fi access point that looks identical to a legitimate network. If an IoT device connects to this rogue access point, sensitive data can be intercepted or modified.

**Prevention:**
- Verify trusted networks.
- Use certificate validation and secure authentication.

---

## 3. Man-in-the-Middle (MITM) Attack

An attacker secretly intercepts communication between the IoT device and the cloud server, allowing them to monitor or alter transmitted data.

**Prevention:**
- Use HTTPS with TLS encryption.
- Implement certificate pinning to verify the server's identity.

---

## 4. Deauthentication Attack

Attackers send fake deauthentication frames, forcing IoT devices to disconnect from the Wi-Fi network. This can disrupt communication or trick devices into connecting to a malicious access point.

**Prevention:**
- Enable **Protected Management Frames (PMF)**.

---

# 🔒 Best Practices for Securing ESP32 Wi-Fi Connections

To improve the security of ESP32-based IoT devices, developers should follow these best practices:

- ✅ Use **WPA3** whenever supported for stronger authentication.
- ✅ Enable **Protected Management Frames (PMF)**.
- ✅ Use **HTTPS (TLS/SSL)** for secure communication.
- ✅ Implement **Certificate Pinning** to prevent MITM attacks.
- ✅ Store Wi-Fi credentials securely using encrypted flash or secure storage.
- ✅ Keep ESP32 firmware and libraries updated.
- ✅ Use strong and unique Wi-Fi passwords.
- ✅ Disable unnecessary network services and open ports.

---

# ❌ Why Hardcoding Wi-Fi Credentials is a Security Risk

Embedding Wi-Fi usernames and passwords directly into source code is considered a poor security practice.

### Risks

- 🔓 Anyone with access to the source code can view the credentials.
- 🔍 Attackers can extract credentials from the device firmware.
- 🌐 Reusing the same credentials across multiple devices increases the impact of a single compromise.
- 📂 Accidentally pushing code to a public GitHub repository may expose sensitive information.

### Recommended Alternatives

Instead of hardcoding credentials:

- Store credentials in encrypted flash memory.
- Use secure provisioning during device setup.
- Keep secrets in a separate `secrets.h` file.
- Add `secrets.h` to `.gitignore` so it is never uploaded to version control.

Example:

```cpp
// secrets.h
#define WIFI_SSID "Your_WiFi_Name"
#define WIFI_PASSWORD "Your_Strong_Password"
```

```cpp
// main.cpp
#include "secrets.h"

WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
```

---

# 📋 Best Practices Summary

| Security Practice | Purpose |
|-------------------|---------|
| Use WPA3 | Stronger Wi-Fi authentication |
| Enable PMF | Prevent deauthentication attacks |
| Use HTTPS (TLS/SSL) | Encrypt network communication |
| Implement Certificate Pinning | Prevent Man-in-the-Middle attacks |
| Store Credentials Securely | Protect sensitive information |
| Update Firmware Regularly | Fix security vulnerabilities |
| Use Strong Passwords | Reduce brute-force attacks |
| Disable Unnecessary Services | Reduce attack surface |

---

# 🎯 Conclusion

Securing Wi-Fi connections is essential for protecting IoT devices from unauthorized access and cyberattacks. ESP32 devices should use modern security features such as **WPA3**, **Protected Management Frames (PMF)**, **TLS encryption**, and **certificate pinning** to ensure secure communication. Developers should also avoid hardcoding Wi-Fi credentials and instead use secure storage or provisioning methods. By following these best practices, IoT deployments become more reliable, secure, and resilient against common wireless threats.

---

# 📚 References

1. **Espressif Systems** – ESP-IDF Programming Guide: Wi-Fi Security  
   https://docs.espressif.com/projects/esp-idf/en/stable/esp32/api-guides/wifi-security.html

2. **Espressif Systems** – ESP-IDF Programming Guide: WPA3 and Protected Management Frames  
   https://docs.espressif.com/projects/esp-idf/en/v5.1.2/esp32/api-guides/wifi-security.html

---

## 👨‍💻 Author

**Name:** Vasu Jamwal

**Course:** IoT Summer School 2026

**Question:** Q37 – Wi-Fi Security for IoT
