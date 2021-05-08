/*
 * File:   newmain.c
 * Author: SWETHA
 *
 * Created on 25 August, 2020, 6:18 PM
 */


#include <xc.h>


#define _XTAL_FREQ 20000000
void main(void) {
    TRISB = 0x00;
    PORTB = 0x01;
    
    while(1)
    {
        __delay_ms(1000);
        if (LATB == 0x00){
            PORTB = 0x01;
        }
        else if(LATBbits.LB7 ==0  ){
            PORTB =(LATB << 1) | (LATB);
        }
        
        else {
            PORTB = (LATB << 1);
        }
    }
    
    
    
    
}
