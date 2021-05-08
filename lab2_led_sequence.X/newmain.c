/*
 * File:   newmain.c
 * Author: SWETHA
 *
 * Created on 24 August, 2020, 7:39 PM
 */


#include <xc.h>

#define _XTAL_FREQ 20000000

void main(void) {
    TRISB = 0x00;
    PORTB = 0x00;

    while(1)
    {
        PORTB = 0x02; // RB3--0001---RB0  
        __delay_ms(100);   
        PORTB = 0x04; // RB4--0010---RB1  
        __delay_ms(100);
        PORTB = 0x00=8; // RB4--0001---RB1  
        __delay_ms(100);
        PORTB = 0x10; // RB4--0001---RB1  
        __delay_ms(100);   
    }

}
