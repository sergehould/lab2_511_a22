/* 
 * File:   pwm.h
 * Author: sh
 *
 * Created on January 22, 2021, 4:32 PM
 * SH               26 Jan 2021         Use plib locally
 *                                      Need to add the static lib libmchp_peripheral_32MX795F512L.a
 *                                      properties-> libraries-> Add library object File
 */

#ifndef PWM_H
#define	PWM_H

#include <xc.h>
#include <stdint.h>

#define EN              LATGbits.LATG8  //ENABLE 

/* Use of plib from the compiler see: C:\Program Files\Microchip\xc32\v2.41\pic32mx\include\peripheral */
//#ifndef _SUPPRESS_PLIB_WARNING
//    #define _SUPPRESS_PLIB_WARNING
//#endif
//#ifndef _DISABLE_OPENADC10_CONFIGPORT_WARNING
//    #define _DISABLE_OPENADC10_CONFIGPORT_WARNING
//#endif
//#include <plib.h>
    
/* OR use plib locally: */
//#include "peripheral/timer.h"

#define DIR             LATGbits.LATG9  //dir
#define HUNDRED_DUTY    10000   //10000 uS or 100 Hz
#define REVERSE         0
#define FORWARD         1

void pwm_init(void);
void set_pwm(int);
void PMOD_init(void);

#endif	/* PWM_H */

