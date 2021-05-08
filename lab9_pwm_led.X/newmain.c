/*
 * File:   newmain.c
 * Author: SWETHA
 *
 * Created on 26 August, 2020, 7:51 PM
 */


#include <xc.h>


#define _XTAL_FREQ 20000000

void main(void) {
    TRISCbits.RC2 = 0;  // setting ccp bit as output
    PR2 = 0xFF;  // Assigning end time of timer
    CCPR1L = 0x80; // Higher 8 bits of 10 bit PWM Duty Cycle
    CCP1CONbits.DC1B = 0b00;
    //CCP1CONbits.DC1B0 = 0;
    //CCP1CON = (0x00) & (0xFF);
    T2CONbits.T2CKPS = 0b11 ;
    T2CONbits.TMR2ON = 1;
    while(1)
    {
        __delay_ms(10);
               
    }
}
