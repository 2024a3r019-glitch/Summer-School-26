# Arduino LDR Automatic Light Control 🌞💡

## Overview
This project uses an **LDR (Light Dependent Resistor)** with Arduino to automatically control an LED based on the surrounding light intensity.

The Arduino reads the LDR value and:
- Turns ON the LED when it is dark.
- Turns OFF the LED when there is enough light.

This project demonstrates:
- Analog sensor reading
- Conditional statements
- Automatic lighting systems
- Arduino IoT basics

## Components Required
- Arduino UNO
- LDR Sensor
- LED
- 220Ω Resistor
- 10kΩ Resistor
- Jumper Wires
- Breadboard
- Arduino IDE

## Circuit Connection

### LDR Connection

| Component | Arduino Pin |
|-----------|-------------|
| LDR Output | A0 |
| LDR VCC | 5V |
| LDR GND | GND |

### LED Connection

| LED Pin | Arduino Pin |
|---------|-------------|
| Positive (+) | Digital Pin 10 |
| Negative (-) | GND through resistor |

## Working Principle
1. LDR senses the surrounding light intensity.
2. Arduino reads the analog value from pin A0.
3. The value is stored in `LDR_VAL`.
4. If the LDR value is greater than 500:
   - LED turns ON.
5. Otherwise:
   - LED remains OFF.

## Logic
