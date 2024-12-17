/*******************************************************************************
* File Name: Timer_Int_10.h
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
#if !defined(CY_ISR_Timer_Int_10_H)
#define CY_ISR_Timer_Int_10_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void Timer_Int_10_Start(void);
void Timer_Int_10_StartEx(cyisraddress address);
void Timer_Int_10_Stop(void);

CY_ISR_PROTO(Timer_Int_10_Interrupt);

void Timer_Int_10_SetVector(cyisraddress address);
cyisraddress Timer_Int_10_GetVector(void);

void Timer_Int_10_SetPriority(uint8 priority);
uint8 Timer_Int_10_GetPriority(void);

void Timer_Int_10_Enable(void);
uint8 Timer_Int_10_GetState(void);
void Timer_Int_10_Disable(void);

void Timer_Int_10_SetPending(void);
void Timer_Int_10_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the Timer_Int_10 ISR. */
#define Timer_Int_10_INTC_VECTOR            ((reg32 *) Timer_Int_10__INTC_VECT)

/* Address of the Timer_Int_10 ISR priority. */
#define Timer_Int_10_INTC_PRIOR             ((reg32 *) Timer_Int_10__INTC_PRIOR_REG)

/* Priority of the Timer_Int_10 interrupt. */
#define Timer_Int_10_INTC_PRIOR_NUMBER      Timer_Int_10__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable Timer_Int_10 interrupt. */
#define Timer_Int_10_INTC_SET_EN            ((reg32 *) Timer_Int_10__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the Timer_Int_10 interrupt. */
#define Timer_Int_10_INTC_CLR_EN            ((reg32 *) Timer_Int_10__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the Timer_Int_10 interrupt state to pending. */
#define Timer_Int_10_INTC_SET_PD            ((reg32 *) Timer_Int_10__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the Timer_Int_10 interrupt. */
#define Timer_Int_10_INTC_CLR_PD            ((reg32 *) Timer_Int_10__INTC_CLR_PD_REG)



#endif /* CY_ISR_Timer_Int_10_H */


/* [] END OF FILE */
