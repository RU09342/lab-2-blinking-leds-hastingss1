#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    P1REN |= 0x08; //setup button 1.3
    P1OUT |= 0x09;
    P1DIR |= 0x41;
    P1DIR |= BIT0; //setup led 1.0

    while(1) {
        while(P1IN & BIT3) { //while button 1.3 is pressed
            P1OUT &= ~BIT0; //turn off led0

        }

            P1OUT |= ~BIT1; //turn on led0

    }
}
