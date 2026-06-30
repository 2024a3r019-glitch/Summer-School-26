# Arduino LED Fade Effect 🌈💡

## Overview
This project demonstrates a smooth **LED fading effect** using Arduino PWM (Pulse Width Modulation).

Five LEDs are connected to PWM-enabled pins. Each LED gradually increases brightness from OFF to maximum brightness and then fades back to OFF, creating a breathing/fade animation effect.

This project helps understand:
- PWM control
- Analog output using Arduino
- LED brightness control
- Loops and delays

## Components Required
- Arduino UNO (or compatible board)
- 5 LEDs
- 5 Resistors (220Ω recommended)
- Jumper Wires
- Breadboard
- Arduino IDE

## Circuit Connection

| LED | Arduino Pin |
|-----|-------------|
| LED 1 | Pin 3 |
| LED 2 | Pin 5 |
| LED 3 | Pin 6 |
| LED 4 | Pin 9 |
| LED 5 | Pin 10 |

**Note:** Use PWM pins for smooth fading effect.

## Working Principle
1. Arduino initializes all LED pins as OUTPUT.
2. `analogWrite()` is used to control LED brightness.
3. Brightness increases gradually from 0 to 255.
4. LED brightness decreases gradually from 255 to 0.
5. The process repeats for all LEDs.

## PWM Range
