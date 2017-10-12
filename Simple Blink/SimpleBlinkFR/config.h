/*
 * config.h
 *
 *  Created on: Oct 4, 2017
 *      Author: Sean
 */

#ifndef CONFIG_H_
#define CONFIG_H_
//#define MSP430FR2311
//#define MSP430G2553
//#define MSP430FR5994
//#define MSP430F5529
//#define MSP430FR6989


#if defined (__MSP430FR2311__)
#include "MSP430FR2311.h"
#endif /*MSP430FR2311 */

/*

#ifndef MSP430G2553
#define MSP430G2553

#define CTS_IN P1IN
#define CTS_PIN BIT6

#define nSEL_PIN BIT2
#define nSEL_OUT P3OUT

#define nIRQ_DIR P3DIR
#define nIRQ_PIN BIT6

#define GPIO1_PIN BIT5
#define GPIO1_DIR P3DIR
#define GPIO1_IN  P3IN

#endif  MSP430G2553






#ifndef MSP430FR5994
#define MSP430FR5994

#define CTS_IN P1IN
#define CTS_PIN BIT6

#define nSEL_PIN BIT2
#define nSEL_OUT P3OUT

#define nIRQ_DIR P3DIR
#define nIRQ_PIN BIT6

#define GPIO1_PIN BIT5
#define GPIO1_DIR P3DIR
#define GPIO1_IN  P3IN

#endif /* MSP430FR5994







#ifndef MSP430F5529
#define MSP430F5529

#define CTS_IN P1IN
#define CTS_PIN BIT6

#define nSEL_PIN BIT2
#define nSEL_OUT P3OUT

#define nIRQ_DIR P3DIR
#define nIRQ_PIN BIT6

#define GPIO1_PIN BIT5
#define GPIO1_DIR P3DIR
#define GPIO1_IN  P3IN

#endif /* MSP430F5529






#ifndef MSP430FR6989
#define MSP430FR6989

#define CTS_IN P1IN
#define CTS_PIN BIT6

#define nSEL_PIN BIT2
#define nSEL_OUT P3OUT

#define nIRQ_DIR P3DIR
#define nIRQ_PIN BIT6

#define GPIO1_PIN BIT5
#define GPIO1_DIR P3DIR
#define GPIO1_IN  P3IN

#endif  MSP430FR6989

*/

#endif /* CONFIG_H_ */
