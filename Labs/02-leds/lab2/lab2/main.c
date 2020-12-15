/***********************************************************************
 * Author: DavidGarcia Torre
 **********************************************************************/

/* Defines -----------------------------------------------------------*/
#define LED_RED1   PC0     // AVR pin where red LED 1 is connected
#define LED_RED2   PC1     // AVR pin where red LED 2 is connected
#define LED_RED3   PC2     // AVR pin where red LED 3 is connected
#define LED_RED4   PC3     // AVR pin where red LED 4 is connected
#define LED_RED5   PC4     // AVR pin where red LED 5 is connected
#define LED_RED6   PC5     // AVR pin where red LED 6 is connected
#define BUTTON	   PD0     // AVR pin where the button is connected

#define SHORT_DELAY 250      // Delay in milliseconds

#ifndef F_CPU
#define F_CPU 16000000      // CPU frequency in Hz required for delay
#endif

/* Includes ----------------------------------------------------------*/
#include <util/delay.h>     // Functions for busy-wait delay loops
#include <avr/io.h>         // AVR device-specific IO definitions

/* Functions ---------------------------------------------------------
 * Main function where the program execution begins.
 */

int leds[] ={LED_RED1,LED_RED2,LED_RED3,LED_RED4,LED_RED5,LED_RED6};
int a=0,b=0;

int main(void)
{
	
	
	// Set pin as output in Data Direction Register
	
	DDRC = DDRC | (1<<LED_RED1);
	DDRC = DDRC | (1<<LED_RED2);
	DDRC = DDRC | (1<<LED_RED3);
	DDRC = DDRC | (1<<LED_RED4);
	DDRC = DDRC | (1<<LED_RED5);
	DDRC = DDRC | (1<<LED_RED6);
	

	// Set pin LOW in Data Register (LED off)
	
	PORTC = PORTC | (1<<LED_RED1);
	PORTC = PORTC | (1<<LED_RED2);
	PORTC = PORTC | (1<<LED_RED3);
	PORTC = PORTC | (1<<LED_RED4);
	PORTC = PORTC | (1<<LED_RED5);
	PORTC = PORTC | (1<<LED_RED6);
	
	/*PUSH BUTTON*/
	
	DDRD = DDRD & ~(1<<BUTTON);  // input
	PORTD = PORTD | (1<<BUTTON); // enable internal pull up 
	
    // Infinite loop
    for (;;){
		
        // Pause several milliseconds
        _delay_ms(SHORT_DELAY);
		
		PORTC = PORTC | (1<<leds[a]);	
		
		if(bit_is_clear(PIND,BUTTON)){ //we select the direction with this if
		
		   if(a == 5){	
			   
			   b = 1;
			   PORTC = PORTC | (1<<leds[5]);	
			
		   }else if(a == 0){
			
			   b = 0;
			   PORTC = PORTC | (1<<leds[0]);
			
		   } // we rest one to a unless if b is 0 that we add one
		
		   if(b == 0){
			
			   a++;
			
		   }else{
			
			   a--;
			
		   }	
		
		PORTC = PORTC & ~(1<<leds[a]);	
			
		}
			
		}
    return 0;
}
