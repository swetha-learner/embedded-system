/*
 * File:   newmain.c
 * Author: SWETHA
 *
 * Created on 28 August, 2020, 7:16 PM
 */


#include <xc.h>

#define _XTAL__FREQ 20000000
void UART_send_char(char bt);
void UART_send_string(char st_pt);


void main(void) {
    unsigned int bt, sp_bt;
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
        UART_send_char('\n\r Hello world');
    }
}

UART_send_string(char *st_pt){
    while(*st_pt){
        UART_send_char(*st_pt++);
    }
}
UART_send_char(char bt){
    while(!TXSTAbits.TRMT);
    TXREG = bt;
 }



