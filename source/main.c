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
    unsigned short tmpA = 0;
    /* Insert your solution below */
    while (1) {
	tmpA = A + B + C;
	tmpA = tmpA >> 2;
	
    	if(A>140 || B>140 || C>140){
		B=B || 0x01;
	} 
	if(abs(A-C)>80){
		B = B || 0x02;
	}
	
    }
    return 1;
}
