
// PIC16F877A Configuration Bit Settings

// 'C' source line config statements

// CONFIG
#pragma config FOSC = XT     // Oscillator Selection bits (RC oscillator)
#pragma config WDTE = ON        // Watchdog Timer Enable bit (WDT enabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = ON       // Brown-out Reset Enable bit (BOR enabled)
#pragma config LVP = ON         // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3/PGM pin has PGM function; low-voltage programming enabled)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#define _XTAL_FREQ 16000000     // 16Mhz

#include <xc.h>


void main(void) {
    
    // Set RA0 as output:
    TRISAbits.TRISA0 = 0;
    
    // Set the LED initially, off.
    PORTAbits.RA0 = 0;
    
    while(1){
        __delay_ms(500);    // sleep 0.5s
        PORTAbits.RA0 = 1;  // turn-on LED 
        
        __delay_ms(500);    // sleep 0.5s
        PORTAbits.RA0 = 0;  // Turn-off 
    }
    return;
}
