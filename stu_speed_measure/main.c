/**
   	FileName:     main.c
	 
	Name: 
 
	Description: 
      
 * * REVISION HISTORY:
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * Author        	Date      	Comments on this revision
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~            
 *                                  
 *
 * 
 *
 *			 
*******************************************************************************/

#include <stdio.h>
#include "initBoard.h"
#include "console.h"
#include "Tick_core.h"
#include "pwm.h"

/* Press S3 to increase the speed and press S6 to decrease it */

int main( void){
    /* Initialization starts here */
    
    uart1_init();// initializes UART1 display
    //lcd_init();// initializes LCD display
	ios_init(); // initializes all board IOs
    pwm_init(); // initializes PWM to control speed
	PMOD_init();
    stdio_set(C_UART1); // Sets the default display
    printf("\n\rGood day!");

    
    /* Super loop starts here */
    while( 1){					
	}//while(1))

}// main


