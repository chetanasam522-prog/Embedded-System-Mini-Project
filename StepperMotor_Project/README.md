# Stepper Motor Control using 8051 Microcontroller

## Project Overview
This project demonstrates the basic logic and control of a stepper motor using an 8051 microcontroller.  
The stepper motor rotates in a step-by-step manner by applying a predefined sequence to its coils.

---

## Working Principle
A stepper motor works on the principle of electromagnetic attraction.  
Each electrical pulse energizes a specific coil, causing the rotor to move by one step.

- One pulse = One step
- Speed is controlled by delay between steps
- Direction is controlled by changing the sequence

---

### Components List
1. 8051 Microcontroller
 (AT89C51 / AT89S52)

2. Stepper Motor
  (Unipolar stepper motor – 4-phase / 5-wire / 6-wire)

3. Motor Driver IC
   ULN2003 (commonly used)

4. Power Supply
   +5V DC (for 8051)
   +9V / +12V DC (for stepper motor)

5. Crystal Oscillator
   11.0592 MHz

6. Capacitors
   22 pF × 2 (crystal)
   10 µF, 0.1 µF (filtering)

7. Resistor
   10 kΩ (reset circuit)

8. Reset Switch
   Push button

9. Programming Device
  USB programmer / ISP programmer

10. Connecting Wires
11. Breadboard / PCB
12. ON/OFF Switch

---

### Clockwise Rotation Sequence

P1 = 0x01;   // 0001 → Coil A ON
delay(1);

P1 = 0x02;   // 0010 → Coil B ON
delay(1);

P1 = 0x04;   // 0100 → Coil C ON
delay(1);

P1 = 0x08;   // 1000 → Coil D ON
delay(1);


---
###  Anticlockwise Rotation Sequence

p1 = 0x08;   // 0001 → Coil D ON
delay(1);

P1 = 0x04;   // 0010 → Coil C ON
delay(1);

P1 = 0x03;   // 0100 → Coil B ON
delay(1);

P1 = 0x02;   // 1000 → Coil A ON
delay(1);

---
### Application 
1. CNC Machines
   Accurate control of tool position

2. Printers
   Paper feed and print head positioning

3. Plotters
   X–Y axis movement control
