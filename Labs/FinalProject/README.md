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

