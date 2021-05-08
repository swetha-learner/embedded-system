/*
 * File:   newmain.c
 * Author: SWETHA
 *
 * Created on 29 August, 2020, 2:11 PM
 */


#include <xc.h>
#define _XTAL_FREQ 20000000

void main(void) {
    unsigned int ch, newch ;
    
    PIE1bits.RCIE = 1;
    RCSTAbits.CREN = 1;
    
    TXSTAbits.BRGH = 0;
    TXSTAbits.SYNC = 0;
    BAUDCONbits.BRG16 = 1;
    SPBRG = 129;
    SPBRGH = 0 ;
    while(1)
    {
        while(!PIR1bits.RC1IF);
        ch = RCREG;
        if(ch >=65 && ch<=90)
        {
            
        }
        
    }
    
    
}
