/** # point-wise explanation of the code logic for 8051 motor ON–OFF program.
    
    1. Header File
       include <reg51.h>
     . This header file is used for 8051 microcontroller.
     . It defines special function registers (SFRs) like P1, P2, TMOD, etc.

    2. Motor Pin Definition
       sbit MOTOR = P1^0;
     . sbit is used to define a single bit of a port.
     . P1^0 means Port 1, Pin 0.
     . The motor control signal is connected to P1.0.
     . Now MOTOR acts like a variable:
     . MOTOR = 1 = Motor ON
     . MOTOR = 0 = Motor OFF

    3. Delay Function
       void delay_ms(unsigned int ms)
    {
       unsigned int i, j;
       for(i = 0; i < ms; i++)
        for(j = 0; j < 1275; j++);
    }
     . Logic of delay:
     . This function creates a software delay.
     . It uses nested for loops to waste CPU time.
     . Logic of delay:
     . This function creates a software delay.
     . It uses nested for loops to waste CPU time.
     Explanation:
     . ms → number of milliseconds to delay
     . Outer loop (i) runs ms times
     . Inner loop (j) runs 1275 times for each millisecond
     . ; at the end of inner loop means do nothing, just wait
     Result:
    . Calling delay_ms(1000) ≈ 1 second delay (approximate, depends on crystal frequency)
    
    4. Main Function
      void main()
   {
     Program execution starts from main().

    5. Initial Motor State
       MOTOR = 0;
     . Motor is turned OFF initially for safety.

    6. Infinite Loop
       while(1)
     . Creates an infinite loop.
     . The code inside this loop runs forever.

    7. Motor ON
       MOTOR = 1;
       delay_ms(1000);
     . MOTOR = 1 = P1.0 becomes HIGH
     . Motor turns ON
     . Program waits for 1 second

    8. Motor OFF
       MOTOR = 0;
       delay_ms(1000);
     . MOTOR = 0 → P1.0 becomes LOW
     . Motor turns OFF
     . Program waits for 1 second
    
    9. Repetition
     . After OFF delay, control goes back to while(1)
     . Motor keeps ON for 1 sec → OFF for 1 sec repeatedly
 */

#include <reg51.h>
// Motor connected to P1.0
sbit MOTOR = P1^0;

// Delay function
void delay_ms(unsigned int ms)
{
    unsigned int i, j;
    for(i = 0; i < ms; i++)
        for(j = 0; j < 1275; j++);
}

void main()
{
    MOTOR = 0;   // Motor OFF initially

    while(1)
    {
        MOTOR = 1;      // Motor ON
        delay_ms(1000); // 1 second delay

        MOTOR = 0;      // Motor OFF
        delay_ms(1000); // 1 second delay
   }
}

/**------------------------------------------------------------------------------------------------------------**/

/** # Overall working summary  for  8051 DC motor direction control program (using IN1 & IN2).
    . Motor rotates clockwise   
    . Motor stops
    . Motor rotates anti-clockwise
    . Motor stops
    . Steps repeat forever

    # Hardware Connection (Concept)
    . P1.0 → IN1 of motor driver
    . P1.1 → IN2 of motor driver
    . Motor connected to output pins of driver IC
    . External power supply for motor  
 */

#include <reg51.h>

sbit IN1 = P1^0;
sbit IN2 = P1^1;

void delay()
{
    int i;
    for(i = 0; i < 30000; i++);
}

void main()
{
    while(1)
    {
        // Clockwise direction
        IN1 = 1;
        IN2 = 0;
        delay();

        // Stop
        IN1 = 0;
        IN2 = 0;
        delay();

        // Anti-clockwise direction
        IN1 = 0;
        IN2 = 1;
        delay();

        // Stop
        IN1 = 0;
        IN2 = 0;
        delay();
    }
}
