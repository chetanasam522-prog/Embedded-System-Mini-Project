// LED Pattern Generator Code (8051)

//  Logic Explanation
//  P1 = 0xFF → All LEDs ON
//  P1 = 0x00 → All LEDs OFF
//  << and >> → Shift LED pattern left/right
//  delay() → Creates visible LED blinking

 #include <reg51.h>

// Delay function
void delay(unsigned int time)
{
    unsigned int i, j;
    for(i = 0; i < time; i++)
        for(j = 0; j < 1275; j++);
}

void main()
{
    unsigned char pattern;

    while(1)
    {
        // Pattern 1: All LEDs ON
        P1 = 0xFF;
        delay(500);

        // Pattern 2: All LEDs OFF
        P1 = 0x00;
        delay(500);

        // Pattern 3: Left to Right Running LED
        pattern = 0x01;
        while(pattern <= 0x80)
        {
            P1 = pattern;
            delay(300);
            pattern = pattern << 1;
        }

        // Pattern 4: Right to Left Running LED
        pattern = 0x80;
        while(pattern >= 0x01)
        {
            P1 = pattern;
            delay(300);
            pattern = pattern >> 1;
        }

        // Pattern 5: Alternate LEDs
        P1 = 0xAA;   // 10101010
        delay(500);
        P1 = 0x55;   // 01010101
        delay(500);
    }
}


