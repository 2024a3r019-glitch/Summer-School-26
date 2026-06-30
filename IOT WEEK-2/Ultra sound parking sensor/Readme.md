# Arduino Ultrasonic Distance Alert System 📡🚨

## Overview
This project is an **Arduino-based distance detection and alert system** using an ultrasonic sensor.

The ultrasonic sensor measures the distance of an object.  
- If an object comes closer than the set distance limit, the system activates a buzzer and red LED.
- If the object is far away, the green LED indicates a safe condition.

This project demonstrates:
- Ultrasonic sensor interfacing
- Distance measurement
- LED indicators
- Buzzer alert system
- Arduino automation

## Components Required
- Arduino UNO
- HC-SR04 Ultrasonic Sensor
- Red LED
- Green LED
- Buzzer
- Resistors
- Jumper Wires
- Breadboard
- Arduino IDE

## Circuit Connection

### Ultrasonic Sensor

| HC-SR04 Pin | Arduino Pin |
|-------------|-------------|
| VCC | 5V |
| GND | GND |
| TRIG | D3 |
| ECHO | D2 |

### LEDs

| LED | Arduino Pin |
|-----|-------------|
| Green LED | D4 |
| Red LED | D5 |

### Buzzer

| Buzzer Pin | Arduino Pin |
|------------|-------------|
| Positive | D6 |
| Negative | GND |

## Working Principle
1. Arduino sends an ultrasonic pulse through the TRIG pin.
2. The sensor receives the reflected echo signal.
3. Arduino calculates the distance using the echo time.
4. The distance is compared with the threshold value.

### Condition:
