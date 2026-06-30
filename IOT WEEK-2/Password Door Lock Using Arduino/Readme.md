# Arduino Password Based Door Lock System 🔐🚪

## Overview
This project is an **Arduino-based security door lock system** using a 4x4 keypad, servo motor, LCD display, and buzzer.

The user enters a password using the keypad.  
- If the password is correct → the servo unlocks the door.
- If the password is wrong → buzzer gives an alert.

This project demonstrates:
- Keypad interfacing
- LCD display control
- Servo motor control
- Password authentication system
- Embedded security applications

## Components Required
- Arduino UNO
- 4x4 Matrix Keypad
- Servo Motor
- 16x2 I2C LCD Display
- Buzzer
- Jumper Wires
- Breadboard
- Arduino IDE

## Circuit Connection

### Servo Motor

| Servo Pin | Arduino Pin |
|-----------|-------------|
| Signal | D10 |
| VCC | 5V |
| GND | GND |

### Buzzer

| Buzzer Pin | Arduino Pin |
|------------|-------------|
| Positive | D11 |
| Negative | GND |

### Keypad

| Keypad Pin | Arduino Pin |
|------------|-------------|
| Row 1 | D2 |
| Row 2 | D3 |
| Row 3 | D4 |
| Row 4 | D5 |
| Column 1 | D6 |
| Column 2 | D7 |
| Column 3 | D8 |
| Column 4 | D9 |

### LCD I2C

| LCD Pin | Arduino Pin |
|---------|-------------|
| SDA | A4 |
| SCL | A5 |
| VCC | 5V |
| GND | GND |

## Working Principle
1. System displays "ENTER PASSWORD" on LCD.
2. User enters password using keypad.
3. Entered digits are displayed as `*` for security.
4. Press:
   - `D` → Check password
   - `C` → Clear entered password
5. If password matches:
   - LCD shows "CORRECT PASSWORD"
   - Servo rotates to unlock position
   - Buzzer gives confirmation beep
6. If password is incorrect:
   - LCD shows "WRONG PASSWORD"
   - Buzzer gives warning sound

## Default Password
