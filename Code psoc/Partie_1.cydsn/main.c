/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    PWM_Start();
    
    int periode =10;
    float High = 0.95;
    float Low = 0.05;
        
    PWM_SetCompareSwap(1);  
    PWM_SetPeriodSwap(1);
    
    PWM_WritePeriod(periode);
    
    PWM_WriteCompare(periode*Low);
    

    for(;;)
    {
        if(SW_Read()==1){
           PWM_WriteCompare(periode*High); 
        }else{
            PWM_WriteCompare(periode*Low);
        }
    }
}

/* [] END OF FILE */
