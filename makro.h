/********************************************************************************
* Inkluderingsdirektiv 
********************************************************************************/
#ifndef MAKRO_H_
#define MAKRO_H_

#define F_CPU 16000000UL /*Klockfrekvens*/

#include <avr/io.h> /*I/O Register*/
#include <util/delay.h> /*Fördröjning*/


/*Defionitioner*/

#define LED1 6 /* Led 1 till pin 6, PORTD6*/
#define LED2 7 /* Led 2 till pin 7, PORTD7*/
#define LED3 0 /* Led 3 till pin 8, PORTB0*/

#define BUTTON1 4 /*Knapp 1 till pin 12, PORTB4*/
#define BUTTON2 5 /*Knapp 2 till pin 13, PORTB5*/

#define LED1_ON PORTD |= (1<<LED1) /*Tänder led 1*/
#define LED2_ON PORTD |= (1<<LED2) /*Tänder led 2*/
#define LED3_ON PORTB |= (1<<LED3) /*Tänder led 3*/

#define LED1_OFF PORTD &= ~(1 << LED1) /*Släcker led 1*/
#define LED2_OFF PORTD &= ~(1 << LED2) /* Släcker led 2*/
#define LED3_OFF PORTB &= ~(1 << LED3) /*Släcker led 3*/

void leds_on(void); /*Tänder alla leds*/
void leds_off(void); /*Släcker alla leds*/

#define BUTTON1_IS_PRESSED (PINB & (1 << BUTTON1)) /*Kollar om knapp ett är nertryckt*/
#define BUTTON2_IS_PRESSED (PINB & (1 << BUTTON2)) /**/

/********************************************************************************
* Initierar I/O-portar.
********************************************************************************/
void setup(void);

/********************************************************************************
* Delayfunktionen i mikrosekunder 
********************************************************************************/
void delay_ms(const uint16_t delay_time);

/********************************************************************************
* Ledblinksekvens om knapp 1 är nedtryckt
********************************************************************************/
void leds_blink1(const uint16_t blink_speed);

/********************************************************************************
* Ledblinksekvens om knapp 2 är nedtryckt 
********************************************************************************/
void leds_blink2(const uint16_t blink_speed);


#endif