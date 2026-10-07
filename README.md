# Arduino GPIO Button → LED Controller

A simple embedded systems project built using an Arduino Uno and simulated in Wokwi.

The project demonstrates how a microcontroller reads a digital input from a pushbutton and controls a digital output (LED) based on that input.

## Hardware

- Arduino Uno
- Pushbutton
- LED
- 220Ω resistor
- Wokwi simulation

## Pin Connections

| Component | Arduino Pin |
|---|---|
| LED | Pin 13 |
| Button | Pin 2 |

## How It Works

The pushbutton is configured as a digital input using the internal pull-up resistor.

When the button is:

- **Released:** Pin 2 reads `HIGH` and the LED remains OFF.
- **Pressed:** Pin 2 reads `LOW` and the LED turns ON.

The program continuously reads the button state and controls the LED accordingly.

## Code Concepts

- GPIO input and output
- `pinMode()`
- `digitalRead()`
- `digitalWrite()`
- `HIGH` and `LOW`
- `INPUT_PULLUP`
- `if / else`
- `void setup()` and `void loop()`
- Basic timing using `delay()`

## Project Flow

Button → GPIO Input → `digitalRead()` → `if` condition → GPIO Output → LED

## Learning Outcome

This project helped me understand the basic GPIO input-to-output control flow in an embedded system and how software can respond to a physical input.

## Simulation

This project was developed and tested using Wokwi.

## Next Steps

- Explore direct register-level GPIO control
- Work with timers
- Learn UART communication
- Progress toward SPI, I2C and CAN
