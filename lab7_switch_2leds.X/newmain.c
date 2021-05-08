/*
 * File:   newmain.c
 * Author: SWETHA
 *
 * Created on 25 August, 2020, 7:17 PM
 */


#include <xc.h>

#define _XTAL_FREQ 20000000

void main(void) {
    TRISBbits.RB1 = 0;
    TRISBbits.RB2 = 0;
    TRISDbits.RD1 = 1;
    PORTBbits.RB1 = 0;
    PORTBbits.RB2 = 0;
    
    while(1)
    {
        while(PORTDbits.RD1 == 1)
        {
            PORTBbits.RB1 = !LATBbits.LB1;
            __delay_ms(10);
        }
        PORTBbits.RB2 = !LATBbits.LB2;
        __delay_ms(10);
    }
}
