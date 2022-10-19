
#include "makro.h"

/********************************************************************************
* main: Initierar I/O portar med setup. 
* Kollar om knapp 1, knapp 2 eller både knapp 1 och knapp 2 är intryckta. 
* Kör sedan blink sekvens beroende på vilken kanpp som är intryckt.
* Om inget är tryckt stäng av leds. 
********************************************************************************/
int main(void)
{
	setup();
    
    while (1) 
    {
	    
		if (BUTTON1_IS_PRESSED && !BUTTON2_IS_PRESSED)
		{
			leds_blink1(100);
		}
		
		else if (!BUTTON1_IS_PRESSED && BUTTON2_IS_PRESSED)
		{
			leds_blink2(100);
		}
		
		else if(BUTTON1_IS_PRESSED && BUTTON2_IS_PRESSED)
		{
			leds_on();
		}
		
		else
		{
			leds_off();
		}
		
			
    }
}

