/*
 * File:   newmain.c
 * Author: SWETHA
 *
 * Created on 28 August, 2020, 7:16 PM
 */


#include <xc.h>

#define _XTAL__FREQ 20000000

void main(void) {
    
    TRISB = 0xF0; // set RB0 to RB3 as Output
    PORTB = 0xF0;  // set RB0 to RB3 to LOW Logic
    TRISCbits.RC6 = 0; // set TX  as Output
    TRISCbits.RC7 = 1; // set RX as Input
    RCSTAbits.SPEN =1; // Enable Serial Port Pins
    TXSTAbits.TXEN = 1; // Start  Data Transmission
    
    // ******* Baud Rate GEneration *****
    TXSTAbits.BRGH = 0; // Low Rate
    TXSTAbits.SYNC = 0; // async mode
    BAUDCONbits.BRG16 = 1; // Enable 16 bit Baud Rate mode
    SPBRG = 129; 
    SPBRGH = 0; // Used only during 16 bit Baud Rate
    //**************************
    
    while(1) {
        TXREG = 'A';
        while(!TXSTAbits.TRMT);
        __delay_ms(10);
                
              
    
        
    }
    
}
