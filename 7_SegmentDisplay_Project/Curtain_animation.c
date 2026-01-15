/**This code demonstrates a basic curtain closing effect on a 7-segment display.

 ==== Working ====

 - All segments are initially turned ON.
 - Segments are gradually turned OFF from the outer edges towards the center.
 - Finally, all segments are turned OFF.
 - The process repeats continuously using an infinite loop.

 ==== Code Logic ====

   Hex Value       Effect
    0xFF        All segment ON
    0X7E        Outer segment OFF
    0x3c        More segment OFF
    0x18        Only center segment ON
    0x00        All segment OFF
    */

 #include<reg51.h>
void delay (int);
	void main (void)
	{
				
	while(1)
	{
		P2=0xFF;
		delay(1000);
				delay(1000);

		P2=0x7E;
		delay(1000);
		delay(1000);
		P2=0x3C;
		delay(1000);
		delay(1000);
		P2=0x18;
		delay(1000);
		delay(1000);
		P2=0x00;
		delay(1000);
		delay(1000);
	}
	}
	void delay (int k)
	{
	int a,b;
		for(a=0;a<k;a++);
		for(b=0;b<1274;b++);
	}

/*------------------------------------------------------------------------------------------------------------*/

/**  This is the main implementation of the project.  
 It creates a complete curtain opening and closing animation on a 7-segment display.

  ==== Working ====
 1. Curtain Closing
   - All segments ON → outer segments OFF → center segments → all OFF
 2. Curtain Opening
   - All segments OFF → center segments ON → outer segments → all ON
 3. Delays are added between each step to make the animation clearly visible.
 4. The animation runs continuously

 ==== Code Logic ====
 Curtain Closing Logic
 P2 = 0xFF; All segments ON (Curtain fully open)
 P2 = 0x7E; Outer segments OFF
 P2 = 0x3C; More segments OFF
 P2 = 0x18; Only center segments ON
 P2 = 0x00; All segments OFF (Curtain fully closed)

 Curtain Opening Logic
 P2 = 0x00; All segments OFF
 P2 = 0x18; Center segments ON
 P2 = 0x3C; More segments ON
 P2 = 0x7E; Outer segments ON
 P2 = 0xFF; All segments ON (Curtain fully open)**/

#include<reg51.h>
void delay (int);
	void main (void)
	{
				
	while(1)
	{
		P2=0xFF;
		delay(5000);
		delay(5000);

		P2=0x7E;
		delay(5000);
		delay(5000);
		P2=0x3C;
		delay(5000);
		delay(5000);
		P2=0x18;
		delay(5000);
		delay(5000);
		P2=0x00;
	delay(5000);
		delay(5000);
	
	P2=0x00;
		delay(5000);
		delay(5000);

		P2=0x18;
		delay(5000);
		delay(5000);
P2=0x3C;
		delay(5000);
		delay(1000);
P2=0x7E;
		delay(5000);
		delay(5000);
		P2=0xFF;
		delay(5000);
		delay(5000);

		
	}
	}
	void delay (int k)
	{
	int a,b;
		for(a=0;a<k;a++);
		for(b=0;b<1274;b++);
	}
