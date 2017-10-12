#include <msp430.h> 


/**
 * main.c
 */
int toggle = 1;
int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
    PM5CTL0 &= ~LOCKLPM5; //disable high impedance mode
    P5REN |= BIT6; //setup button 5.6 using pull up resistor
    P5OUT |= BIT6;
    P5DIR |= BIT6;
    P1DIR |= BIT0; //setup led0
    P1DIR |= BIT1; //setup led1
    while(1) {
        while(P5IN & BIT6) { //while button 5.6 is pressed
            if(toggle) {//turn off led0
            P1OUT &= ~BIT0;
            }
            else {
             P1OUT &= ~BIT1; //turn off led1
            }

        }
            if(toggle) {
            P1OUT |= ~BIT1; //turn on led0
            toggle = 0; //toggle flag to toggle which led the button is blinking
            }
            else {
            P1OUT |= ~BIT0; //turn on led1
            toggle =1; //toggle flag to toggle which led the button is blinking
            }
    }
}
