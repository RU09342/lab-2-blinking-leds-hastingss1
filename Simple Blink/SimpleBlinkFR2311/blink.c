
#include <msp430.h>

void main(void) {
    WDTCTL = WDTPW | WDTHOLD;               // Stop watchdog timer
    PM5CTL0 &= ~LOCKLPM5;                   // Disable the GPIO power-on default high-impedance mode
                                            // to activate previously configured port settings
    P1DIR |= BIT0;                          // Set P1.0 to output direction
    P1OUT |= BIT0;
    for(;;) {
        volatile unsigned int i;            // volatile to prevent optimization
        P1OUT ^= BIT0;                      // Toggle P1.0 using exclusive-OR
        i = 20000;                          // SW Delay
        do i--;
        while(i != 0);
    }
}
