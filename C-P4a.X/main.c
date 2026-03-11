
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
         
    /* infinite loop */
    while(1)
    {
        /* RB4 is pressed? */        
        
            {
            
            /* Wait for 1 s */
        
                       
            /* Turn on LED */
        
            
            /* LED remains on for 3s */
        
                        
            }
        else
        {
            /* Turn off LED */
            
        }
        
        
     } /* while */
        
    
    return;
} /* main*/
