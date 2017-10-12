


/**
 * main.c
 */

#include <msp430.h>

void main(void) {
    WDTCTL = WDTPW | WDTHOLD;               // Stop watchdog timer

    P1DIR |= BIT0;                       // Set P1.0 to output direction
    P4DIR |= BIT7;                       // Set P4.7 to output direction
    int counter = 0; //initializes a counter

    while(1) {
        if(counter%1000==0) { //1000 ms
        P1OUT ^= BIT0; //toggle led 1.0
        }
        if(counter%2000==0) { //2000 ms
        P4OUT ^= BIT7; //toggle led 4.7
        counter = 0; //reset
        }
        counter++; //increment counter
    }
}

