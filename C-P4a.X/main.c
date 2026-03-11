
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
        if ((PORTB & 0x10) == 0x00)
            {
            
            /* Wait for 1 s */
            TIMER0_1s();
                       
            /* Turn on LED */
            LATF &= 0xF7;
            
            /* LED remains on for 3s */
            TIMER0_Delay_ms(3000);
                        
            }
        else
        {
            /* Turn off LED */
            LATF |= 0x08;
        }
        
        
     } /* while */
        
    
    return;
} /* main*/
