
#include <xc.h>
#include "main.h"
#include "clock.h"
#include "gpio.h"
#include "timer0.h"

void main(void) {
    
    /* System Clock Initialization */
	CLOCK_Initialize();
    
    /* Config PortA */
    PortA_Initialize();
    
    /* Config PortB */
    PortB_Initialize();

    /* Config PortC */
    PortC_Initialize();
    
    /* Config PortD */
    PortD_Initialize();
    
    /* Config PortE */
    PortE_Initialize();
    
    /* Config PortF */
    PortF_Initialize();
    
    /* Config TIMER0 */
    TIMER0_Initialize();
       
    /* infinite loop */
    while(1)
    {
        /* RB4 is pressed? */        
        if (PORTBbits.RB4 == 0)
            {
            
            /* Wait for 1 s */
            TIMER0_Delay_ms(2000);
            //TIMER0_1s();
            
            /* Turn on LED */
            PORTFbits.RF3 = 0;
            
            /* LED remains on for 3s */
            TIMER0_Delay_ms(3000);
            }
        
        /* Turn off LED */
        PORTFbits.RF3 = 1;
        
        
     } /* while */
        
    
    return;
} /* main*/
