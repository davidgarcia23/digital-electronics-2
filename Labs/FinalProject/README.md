# DOOR CONTROL ACCESS BY PASSWORD

## Team members

Elena Arjona Bustos

[Repository](https://github.com/elenaab16/Digital-Electronics2)

David Garcia Torre

[Repository](https://github.com/davidgarcia23/digital-electronics-2/edit/main/Labs/FinalProject)

## Project objectives
Our goal is to develope a door lock system with a 4x3 keyboard control, a relay, a display, an uart, leds controlled by atmega328p microcontroller.
The system we have designed has to open the relay that represent a door, when a right code is introduced and signal the operation.


There are four correct password, if case one of them is introduced, the door relay will be opened and the green led is turn on. In case a wrong code is introduced, the relay is going to remain closed and the red led will be turned on.


While the user is introducing the code the relay will remain always closed, if it takes more than four seconds to the user to write the code, it will be reseted.
When the code is right, and the door is opened, it takes three seconds to automaticly close the door. By the time the code is beeing introduced, is going to be shown the number of digits introduced on a LCD screen with an asterisk.


Every time the state of the door change, the system send a message by uart. It was considered using an audio output, but the system was more inconveninet than usefull.

## Hardware description

The atmega328p microcontroller process the signals that come from the keyboard as input, and elaborate an output that serves to modify the status of the relay and turn the LEDs on or off when necessary. The resistors are used to protect the LEDs, and the transistor and diode to implementate relay circuit.

The yellow led is turned on when the door is closed, green one when the password is right and red one when the password is wrong.




![alt text](https://github.com/davidgarcia23/digital-electronics-2/blob/main/Labs/FinalProject/FinalProject/circuito.png "Circuit")

 - [ ] **HARDWARE**
 - MICRO atmega328p
 - LCD Hd44780-1
 - UART
 - Relay
  - LEDs
 - Transistor
 - Diode
 - Resistor
 - KeyPad
 - Fixed Voltage

## Code description and simulations

We have created keyboard librarie and used the other ones from other exercises (gpio,lcd,timer,uart)

### Main



int main(void){

	initialize();
	
	lcd_gotoxy(1, 0);
	lcd_puts("Enter password:");
	
	lcd_gotoxy(8,2);
	lcd_puts("----");
	
	uart_puts("Welcome. Press * to verify the code.\n\n");
	
    while (1){
		
		// Error signaling
		if(state == 1){			// Right code
			
			GPIO_write_high(&PORTB, LED_GREEN);
			GPIO_write_low(&PORTC, RELE);
			
			
		}else if(state == 0){	// Wrong code 
			
			GPIO_write_high(&PORTB, LED_RED);
			GPIO_write_high(&PORTC, RELE);
			
			
		}else{					// Introducing the code
			
			GPIO_write_low(&PORTB, LED_RED);
			GPIO_write_low(&PORTB, LED_GREEN);
			GPIO_write_high(&PORTC, RELE);
			
		}
		
    }
	
	
}

//Timer handler

ISR(TIMER1_OVF_vect){

	static char* open = "The door is open.\n\n";
	static char* close = "The door is close.\n\n";
	static char* code = "The code is being introduced.\n\n";
	static int p_state = 3;

	state = scan(GPIO_read(&PINC,ROW1), GPIO_read(&PINC,ROW2), GPIO_read(&PINC,ROW3), GPIO_read(&PINC,ROW4));
	
	if(p_state != state){			//If there is a change on state a message is sent to uart
		
		if(state == 0){
			
			uart_puts(close);
			
		}else if(state == 1){
			
			uart_puts(open);
			
		}else{
			
			uart_puts(code);
			
		}
		
	}
	
	p_state = state;
	
}


[FULL CODE](https://github.com/davidgarcia23/digital-electronics-2/blob/main/Labs/FinalProject/FinalProject/FinalProject/main.c)

