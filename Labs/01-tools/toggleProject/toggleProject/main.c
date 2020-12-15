/*
 * toggleProject.c
 *
 * Created: 28/10/2020 19:02:51
 * Author : TheGT23
 */ 

#include <avr/io.h>
//#define F_CPU 16000000VL
#include "util/delay.h"


int main(void)
{
    DDRB = 0xFF; //make port B as output port
	
    while (1) 
    {
		PORTB = 0xFF;
		_delay_ms(1000);
		PORTB = 0x00;
		_delay_ms(1000);
		
    }
}

