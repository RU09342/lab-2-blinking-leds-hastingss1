#include <msp430.h> 


/**
 * main.c
 */

#include <msp430.h>

void main(void) {
    WDTCTL = WDTPW | WDTHOLD;               // Stop watchdog timer
    PM5CTL0 &= ~LOCKLPM5;                   // Disable the GPIO power-on default high-impedance mode
                                            // to activate previously configured port settings
    P1DIR |= BIT0;// Set P1.0 to output direction
    P9DIR |= BIT7;                        // Set P9.7 to output direction
    int counter = 0;

    while(1) {
        if(counter%1000==0) { //1000 ms
        P1OUT ^= BIT0; //togle 1.0
        }
        if(counter%2000==0) { //2000 ms
        P9OUT ^= BIT7; //toggle 9.7
        counter = 0; //reset
        }
        counter++;
    }
}

