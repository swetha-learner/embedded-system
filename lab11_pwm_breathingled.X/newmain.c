/*
 * File:   newmain.c
 * Author: SWETHA
 *
 * Created on 27 August, 2020, 7:11 PM
 */


#include <xc.h>
#define _XTAL_FREQ 20000000

void main(void) {
    int i;
    TRISCbits.RC2 = 0;
    PR2 = 0xFF;
    CCPR1L = 0x00;
    CCP1CONbits.DC1B = 0b00;
    
   // CCP1CON = (0x00) & (0xFF); 
    T2CONbits.T2CKPS = 0b11 ;
    T2CONbits.TMR2ON = 1;
    while(1)
    {
        for(i=0;i<256;i++)
        {
            CCPR1L = 1;
            __Delay_ms(10);
        }
         for(i=0;i<256;i++)
        {
            CCPR1L = 255-1;
            __Delay_ms(10);
        }
        
    }
}
