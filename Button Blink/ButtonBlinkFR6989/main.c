#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
    PM5CTL0 &= ~LOCKLPM5; //disable high impedance mode
    P1REN |= BIT1; //setup button 1.1 using pull up resistor
    P1OUT |= BIT1;
    P1DIR |= BIT1;
    P1DIR |= BIT0; //setup led 1.0

    while(1) {
        while(P1IN & BIT1) { //while button 1.1 is pressed
            P1OUT &= ~BIT0; //turn off led0

        }

            P1OUT |= ~BIT1;//turn on led0

    }
}
