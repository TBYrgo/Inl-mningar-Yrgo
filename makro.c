#include "makro.h"
/********************************************************************************
* Funktion f�r att t�nda alla leds
********************************************************************************/
void leds_on(void)
{
	PORTD |= (1 << LED1) | (1 << LED2);
	PORTB |= (1 << LED3);
	return;
}

/********************************************************************************
* Funktion f�r att sl�cka alla leds
********************************************************************************/
void leds_off(void)
{
	PORTD &= ~((1 << LED1) | (1 << LED2));
	PORTB &= ~(1 << LED3);
	return;
}

/********************************************************************************
Initierar I/O portar.
********************************************************************************/
void setup(void)
{
	DDRD = ((1 << LED1) | (1 << LED2));
	DDRB = (1 << LED3);
	PINB = ((1 << BUTTON1) | (1 << BUTTON2));
	return;
}

/********************************************************************************
* Delayfunktionen i mikrosekunder 
********************************************************************************/
void delay_ms(const uint16_t delay_time)
{
	for (uint16_t i = 0; i < delay_time; ++i)
	{
		_delay_ms(1);
	}
	return;
}

/********************************************************************************
* Ledblinksekvens om knapp 1 �r nedtryckt.
********************************************************************************/

void leds_blink1(const uint16_t blink_speed)
{
	LED1_ON;
	LED2_OFF;
	LED3_OFF;
	delay_ms(blink_speed);
		
	LED1_OFF;
	LED2_ON;
	LED3_OFF;
	delay_ms(blink_speed);

	LED1_OFF;
	LED2_OFF;
	LED3_ON;
	delay_ms(blink_speed);

	return;
}

/********************************************************************************
* Ledblinksekvens om knapp 2 �r nedtryckt.
********************************************************************************/

void leds_blink2(const uint16_t blink_speed)
{
	LED1_OFF;
	LED2_OFF;
	LED3_ON;
	delay_ms(blink_speed);
	
	LED1_OFF;
	LED2_ON;
	LED3_OFF;
	delay_ms(blink_speed);
	
	LED1_ON;
	LED2_OFF;
	LED3_OFF;
	delay_ms(blink_speed);

	return;
}
