<!-- ===== 7-Segment Curtain Animation Using 8051 Microcontroller ===== -->

 # Project Overview
This project demonstrates the use of a 7-segment display interfaced with an 8051 microcontroller to create visual curtain-style animation effects.  
By applying different hexadecimal patterns to Port 2 the segments of the display are turned ON and OFF in a specific sequence.

------

# The repository contains two versions of the code
- A basic curtain closing pattern
- A complete curtain opening and closing animation

-----

# Delay Function
Both programs use a software delay function implemented using nested for loops.  
This delay controls the speed of the animation and makes the segment transitions visible.

-----

# Hardware Requirements
- 8051 Microcontroller
- Common Cathode 7-Segment Display
- 330Ω current limiting resistors
- Connecting wires
- Power supply

-----

# Port Configuration
- 7-segment display segments are connected to Port 2 (P2.0 – P2.7) of the 8051 microcontroller.

-----

# Note
- curtain main is provided for understanding the complete curtain animation.
- curtain basic is provided for basic understanding and reference.

-----

# Application 
1. Digital Clocks
  Used to display hours, minutes, and seconds.
  Common in wall clocks, wristwatches, and alarm clocks.

2. Electronic Calculators
   Displays numbers for arithmetic operations.
   Easy to read and low power consumption.