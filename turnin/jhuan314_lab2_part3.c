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
    DDRC = 0xFF;
    PORTA = 0xFF;
    PORTC = 0x00;
    unsigned char tmpA = 0x00;
    unsigned char tmpB;
    /* Insert your solution below */
    while (1) {
	tmpA = 0;
	tmpB = PINA;
	if(!(tmpB&0x01)){
                tmpA+=1;
        }
        if(!((tmpB>>1)&0x01)){
                tmpA+=1;
        }
        if(!((tmpB>>2)&0x01)){
                tmpA+=1;
        }
        if(!((tmpB>>3)&0x01)){
                tmpA+=1;
        }
	if(tmpB&0x01&&((tmpB>>1)&0x01)&&((tmpB>>2)&0x01)&&((tmpB>>3)&0x01)){
               tmpA=128;
        } 
	PORTC = tmpA;
    }
    return 1;
}
