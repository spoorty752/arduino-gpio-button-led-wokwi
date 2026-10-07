# Learning Notes

## What I Learned

### GPIO

GPIO means General Purpose Input/Output.

An INPUT allows the microcontroller to read a signal from the outside world.

An OUTPUT allows the microcontroller to control something in the outside world.

### pinMode()

```c
pinMode(13, OUTPUT);
Configures pin 13 as an output.
pinMode(2, INPUT_PULLUP);
Configures pin 2 as an input using the internal pull-up resistor.
int buttonState = digitalRead(BUTTON);
Reads the current HIGH or LOW state of the button pin and stores it in buttonState.
digitalWrite(LED, HIGH);
Sets the LED output pin HIGH.
digitalWrite(LED, LOW);
Sets the LED output pin LOW.
INPUT_PULLUP
With INPUT_PULLUP:
- Button released → HIGH
- Button pressed → LOW
The button is connected between the GPIO pin and GND.
if / else
The program checks the button state and decides what the LED should do.
if (buttonState == LOW)
{
    digitalWrite(LED, HIGH);
}
else
{
    digitalWrite(LED, LOW);
}
void
void means that a function does not return a value.
For example:
void setup()
and
void loop()
do not return a value.
Peripheral
A peripheral is a hardware module inside a microcontroller that performs a specific function.
Examples:
- GPIO
- UART
- SPI
- I2C
- Timer
- ADC
- CAN
Main Concept I Understood
The basic flow of this project is:
Button
↓
GPIO Input
↓
digitalRead()
↓
buttonState
↓
if / else
↓
digitalWrite()
↓
GPIO Output
↓
LED
What I Need to Learn Next
- GPIO registers
- Bit manipulation
- volatile
- Timers
- UART
- SPI
- I2C
- CAN
- STM32 and register-level programming


