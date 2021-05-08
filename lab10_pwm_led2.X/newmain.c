/*
 * File:   newmain.c
 * Author: SWETHA
 *
 * Created on 27 August, 2020, 6:58 PM
 */


#include <xc.h>

#define _XTAL_FREQ 20000000

void main(void) {
    TRISCbits.RC2 = 0;
    PR2 = 0x3D;
    CCPR1L = 0x80;
    CCP1CONbits.DC1B = 0b00;
    
   // CCP1CON = (0x00) & (0xFF); 
     T2CONbits.T2CKPS = 0b11 ;
    T2CONbits.TMR2ON = 1;
    while(1)
    {
        
    }
}
