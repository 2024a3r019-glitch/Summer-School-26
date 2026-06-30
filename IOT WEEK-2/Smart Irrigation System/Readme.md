# Arduino Soil Moisture Sensor Based Automatic Watering System 🌱💧

## Overview
This project uses a **soil moisture sensor** with Arduino to detect the moisture level of soil and automatically control a motor/pump.

When the soil becomes dry, the Arduino turns ON the motor.  
When the soil has enough moisture, the motor turns OFF.

This project demonstrates:
- Sensor-based automation
- Digital input reading
- Automatic irrigation system
- Arduino control logic

## Components Required
- Arduino UNO
- Soil Moisture Sensor
- DC Motor / Water Pump
- Motor Driver (recommended for real motor)
- Jumper Wires
- Breadboard
- Arduino IDE

## Circuit Connection

### Soil Moisture Sensor

| Sensor Pin | Arduino Pin |
|------------|-------------|
| VCC | 5V |
| GND | GND |
| Output | Digital Pin 3 |

### Motor Connection

| Motor | Arduino Pin |
|------|-------------|
| Motor Control | Digital Pin 9 |

## Working Principle
1. Soil moisture sensor reads the moisture level of soil.
2. Arduino receives the sensor value.
3. If the soil is dry:
   - Motor turns ON.
4. If the soil is wet:
   - Motor turns OFF.

## Logic
