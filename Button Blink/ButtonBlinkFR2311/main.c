#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	PM5CTL0 &= ~LOCKLPM5;
	P1REN |= BIT1;
	P1OUT |= BIT1;
	P1DIR |= 0x01;

	while(1) {
        while(P1IN & BIT1) {
            P1OUT &= ~BIT0;

        }

            P1OUT |= ~BIT1;

	}
}