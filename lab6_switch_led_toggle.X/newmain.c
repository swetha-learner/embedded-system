/*
 * File:   newmain.c
 * Author: SWETHA
 *
 * Created on 25 August, 2020, 6:57 PM
 */


#include <xc.h>


#define _XTAL_FREQ 20000000

void main(void) {
    TRISBbits.RB1 =0; //Output
    TRISDbits.RD1 = 1; //Input
    PORTBbits.RB1 = 0;
    while(1){
        if(PORTDbits.RD1 == 1)
       {
            PORTBbits.RB1 = ! LATBbits.LB1 ;
            __delay_ms(10);
       }
    }
    
}
