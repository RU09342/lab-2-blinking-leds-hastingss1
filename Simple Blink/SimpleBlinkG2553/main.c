
#include <msp430.h>

void main(void) {
    WDTCTL = WDTPW | WDTHOLD;               // Stop watchdog timer
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
