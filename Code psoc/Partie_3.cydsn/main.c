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


#define VPP                 3.3             // en V
#define PERIODE             (uint32) 1000   // en ms

#define SELECT_ADC_CHANNEL  0

/**


    Connecter un potentiomètre entre la pin  +3.3V et la pin "PIN_ANALOGUE"

    Connecter le "PIN_GROUND" au ground de la carte
*/
uint8_t flag = 0;

CY_ISR(isr_handle)
{
    flag = 1;
    ISR_TIMER_Disable();      //Stop les interruption tant que les données non pas été traité
}

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    ISR_TIMER_StartEx(isr_handle);    // Attache l'interruption
    
    PWM_SetCompareSwap(1);      // Autorise le changement du campare du PWM
    PWM_SetPeriodSwap(1);       // Autotrise le changement de la periode du PWM

   
    PWM_WritePeriod(PERIODE);
    PWM_WriteCompare(0);
    
    PWM_Start();
    
    ADC_Start();                //Initialise l'ADC et le mets sous tension
    
    
    UART_Start();               //Démarre la communication UART
    Timer_Start();              //Démarre le Timer (Timer qui envoie des interruptin toutes les 500 ms) 
    
    
    ADC_StartConvert();         //starts la conversionet l'éxécute continuellement 


    UART_UartPutString("Ready\r\n");
    for(;;)
    {
        
        if(flag == 1){
            flag=0;         // Remise a zéro du flag
            
         //   while(ADC_IsEndConversion(ADC_RETURN_STATUS) == 0){ //Attendre que l'ADC est fait la mesure de la tension
                
                UART_UartPutString("ADC read\r\n");
                
                int16_t ADC_Value = ADC_GetResult16(SELECT_ADC_CHANNEL);                           // Lis la valeur dans l'ADC
                int16_t   ADC_Value_mV  = ADC_CountsTo_mVolts(SELECT_ADC_CHANNEL, ADC_Value);      // Convertie la valeur lu dans l'ADC en mV

            
                int DutyCycle = ((float) ADC_Value_mV)/3300*100; // Il faut d'abbord convertie "ADC_Value_mV" en un float pour que le calcule ne soit pas arondi à 0 ou 1

                char buffer[100] ={'\0'};                                                                                             // Initialise un buffer vide
                sprintf(buffer, "ADC value: %d \t Voltage: %d mV \t DutyCycle: %d %%\r\n", ADC_Value, ADC_Value_mV,DutyCycle);        //Crée le texte que l'on vas envoyer dans l'UART
                UART_UartPutString(buffer);
            
                PWM_WriteCompare((DutyCycle/100)*PERIODE);       //Convertie la tension en un signale PWM
            //}
            ISR_TIMER_Enable(); //Réactive l'interruption
        }
        
        
    }

}

/* [] END OF FILE */
