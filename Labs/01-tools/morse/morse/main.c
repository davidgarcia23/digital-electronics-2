/*
 * morse.c
 * Author : TheGT23
 */ 


/* Defines -----------------------------------------------------------*/
#define LED_GREEN   PB5     // AVR pin where green LED is connected
#define SHORT_DELAY 500      // Delay in milliseconds
#define LONG_DELAY 1000      // Delay in milliseconds

#ifndef F_CPU
#define F_CPU 16000000      // CPU frequency in Hz required for delay
#endif

/* Includes ----------------------------------------------------------*/
#include <util/delay.h>     // Functions for busy-wait delay loops
#include <avr/io.h>         // AVR device-specific IO definitions


#include <avr/io.h>
	

int main(void){
    // Set pin as output in Data Direction Register
    // DDRB = DDRB or 0010 0000
    DDRB = DDRB | (1<<LED_GREEN);

    // Set pin LOW in Data Register (LED off)
    // PORTB = PORTB and 1101 1111
    PORTB = PORTB & ~(1<<LED_GREEN);
	
    for(;;) {
		
	// Letter D 
	
		//LONG
		
			// Set pin HIGH in Data Register (LED on)
			// PORTB = PORTB and 1101 1111
			PORTB = PORTB  | (1<<LED_GREEN);
		
			// Pause several milliseconds
			_delay_ms(LONG_DELAY);
		
			// Set pin LOW in Data Register (LED off)
			// PORTB = PORTB and 1101 1111
			PORTB = PORTB & ~(1<<LED_GREEN);
		
			// Pause several milliseconds
			_delay_ms(SHORT_DELAY);
		
		//SHORT
		
			// Set pin HIGH in Data Register (LED on)
			// PORTB = PORTB and 1101 1111
			PORTB = PORTB  | (1<<LED_GREEN);
			
			// Pause several milliseconds
			_delay_ms(SHORT_DELAY);
			
			// Set pin LOW in Data Register (LED off)
			// PORTB = PORTB and 1101 1111
			PORTB = PORTB & ~(1<<LED_GREEN);
			
			// Pause several milliseconds
			_delay_ms(SHORT_DELAY);
			
		//SHORT
		
			// Set pin HIGH in Data Register (LED on)
			// PORTB = PORTB and 1101 1111
			PORTB = PORTB  | (1<<LED_GREEN);
			
			// Pause several milliseconds
			_delay_ms(SHORT_DELAY);
			
			// Set pin LOW in Data Register (LED off)
			// PORTB = PORTB and 1101 1111
			PORTB = PORTB & ~(1<<LED_GREEN);
			
			// Pause several milliseconds
			_delay_ms(SHORT_DELAY);
	
	
	// Letter E 
	
		//SHORT
		
			// Set pin HIGH in Data Register (LED on)
			// PORTB = PORTB and 1101 1111
			PORTB = PORTB  | (1<<LED_GREEN);
			
			// Pause several milliseconds
			_delay_ms(SHORT_DELAY);
			
			// Set pin LOW in Data Register (LED off)
			// PORTB = PORTB and 1101 1111
			PORTB = PORTB & ~(1<<LED_GREEN);
			
			// Pause several milliseconds
			_delay_ms(SHORT_DELAY);
				
	
	// Number 2 
	
		//SHORT
	
			// Set pin HIGH in Data Register (LED on)
			// PORTB = PORTB and 1101 1111
			PORTB = PORTB  | (1<<LED_GREEN);
	
			// Pause several milliseconds
			_delay_ms(SHORT_DELAY);
	
			// Set pin LOW in Data Register (LED off)
			// PORTB = PORTB and 1101 1111
			PORTB = PORTB & ~(1<<LED_GREEN);
	
			// Pause several milliseconds
			_delay_ms(SHORT_DELAY);
		
		//SHORT
		
			// Set pin HIGH in Data Register (LED on)
			// PORTB = PORTB and 1101 1111
			PORTB = PORTB  | (1<<LED_GREEN);
		
			// Pause several milliseconds
			_delay_ms(SHORT_DELAY);
		
			// Set pin LOW in Data Register (LED off)
			// PORTB = PORTB and 1101 1111
			PORTB = PORTB & ~(1<<LED_GREEN);
		
			// Pause several milliseconds
			_delay_ms(SHORT_DELAY);
			
		//LONG
		
			// Set pin HIGH in Data Register (LED on)
			// PORTB = PORTB and 1101 1111
			PORTB = PORTB  | (1<<LED_GREEN);
	
			// Pause several milliseconds
			_delay_ms(LONG_DELAY);
	
			// Set pin LOW in Data Register (LED off)
			// PORTB = PORTB and 1101 1111
			PORTB = PORTB & ~(1<<LED_GREEN);
	
			// Pause several milliseconds
			_delay_ms(SHORT_DELAY);
			
		//LONG
	
			// Set pin HIGH in Data Register (LED on)
			// PORTB = PORTB and 1101 1111
			PORTB = PORTB  | (1<<LED_GREEN);
		
			// Pause several milliseconds
			_delay_ms(LONG_DELAY);
		
			// Set pin LOW in Data Register (LED off)
			// PORTB = PORTB and 1101 1111
			PORTB = PORTB & ~(1<<LED_GREEN);
		
			// Pause several milliseconds
			_delay_ms(SHORT_DELAY);
			
		//LONG
		
			// Set pin HIGH in Data Register (LED on)
			// PORTB = PORTB and 1101 1111
			PORTB = PORTB  | (1<<LED_GREEN);
			
			// Pause several milliseconds
			_delay_ms(LONG_DELAY);
			
			// Set pin LOW in Data Register (LED off)
			// PORTB = PORTB and 1101 1111
			PORTB = PORTB & ~(1<<LED_GREEN);
			
			// Pause several milliseconds
			_delay_ms(SHORT_DELAY);
	
    }
}



