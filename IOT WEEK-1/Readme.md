# Arduino Ultrasonic Sensor Distance Measurement 📏

## Overview
This project uses an **HC-SR04 Ultrasonic Sensor** with Arduino to measure the distance of an object.

The sensor sends ultrasonic waves and calculates the distance by measuring the time taken for the echo to return. The measured distance is displayed on the Serial Monitor.

## Components Required
- Arduino UNO (or compatible board)
- HC-SR04 Ultrasonic Sensor
- Jumper Wires
- USB Cable
- Arduino IDE

## Circuit Connection

| HC-SR04 Pin | Arduino Pin |
|-------------|-------------|
| VCC         | 5V          |
| GND         | GND         |
| TRIG        | Digital Pin 7 |
| ECHO        | Digital Pin 6 |

## Working Principle
1. Arduino sends a trigger pulse to the ultrasonic sensor.
2. The HC-SR04 sensor sends ultrasonic waves.
3. The waves hit an object and return back as an echo.
4. Arduino calculates the time taken by the echo.
5. Distance is calculated using the formula:
