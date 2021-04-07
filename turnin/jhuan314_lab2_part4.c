/*	Author: jhuan314
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
    DDRA = 0x00;
    DDRB = 0x00;
    DDRD = 0xFF;
    DDRC = 0x00;
    PORTA = 0xFF;
    PORTB = 0xFF;
    PORTD = 0x00;
    PORTC = 0xFF;
    unsigned char tmpA = 0;
    /* Insert your solution below */
    while (1) {
	tmpA = PINA + PINB + PINC;
	tmpA = tmpA >> 2;
	PORTD = tmpA;
	PORTD = PORTD & 0xFC;
	
    	if(PINA + PINB + PINC > 140){
		PORTD = PORTD + 1;
	} 
	if(abs(PINA-PINC)>80){
		PORTD = PORTD + 2;
	}
	
    }
    return 1;
}
