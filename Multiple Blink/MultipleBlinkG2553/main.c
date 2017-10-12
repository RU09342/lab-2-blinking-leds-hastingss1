


/**
 * main.c
 */

#include <msp430.h>

void main(void) {
    WDTCTL = WDTPW | WDTHOLD;               // Stop watchdog timer

    P1DIR |= BIT0;                       // Set P1.0 to output direction
    P1DIR |= BIT6;                       // Set P1.1 to output direction
    int counter = 0;

    while(1) {
        if(counter%1000==0) {
        P1OUT ^= BIT0;
        }
        if(counter%2000==0) {
        P1OUT ^= BIT6;
        counter = 0;
        }
        counter++;
    }
}

