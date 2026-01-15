## Project Description
The LED Pattern Generator project demonstrates different LED blinking patterns using Embedded C programming.  
It is a basic embedded systems project useful for understanding GPIO control, delay logic, and digital output operation.

-----

## Code logic 
- The program runs continuously using an infinite while(1) loop.
- A delay function is used to control the speed of LED patterns.
- Port P1 of the 8051 is used to connect LEDs.
* LED Patterns executed sequentially:
- All LEDs are turned ON.
- All LEDs are turned OFF.
- LEDs glow one by one from left to right using left shift operation.
- LEDs glow one by one from right to left using right shift operation.
- Alternate LEDs blink using predefined bit patterns (0xAA and 0x55).
- After completing all patterns, the sequence repeats forever.
- This logic demonstrates basic port control, bit shifting, and delay usage in an 8051 embedded system.

-----

## Components Used
- Microcontroller (8051 / Arduino)
- LEDs
- Resistors (220Ω / 330Ω)
- Breadboard
- Connecting Wires
- Power Supply

-----

## Working Principle
- LEDs are connected to the output pins of the microcontroller.
- The program sends HIGH and LOW signals in a specific sequence.
- Delay functions are used to create visible LED patterns.
- Different patterns such as blinking, running light, and alternate LEDs can be generated.

-----

## LED Pattern implemented
- LEDs turn ON and OFF in a specific sequence to create patterns.
- Left to Right Running Pattern
- Right to Left Running Pattern
- Alternate LED Blinking

-----

## Language Used
- Embedded C

## Aplication
- Traffic Light Control System 
  Different LED patterns represent Red, Yellow, and Green signals

- Digital Clock & Timer Display ⏱️
  LED patterns display hours, minutes, seconds






