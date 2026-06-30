# Arduino 4x4 LED Matrix V Pattern 💡

## Overview
This project demonstrates how to control a **4x4 LED matrix** using Arduino.

The LEDs are arranged in rows and columns, and the program creates a **V-shaped LED pattern** by controlling specific rows and columns.

This project helps understand:
- LED matrix control
- Row and column scanning
- Digital output control
- Arduino programming logic

## Components Required
- Arduino UNO (or compatible board)
- 4x4 LED Matrix
- Jumper Wires
- Breadboard
- Resistors (recommended)
- Arduino IDE

## Circuit Connection

### Row Pins

| LED Matrix Row | Arduino Pin |
|---------------|-------------|
| Row 1 | 9 |
| Row 2 | 8 |
| Row 3 | 7 |
| Row 4 | 6 |

### Column Pins

| LED Matrix Column | Arduino Pin |
|------------------|-------------|
| Column 1 | 5 |
| Column 2 | 4 |
| Column 3 | 3 |
| Column 4 | 2 |

## Working Principle
1. Arduino initializes all row and column pins as OUTPUT.
2. All LEDs are turned OFF initially.
3. Specific row and column combinations are activated.
4. Selected LEDs glow to create a **V-shaped pattern**.

## LED Pattern
