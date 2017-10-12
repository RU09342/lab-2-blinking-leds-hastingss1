/*
 * MSP430FR2311.h
 *
 *  Created on: Oct 10, 2017
 *      Author: Sean
 */

#ifndef MSP430FR2311_H_
#define MSP430FR2311_H_

void LED0Setup() {
    #ifdef MSP430FR2311
        #define P1DIR |= BIT0;                                // Set Pin as output
    #endif
}

void LED1Setup() {
    #ifdef MSP430FR2311
        #define P2DIR |= BIT0;                                // Set Pin as output
    #endif
}
void SetLED0(int on) {
#ifdef MSP430FR2311
    #ifdef on
#define P1OUT |= BIT0;                                /Turn on LED
    #else
#define P1OUT &= ~BIT0; //Turn off LED
#endif
#endif
}

void SetLED1(int on) {
    #ifdef MSP430FR2311
        #ifdef on
    #define P2OUT |= BIT0;                                /Turn on LED
        #else
    #define P2OUT &= ~BIT0; //Turn off LED
#endif
#endif
}

void ButtonSetup() {
    #ifdef MSP430FR2311
        #define P1REN |= BIT1;
        #define P1OUT |= BIT1;
        #define P1DIR &= ~BIT1;
    #endif
}


#endif /* MSP430FR2311_H_ */
