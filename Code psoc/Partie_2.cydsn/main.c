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



CY_ISR(Timer_ISR)
{
    
    static int cunter =-1;

    cunter++;

    switch(cunter){
        
        case 0: 
            LED_BLUE_Write(0);// Allumer la LED
        break;
        
        case 2:
            LED_BLUE_Write(1);// Eteindre la LED
        break;
            
        case 3 : 
            LED_BLUE_Write(0);// Allumer la LED
            cunter =0;
        break;
            
        default:
        break;
           
    }
    
}



int main(void)
{
    CyGlobalIntEnable; // Activer les interruptions globales

 
    Timer_Int_10_StartEx(Timer_ISR);
    
    Timer_1_Start();
    


        
    for(;;)
    {
        // Boucle principale
    }
}


/* [] END OF FILE */
