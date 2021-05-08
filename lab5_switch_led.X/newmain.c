/*
 * File:   newmain.c
 * Author: SWETHA
 *
 * Created on 25 August, 2020, 6:38 PM
 */


#include <xc.h>


#define _XTAL_FREQ 20000000

void main(void) {
    TRISBbits.RB1 = 0;  //output
    TRISDbits.RD1 = 1;  //Input
    while(1) {
        if(PORTDbits.RD1 ==1)  // switch is presssed
        {
             PORTBbits.RB1 = 1;  // Led On
        }
        else                    // switch released
        {
            PORTBbits.RB1 =0;  // Led off
        }
        
        // method 2
        // PORTBbits.RB1 == PORTDbits.RD1;
   }
}
