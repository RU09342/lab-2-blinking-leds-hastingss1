


/**
 * main.c
 */

#include <msp430.h>

void main(void) {
    WDTCTL = WDTPW | WDTHOLD;               // Stop watchdog timer

    P1DIR |= BIT0;                       // Set P1.0 to output direction
    P1DIR |= BIT6;                       // Set P1.6 to output direction
    int counter = 0;

    while(1) {
        if(counter%1000==0) { //1000 ms
        P1OUT ^= BIT0; //led 1.0
        }
        if(counter%2000==0) { //2000 ms
        P1OUT ^= BIT6; //led 1.6
        counter = 0; //reset
        }
        counter++;
    }
}

