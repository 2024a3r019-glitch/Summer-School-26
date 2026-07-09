<div align="center">

# **🔐 Smart Door Lock System with OTP Authentication**

### *Secure IoT-Based Smart Access Control using ESP32*

</div>

---

## **📌 Problem Statement**

Design a secure **IoT-based Smart Door Lock System** that authenticates users using **Two-Factor Authentication (2FA)**.

Users must first enter a valid **4-digit User ID** through a keypad. The system then generates a random **6-digit One-Time Password (OTP)** and sends it to the user's smartphone via an **HC-05 Bluetooth module**. Access is granted only if the correct OTP is entered within the specified time limit.

---

## **💡 Solution Approach**

The system is built around an **ESP32** and implements **Two-Factor Authentication (2FA)** using a **4×4 Matrix Keypad** and **HC-05 Bluetooth communication**.

After the user enters a valid **4-digit User ID**, the ESP32 generates a random **6-digit OTP** and transmits it to the paired smartphone through Bluetooth.

The user must enter the received OTP within **30 seconds**.

- ✅ If the entered OTP is correct, the **SG90 Servo Motor** unlocks the door.
- 🔒 The door automatically locks again after **3 seconds**.
- ❌ If the OTP is incorrect or expires, access is denied and the authentication process resets.

A **16×2 I2C LCD** provides real-time prompts and system status, while the **Serial Monitor** logs every authentication attempt for debugging and monitoring.

---

## **✨ Features**

- ✅ 4-digit User ID authentication
- ✅ Random 6-digit OTP generation
- ✅ OTP transmission via HC-05 Bluetooth
- ✅ 30-second OTP expiration timer
- ✅ Servo-controlled automatic door lock
- ✅ Auto-lock after 3 seconds
- ✅ 16×2 I2C LCD user interface
- ✅ Authentication success and failure logging
- ✅ Automatic system reset after each attempt

---

## **🛠️ Hardware Components**

- ESP32 DevKit V1
- HC-05 Bluetooth Module
- 4×4 Matrix Keypad
- SG90 Servo Motor
- 16×2 I2C LCD Display
- Breadboard
- Jumper Wires
- USB Cable

---

## **🔌 Pin Connections**

| Component | ESP32 GPIO Pin |
|-----------|----------------|
| Servo Signal | GPIO 18 |
| HC-05 TX | GPIO 16 (RX2) |
| HC-05 RX | GPIO 17 (TX2) |
| LCD SDA | GPIO 21 |
| LCD SCL | GPIO 22 |
| Keypad Rows | GPIO 13, 12, 14, 27 |
| Keypad Columns | GPIO 26, 25, 33, 32 |

---

## **💻 Software Requirements**

- Arduino IDE
- ESP32 Board Package
- ESP32Servo Library
- LiquidCrystal_I2C Library
- Keypad Library
- Wire Library

---

## **⚙️ Working Principle**

1. The user enters a **4-digit User ID** using the keypad.
2. The ESP32 generates a random **6-digit OTP**.
3. The OTP is sent to the paired smartphone via the **HC-05 Bluetooth Module**.
4. The user enters the received OTP using the keypad.
5. If the OTP matches within **30 seconds**, the servo unlocks the door.
6. The door remains unlocked for **3 seconds** before automatically locking again.
7. All authentication attempts are logged to the **Serial Monitor**.
8. The system resets and waits for the next user.

---

## **🖥️ Sample Serial Monitor Output**

```text
System Ready

ID Entered: 1234
OTP GENERATED: 582641

Enter OTP:
******

OTP ENTERED: 582641

ACCESS GRANTED - Door Unlocked

----------------------

LOG: SUCCESS ENTRY
```

### **Failed Authentication**

```text
System Ready

ID Entered: 1234
OTP GENERATED: 582641

Enter OTP:
******

OTP ENTERED: 111111

ACCESS DENIED

----------------------

LOG: FAILED ENTRY
```

### **OTP Timeout**

```text
System Ready

ID Entered: 1234
OTP GENERATED: 582641

OTP EXPIRED!

----------------------

LOG: FAILED ENTRY
```

---

## **🚀 Future Improvements**

- Store multiple authorized users in EEPROM or Flash memory.
- Encrypt Bluetooth communication for enhanced security.
- Integrate Fingerprint or RFID authentication.
- Send OTP via SMS or Email using cloud services.
- Add Wi-Fi connectivity for remote monitoring and access logs.
- Store authentication history in a cloud database.

---

## **🎯 Conclusion**

The **Smart Door Lock System with OTP Authentication** enhances security by combining **User ID verification** with **One-Time Password (OTP)** authentication. Using the **ESP32**, **HC-05 Bluetooth Module**, **Matrix Keypad**, and **Servo Motor**, the system provides a secure, reliable, and user-friendly access control solution.

Its automatic locking mechanism, OTP expiration feature, and authentication logging make it suitable for smart homes, offices, and other secure access applications.

---

## **👨‍💻 Author**

**Name:** **VASU JAMWAL**

**Project:** Smart Door Lock System with OTP Authentication

**Course:** IoT Summer School 2026
