/*******************************************************************************
* File Name: PIN_PWM_SORTIE.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_PIN_PWM_SORTIE_ALIASES_H) /* Pins PIN_PWM_SORTIE_ALIASES_H */
#define CY_PINS_PIN_PWM_SORTIE_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define PIN_PWM_SORTIE_0			(PIN_PWM_SORTIE__0__PC)
#define PIN_PWM_SORTIE_0_PS		(PIN_PWM_SORTIE__0__PS)
#define PIN_PWM_SORTIE_0_PC		(PIN_PWM_SORTIE__0__PC)
#define PIN_PWM_SORTIE_0_DR		(PIN_PWM_SORTIE__0__DR)
#define PIN_PWM_SORTIE_0_SHIFT	(PIN_PWM_SORTIE__0__SHIFT)
#define PIN_PWM_SORTIE_0_INTR	((uint16)((uint16)0x0003u << (PIN_PWM_SORTIE__0__SHIFT*2u)))

#define PIN_PWM_SORTIE_INTR_ALL	 ((uint16)(PIN_PWM_SORTIE_0_INTR))


#endif /* End Pins PIN_PWM_SORTIE_ALIASES_H */


/* [] END OF FILE */
