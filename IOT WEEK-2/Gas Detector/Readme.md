# Arduino Gas Leakage Detection System 🚨🔥

## Overview
This project is an **Arduino-based gas leakage detection system** using a gas sensor, buzzer, and LED.

The gas sensor continuously monitors the gas level in the environment.  
When the detected gas value crosses a set limit, the system activates an alarm and warning LED.

This project demonstrates:
- Gas sensor interfacing
- Analog sensor reading
- Safety alert system
- Arduino automation

## Components Required
- Arduino UNO
- Gas Sensor (MQ series)
- Buzzer
- LED
- Resistor
- Jumper Wires
- Breadboard
- Arduino IDE

## Circuit Connection

### Gas Sensor

| Gas Sensor Pin | Arduino Pin |
|----------------|-------------|
| VCC | 5V |
| GND | GND |
| Analog Output | A0 |

### LED

| LED Pin | Arduino Pin |
|---------|-------------|
| Positive (+) | D4 |
| Negative (-) | GND through resistor |

### Buzzer

| Buzzer Pin | Arduino Pin |
|------------|-------------|
| Positive | D7 |
| Negative | GND |

## Working Principle
1. Gas sensor detects the gas concentration.
2. Arduino reads the analog value from pin A0.
3. The value is compared with the safety limit.
4. If gas level is high:
   - LED turns ON.
   - Buzzer activates.
5. If gas level is normal:
   - LED and buzzer remain OFF.

## Logic
