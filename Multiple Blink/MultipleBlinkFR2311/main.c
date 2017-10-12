#include <msp430.h> 


/**
 * main.c
 */

#include <msp430.h>

void main(void) {
    WDTCTL = WDTPW | WDTHOLD;               // Stop watchdog timer
    PM5CTL0 &= ~LOCKLPM5;                   // Disable the GPIO power-on default high-impedance mode
                                            // to activate previously configured port settings
    P1DIR |= 0x01;// Set P1.1 to output direction
    P2DIR |= 0x01;           //set P2.1 to output
    int counter = 0; //initializes counter

    while(1) {
        if(counter%1000==0) { //1000 ms
        P1OUT ^= 0x01; //toggle 1.1
        }
        if(counter%2000==0) { //2000 ms
        P2OUT ^= 0x01; //toggle 2.1
        counter = 0; //reset counter
        }
        counter++;
    }
}

