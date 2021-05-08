/*
 * File:   newmain.c
 * Author: SWETHA
 *
 * Created on 25 August, 2020, 7:30 PM
 */


#include <xc.h>

#define _XTAL_FREQ 20000000
void displaynum(int i);

void main(void) {
    int i;
    TRISB = 0x00;
    PORTB = 0x00;
    while(1)
    {
        for(i=0;i<10;i++)
        {
           displaynum(1); 
        }
    }
    
}


void displaynum(int i)
{
    switch(i)
    {
        case 0: PORTB = 0xFE; break;
        case 1: PORTB = 0xB0; break;
        case 2: PORTB = 0xED; break;
        case 3: PORTB = 0xF9; break;
        case 4: PORTB = 0xB3; break;
        case 5: PORTB = 0xDB; break;
        case 6: PORTB = 0x9F; break;
        case 7: PORTB = 0xF0; break;
        case 8: PORTB = 0xFF; break;
        case 9: PORTB = 0xF3; break;
        default:PORTB = 0x00; break;
    }
    __delay_ms(1);
}
