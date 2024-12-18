/*******************************************************************************
* File Name: PIN_ANALOGIQUE.c  
* Version 2.20
*
* Description:
*  This file contains APIs to set up the Pins component for low power modes.
*
* Note:
*
********************************************************************************
* Copyright 2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "PIN_ANALOGIQUE.h"

static PIN_ANALOGIQUE_BACKUP_STRUCT  PIN_ANALOGIQUE_backup = {0u, 0u, 0u};


/*******************************************************************************
* Function Name: PIN_ANALOGIQUE_Sleep
****************************************************************************//**
*
* \brief Stores the pin configuration and prepares the pin for entering chip 
*  deep-sleep/hibernate modes. This function applies only to SIO and USBIO pins.
*  It should not be called for GPIO or GPIO_OVT pins.
*
* <b>Note</b> This function is available in PSoC 4 only.
*
* \return 
*  None 
*  
* \sideeffect
*  For SIO pins, this function configures the pin input threshold to CMOS and
*  drive level to Vddio. This is needed for SIO pins when in device 
*  deep-sleep/hibernate modes.
*
* \funcusage
*  \snippet PIN_ANALOGIQUE_SUT.c usage_PIN_ANALOGIQUE_Sleep_Wakeup
*******************************************************************************/
void PIN_ANALOGIQUE_Sleep(void)
{
    #if defined(PIN_ANALOGIQUE__PC)
        PIN_ANALOGIQUE_backup.pcState = PIN_ANALOGIQUE_PC;
    #else
        #if (CY_PSOC4_4200L)
            /* Save the regulator state and put the PHY into suspend mode */
            PIN_ANALOGIQUE_backup.usbState = PIN_ANALOGIQUE_CR1_REG;
            PIN_ANALOGIQUE_USB_POWER_REG |= PIN_ANALOGIQUE_USBIO_ENTER_SLEEP;
            PIN_ANALOGIQUE_CR1_REG &= PIN_ANALOGIQUE_USBIO_CR1_OFF;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(PIN_ANALOGIQUE__SIO)
        PIN_ANALOGIQUE_backup.sioState = PIN_ANALOGIQUE_SIO_REG;
        /* SIO requires unregulated output buffer and single ended input buffer */
        PIN_ANALOGIQUE_SIO_REG &= (uint32)(~PIN_ANALOGIQUE_SIO_LPM_MASK);
    #endif  
}


/*******************************************************************************
* Function Name: PIN_ANALOGIQUE_Wakeup
****************************************************************************//**
*
* \brief Restores the pin configuration that was saved during Pin_Sleep(). This 
* function applies only to SIO and USBIO pins. It should not be called for
* GPIO or GPIO_OVT pins.
*
* For USBIO pins, the wakeup is only triggered for falling edge interrupts.
*
* <b>Note</b> This function is available in PSoC 4 only.
*
* \return 
*  None
*  
* \funcusage
*  Refer to PIN_ANALOGIQUE_Sleep() for an example usage.
*******************************************************************************/
void PIN_ANALOGIQUE_Wakeup(void)
{
    #if defined(PIN_ANALOGIQUE__PC)
        PIN_ANALOGIQUE_PC = PIN_ANALOGIQUE_backup.pcState;
    #else
        #if (CY_PSOC4_4200L)
            /* Restore the regulator state and come out of suspend mode */
            PIN_ANALOGIQUE_USB_POWER_REG &= PIN_ANALOGIQUE_USBIO_EXIT_SLEEP_PH1;
            PIN_ANALOGIQUE_CR1_REG = PIN_ANALOGIQUE_backup.usbState;
            PIN_ANALOGIQUE_USB_POWER_REG &= PIN_ANALOGIQUE_USBIO_EXIT_SLEEP_PH2;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(PIN_ANALOGIQUE__SIO)
        PIN_ANALOGIQUE_SIO_REG = PIN_ANALOGIQUE_backup.sioState;
    #endif
}


/* [] END OF FILE */
