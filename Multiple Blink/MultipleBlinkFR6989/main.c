#include <msp430.h> 


/**
 * main.c
 */

#include <msp430.h>

void main(void) {
    WDTCTL = WDTPW | WDTHOLD;               // Stop watchdog timer
    PM5CTL0 &= ~LOCKLPM5;                   // Disable the GPIO power-on default high-impedance mode
                                            // to activate previously configured port settings
    P1DIR |= BIT0;
    P9DIR |= BIT7;                        // Set P1.0 to output direction
    int counter = 0;

    while(1) {
        if(counter%1000==0) {
        P1OUT ^= BIT0;
        }
        if(counter%2000==0) {
        P9OUT ^= BIT7;
        counter = 0;
        }
        counter++;
    }
}

