/*
 * File:   newmain.c
 * Author: SWETHA
 *
 * Created on 24 August, 2020, 6:53 PM
 */


#include <xc.h>

#define _XTAL_FREQ 20000000

void main(void) {
    TRISBbits.RB0 = 0;    // set RB0 as an Output pin!
    while(1)
    {
        PORTBbits.RB0 = 1;   // set RB0 as logic high [on]
        __delay_ms(1000);   // Adding delay of 1000 milliseconds
        PORTBbits.RB0 = 0;  // set RB0 as logic low [off]
        __delay_ms(1000);
    }
   
}
