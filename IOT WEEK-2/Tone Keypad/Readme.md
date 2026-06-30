# Arduino Button Controlled Buzzer 🎵🔘

## Overview
This project demonstrates how to control a **buzzer using push buttons** with Arduino.

Each button produces a different tone when pressed. The Arduino detects which button is pressed and generates a corresponding sound using the buzzer.

This project demonstrates:
- Digital input reading
- Button interfacing
- Buzzer control
- Basic Arduino sound generation

## Components Required
- Arduino UNO
- Buzzer
- Push Buttons (3)
- Resistors
- Breadboard
- Jumper Wires
- Arduino IDE

## Circuit Connection

### Push Buttons

| Button | Arduino Pin |
|--------|-------------|
| Button 1 | A0 |
| Button 2 | A1 |
| Button 3 | A2 |

### Buzzer

| Buzzer Pin | Arduino Pin |
|------------|-------------|
| Positive | D8 |
| Negative | GND |

## Working Principle
1. Arduino continuously checks the button inputs.
2. When a button is pressed:
   - Arduino detects the HIGH signal.
   - A specific tone is generated through the buzzer.
3. Different buttons create different sound frequencies.

## Logic
