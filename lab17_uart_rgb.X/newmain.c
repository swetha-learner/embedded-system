/*
 * File:   newmain.c
 * Author: SWETHA
 *
 * Created on 29 August, 2020, 2:33 PM
 */


#include <xc.h>
#define _XTAL_FREQ 20000000
void main(void) {
    unsigned int ch;
    TRISB = 0x00;
    PORTB = 0x00;
    
    TRISB = 0xF0;
    PORTB = 0xF0;
    TRISCbits.RC6 = 0;
    TRISCbits.RC7 = 1;
    RCSTAbits.SPEN = 1;
    TXSTAbits.TXEN = 1;
    
    PIE1bits.RCIE = 1;
    RCSTAbits.CREN = 1;
    
    
    TXSTAbits.BRGH = 0;
    TXSTAbits.SYNC = 0;
    BAUDCONbits.BRG16 = 1;
    SPBRG = 129;
    SPBRGH = 0;
    
    
    while(1){
        while(!PIR1bits.RCIF);
        ch = RCREG;
        if((ch == 'R') || (ch == 'r')){
            PORTDbits.RD1 = 0x02;  // glow red light
        }
        else if((ch == 'G') || (ch =='g')){
             PORTDbits.RD2 = 0x04; //glow green light
        }
        else if((ch == 'B') || (ch == 'b')){
             PORTDbits.RD3 = 0x08; // glow blue light
        }
        else{
            PORTDbits.RD1 = 0;
            PORTDbits.RD2 = 0;
            PORTDbits.RD3 = 0;
        }
    }
}
