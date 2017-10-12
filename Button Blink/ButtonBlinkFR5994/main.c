#include <msp430.h> 


/**
 * main.c
 */
int toggle = 1;
int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
    PM5CTL0 &= ~LOCKLPM5;
    P5REN |= BIT6;
    P5OUT |= BIT6;
    P5DIR |= BIT6;
    P1DIR |= BIT0;
    P1DIR |= BIT1;
    while(1) {
        while(P5IN & BIT6) {
            if(toggle) {//odd
            P1OUT &= ~BIT0;
            }
            else { //even
             P1OUT &= ~BIT1;
            }

        }
            if(toggle) { //odd
            P1OUT |= ~BIT1;
            toggle = 0;
            }
            else { //even
            P1OUT |= ~BIT0;
            toggle =1;
            }
    }
}
