/*******************************************************************************
* File Name: Timer_Int_20.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/
#if !defined(CY_ISR_Timer_Int_20_H)
#define CY_ISR_Timer_Int_20_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void Timer_Int_20_Start(void);
void Timer_Int_20_StartEx(cyisraddress address);
void Timer_Int_20_Stop(void);

CY_ISR_PROTO(Timer_Int_20_Interrupt);

void Timer_Int_20_SetVector(cyisraddress address);
cyisraddress Timer_Int_20_GetVector(void);

void Timer_Int_20_SetPriority(uint8 priority);
uint8 Timer_Int_20_GetPriority(void);

void Timer_Int_20_Enable(void);
uint8 Timer_Int_20_GetState(void);
void Timer_Int_20_Disable(void);

void Timer_Int_20_SetPending(void);
void Timer_Int_20_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the Timer_Int_20 ISR. */
#define Timer_Int_20_INTC_VECTOR            ((reg32 *) Timer_Int_20__INTC_VECT)

/* Address of the Timer_Int_20 ISR priority. */
#define Timer_Int_20_INTC_PRIOR             ((reg32 *) Timer_Int_20__INTC_PRIOR_REG)

/* Priority of the Timer_Int_20 interrupt. */
#define Timer_Int_20_INTC_PRIOR_NUMBER      Timer_Int_20__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable Timer_Int_20 interrupt. */
#define Timer_Int_20_INTC_SET_EN            ((reg32 *) Timer_Int_20__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the Timer_Int_20 interrupt. */
#define Timer_Int_20_INTC_CLR_EN            ((reg32 *) Timer_Int_20__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the Timer_Int_20 interrupt state to pending. */
#define Timer_Int_20_INTC_SET_PD            ((reg32 *) Timer_Int_20__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the Timer_Int_20 interrupt. */
#define Timer_Int_20_INTC_CLR_PD            ((reg32 *) Timer_Int_20__INTC_CLR_PD_REG)



#endif /* CY_ISR_Timer_Int_20_H */


/* [] END OF FILE */
