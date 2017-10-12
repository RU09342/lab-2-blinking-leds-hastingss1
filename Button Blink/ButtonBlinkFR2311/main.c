#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	PM5CTL0 &= ~LOCKLPM5; //disable high impedance
	P1REN |= BIT1; //setup button 1.1
	P1OUT |= BIT1;
	P1DIR |= 0x01;

	while(1) {
        while(P1IN & BIT1) { //while button 1.1 is pressed
            P1OUT &= ~BIT0; //turn off led0

        }

            P1OUT |= ~BIT1; //turn on led0

	}
}
