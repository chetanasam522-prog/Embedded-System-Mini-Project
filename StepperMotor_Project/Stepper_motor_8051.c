/** # point-wise explanation of  8051 Stepper Motor program (Full-Step mode) for clockwise and anti-clockwise rotation.
    
    1. Header File
       include <reg51.h>
     . Includes 8051 special function register definitions.
     . Required to access ports like P1.

    2. Delay Function
      void delay(unsigned int time)
    {
      unsigned int i, j;
      for(i = 0; i < time; i++)
        for(j = 0; j < 1275; j++);
    } 
    Explanation:
    . Creates a software delay.
    . time = controls delay duration.
    . Nested loops waste CPU cycles.
    . Delay depends on crystal frequency.
    . delay(1) ≈ small step delay (controls speed of stepper motor).
    # Note:
    . Smaller delay → faster rotation
    . Larger delay → slower rotation

    3. Main Function
      void main()
    {
      while(1)
    . Program execution starts here.
    . while(1) makes the program run continuously.

    4. Stepper Motor Connection Concept
     . Stepper motor coils are connected to:
       P1.0 = Coil A
       P1.1 = Coil B
       P1.2 = Coil C
       P1.3 = Coil D
    . A driver IC (ULN2003 / L293D) is used between motor and 8051.

    5. Full-Step Clockwise Rotation Logic
      P1 = 0x01;   // 0001 = Coil A ON
      delay(1);
      P1 = 0x02;   // 0010 = Coil B ON
      delay(1);
      P1 = 0x04;   // 0100 = Coil C ON
      delay(1);
      P1 = 0x08;   // 1000 = Coil D ON
      delay(1);

    6. Anti-Clockwise Rotation Logic (Reverse Sequence)
       P1 = 0x08;
       delay(1);
       P1 = 0x04;
       delay(1);
       P1 = 0x02;
       delay(1);
       P1 = 0x01;
       delay(1);
*/
/** Stepper Motor Code(8051-Full Step,clockwise) */
#include <reg51.h>

/* Delay Function */
void delay(unsigned int time)
{
    unsigned int i, j;
    for(i = 0; i < time; i++)
        for(j = 0; j < 1275; j++);
}

void main()
{
    while(1)
    {
        P1 = 0x01;   // Step 1: Coil A ON
        delay(1);

        P1 = 0x02;   // Step 2: Coil B ON
        delay(1);

        P1 = 0x03;   // Step 3: Coil C ON
        delay(1);

        P1 = 0x04;   // Step 4: Coil D ON
        delay(1);
    }
}
/**--------------------------------------------------------------------------------------------------------------------------**/

/** Stepper Motor Code(8051-Full Step,Anti-clockwise) **/

#include <reg51.h>

/* Delay Function */
void delay(unsigned int time)
{
    unsigned int i, j;
    for(i = 0; i < time; i++)
        for(j = 0; j < 1275; j++);
}

void main()
{
    while(1)
    {
        P1 = 0x08;   // Step 1: Coil D ON
        delay(1);

        P1 = 0x04;   // Step 2: Coil C ON
        delay(1);

        P1 = 0x02;   // Step 3: Coil B ON
        delay(1);

        P1 = 0x01;   // Step 4: Coil A ON
        delay(1);
    }
}



