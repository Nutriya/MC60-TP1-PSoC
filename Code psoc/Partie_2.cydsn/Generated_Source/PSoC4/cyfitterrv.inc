;
; File Name: cyfitterrv.inc
; 
; PSoC Creator  4.4
;
; Description:
; 
;
;-------------------------------------------------------------------------------
; Copyright (c) 2007-2020 Cypress Semiconductor.  All rights reserved.
; You may use this file only in accordance with the license, terms, conditions, 
; disclaimers, and limitations in the end user license agreement accompanying 
; the software package with which this file was provided.
;-------------------------------------------------------------------------------

    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv_trm.inc

; Clock_1
Clock_1__CTRL_REGISTER EQU CYREG_PERI_PCLK_CTL20
Clock_1__DIV_ID EQU 0x00000040
Clock_1__DIV_REGISTER EQU CYREG_PERI_DIV_16_CTL0
Clock_1__PA_DIV_ID EQU 0x000000FF

; Clock_2
Clock_2__CTRL_REGISTER EQU CYREG_PERI_PCLK_CTL22
Clock_2__DIV_ID EQU 0x00000041
Clock_2__DIV_REGISTER EQU CYREG_PERI_DIV_16_CTL1
Clock_2__PA_DIV_ID EQU 0x000000FF

; Timer_1
Timer_1_TimerUDB_rstSts_stsreg__0__MASK EQU 0x01
Timer_1_TimerUDB_rstSts_stsreg__0__POS EQU 0
Timer_1_TimerUDB_rstSts_stsreg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_UDB_W16_ACTL1
Timer_1_TimerUDB_rstSts_stsreg__16BIT_STATUS_REG EQU CYREG_UDB_W16_ST1
Timer_1_TimerUDB_rstSts_stsreg__2__MASK EQU 0x04
Timer_1_TimerUDB_rstSts_stsreg__2__POS EQU 2
Timer_1_TimerUDB_rstSts_stsreg__3__MASK EQU 0x08
Timer_1_TimerUDB_rstSts_stsreg__3__POS EQU 3
Timer_1_TimerUDB_rstSts_stsreg__MASK EQU 0x0D
Timer_1_TimerUDB_rstSts_stsreg__MASK_REG EQU CYREG_UDB_W8_MSK1
Timer_1_TimerUDB_rstSts_stsreg__MASK_ST_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK1
Timer_1_TimerUDB_rstSts_stsreg__PER_ST_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK1
Timer_1_TimerUDB_rstSts_stsreg__STATUS_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL1
Timer_1_TimerUDB_rstSts_stsreg__STATUS_CNT_REG EQU CYREG_UDB_CAT16_CTL_ST1
Timer_1_TimerUDB_rstSts_stsreg__STATUS_CONTROL_REG EQU CYREG_UDB_CAT16_CTL_ST1
Timer_1_TimerUDB_rstSts_stsreg__STATUS_REG EQU CYREG_UDB_W8_ST1
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_UDB_W16_ACTL1
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_CONTROL_REG EQU CYREG_UDB_W16_CTL1
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_COUNT_REG EQU CYREG_UDB_W16_CTL1
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_CONTROL_REG EQU CYREG_UDB_W16_CTL1
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_COUNT_REG EQU CYREG_UDB_W16_CTL1
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_MASK_REG EQU CYREG_UDB_W16_MSK1
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_PERIOD_REG EQU CYREG_UDB_W16_MSK1
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_MASK_REG EQU CYREG_UDB_W16_MSK1
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_PERIOD_REG EQU CYREG_UDB_W16_MSK1
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__7__MASK EQU 0x80
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__7__POS EQU 7
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL1
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_REG EQU CYREG_UDB_W8_CTL1
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_ST_REG EQU CYREG_UDB_CAT16_CTL_ST1
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_REG EQU CYREG_UDB_W8_CTL1
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_ST_REG EQU CYREG_UDB_CAT16_CTL_ST1
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__MASK EQU 0x80
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__MASK_CTL_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK1
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__PER_CTL_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK1
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__PERIOD_REG EQU CYREG_UDB_W8_MSK1
Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_A0_REG EQU CYREG_UDB_W16_A00
Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_A1_REG EQU CYREG_UDB_W16_A10
Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_D0_REG EQU CYREG_UDB_W16_D00
Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_D1_REG EQU CYREG_UDB_W16_D10
Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_UDB_W16_ACTL0
Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_F0_REG EQU CYREG_UDB_W16_F00
Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_F1_REG EQU CYREG_UDB_W16_F10
Timer_1_TimerUDB_sT16_timerdp_u0__32BIT_A0_REG EQU CYREG_UDB_W32_A0
Timer_1_TimerUDB_sT16_timerdp_u0__32BIT_A1_REG EQU CYREG_UDB_W32_A1
Timer_1_TimerUDB_sT16_timerdp_u0__32BIT_D0_REG EQU CYREG_UDB_W32_D0
Timer_1_TimerUDB_sT16_timerdp_u0__32BIT_D1_REG EQU CYREG_UDB_W32_D1
Timer_1_TimerUDB_sT16_timerdp_u0__32BIT_DP_AUX_CTL_REG EQU CYREG_UDB_W32_ACTL
Timer_1_TimerUDB_sT16_timerdp_u0__32BIT_F0_REG EQU CYREG_UDB_W32_F0
Timer_1_TimerUDB_sT16_timerdp_u0__32BIT_F1_REG EQU CYREG_UDB_W32_F1
Timer_1_TimerUDB_sT16_timerdp_u0__A0_A1_REG EQU CYREG_UDB_CAT16_A0
Timer_1_TimerUDB_sT16_timerdp_u0__A0_REG EQU CYREG_UDB_W8_A00
Timer_1_TimerUDB_sT16_timerdp_u0__A1_REG EQU CYREG_UDB_W8_A10
Timer_1_TimerUDB_sT16_timerdp_u0__D0_D1_REG EQU CYREG_UDB_CAT16_D0
Timer_1_TimerUDB_sT16_timerdp_u0__D0_REG EQU CYREG_UDB_W8_D00
Timer_1_TimerUDB_sT16_timerdp_u0__D1_REG EQU CYREG_UDB_W8_D10
Timer_1_TimerUDB_sT16_timerdp_u0__DP_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL0
Timer_1_TimerUDB_sT16_timerdp_u0__F0_F1_REG EQU CYREG_UDB_CAT16_F0
Timer_1_TimerUDB_sT16_timerdp_u0__F0_REG EQU CYREG_UDB_W8_F00
Timer_1_TimerUDB_sT16_timerdp_u0__F1_REG EQU CYREG_UDB_W8_F10
Timer_1_TimerUDB_sT16_timerdp_u1__16BIT_A0_REG EQU CYREG_UDB_W16_A01
Timer_1_TimerUDB_sT16_timerdp_u1__16BIT_A1_REG EQU CYREG_UDB_W16_A11
Timer_1_TimerUDB_sT16_timerdp_u1__16BIT_D0_REG EQU CYREG_UDB_W16_D01
Timer_1_TimerUDB_sT16_timerdp_u1__16BIT_D1_REG EQU CYREG_UDB_W16_D11
Timer_1_TimerUDB_sT16_timerdp_u1__16BIT_DP_AUX_CTL_REG EQU CYREG_UDB_W16_ACTL1
Timer_1_TimerUDB_sT16_timerdp_u1__16BIT_F0_REG EQU CYREG_UDB_W16_F01
Timer_1_TimerUDB_sT16_timerdp_u1__16BIT_F1_REG EQU CYREG_UDB_W16_F11
Timer_1_TimerUDB_sT16_timerdp_u1__A0_A1_REG EQU CYREG_UDB_CAT16_A1
Timer_1_TimerUDB_sT16_timerdp_u1__A0_REG EQU CYREG_UDB_W8_A01
Timer_1_TimerUDB_sT16_timerdp_u1__A1_REG EQU CYREG_UDB_W8_A11
Timer_1_TimerUDB_sT16_timerdp_u1__D0_D1_REG EQU CYREG_UDB_CAT16_D1
Timer_1_TimerUDB_sT16_timerdp_u1__D0_REG EQU CYREG_UDB_W8_D01
Timer_1_TimerUDB_sT16_timerdp_u1__D1_REG EQU CYREG_UDB_W8_D11
Timer_1_TimerUDB_sT16_timerdp_u1__DP_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL1
Timer_1_TimerUDB_sT16_timerdp_u1__F0_F1_REG EQU CYREG_UDB_CAT16_F1
Timer_1_TimerUDB_sT16_timerdp_u1__F0_REG EQU CYREG_UDB_W8_F01
Timer_1_TimerUDB_sT16_timerdp_u1__F1_REG EQU CYREG_UDB_W8_F11
Timer_1_TimerUDB_sT16_timerdp_u1__MSK_DP_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK1
Timer_1_TimerUDB_sT16_timerdp_u1__PER_DP_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK1

; Timer_2
Timer_2_TimerUDB_rstSts_stsreg__0__MASK EQU 0x01
Timer_2_TimerUDB_rstSts_stsreg__0__POS EQU 0
Timer_2_TimerUDB_rstSts_stsreg__2__MASK EQU 0x04
Timer_2_TimerUDB_rstSts_stsreg__2__POS EQU 2
Timer_2_TimerUDB_rstSts_stsreg__3__MASK EQU 0x08
Timer_2_TimerUDB_rstSts_stsreg__3__POS EQU 3
Timer_2_TimerUDB_rstSts_stsreg__MASK EQU 0x0D
Timer_2_TimerUDB_rstSts_stsreg__MASK_REG EQU CYREG_UDB_W8_MSK3
Timer_2_TimerUDB_rstSts_stsreg__MASK_ST_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK3
Timer_2_TimerUDB_rstSts_stsreg__PER_ST_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK3
Timer_2_TimerUDB_rstSts_stsreg__STATUS_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL3
Timer_2_TimerUDB_rstSts_stsreg__STATUS_CNT_REG EQU CYREG_UDB_CAT16_CTL_ST3
Timer_2_TimerUDB_rstSts_stsreg__STATUS_CONTROL_REG EQU CYREG_UDB_CAT16_CTL_ST3
Timer_2_TimerUDB_rstSts_stsreg__STATUS_REG EQU CYREG_UDB_W8_ST3
Timer_2_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__7__MASK EQU 0x80
Timer_2_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__7__POS EQU 7
Timer_2_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL3
Timer_2_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_REG EQU CYREG_UDB_W8_CTL3
Timer_2_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_ST_REG EQU CYREG_UDB_CAT16_CTL_ST3
Timer_2_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_REG EQU CYREG_UDB_W8_CTL3
Timer_2_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_ST_REG EQU CYREG_UDB_CAT16_CTL_ST3
Timer_2_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__MASK EQU 0x80
Timer_2_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__MASK_CTL_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK3
Timer_2_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__PER_CTL_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK3
Timer_2_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__PERIOD_REG EQU CYREG_UDB_W8_MSK3
Timer_2_TimerUDB_sT16_timerdp_u0__16BIT_A0_REG EQU CYREG_UDB_W16_A02
Timer_2_TimerUDB_sT16_timerdp_u0__16BIT_A1_REG EQU CYREG_UDB_W16_A12
Timer_2_TimerUDB_sT16_timerdp_u0__16BIT_D0_REG EQU CYREG_UDB_W16_D02
Timer_2_TimerUDB_sT16_timerdp_u0__16BIT_D1_REG EQU CYREG_UDB_W16_D12
Timer_2_TimerUDB_sT16_timerdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_UDB_W16_ACTL2
Timer_2_TimerUDB_sT16_timerdp_u0__16BIT_F0_REG EQU CYREG_UDB_W16_F02
Timer_2_TimerUDB_sT16_timerdp_u0__16BIT_F1_REG EQU CYREG_UDB_W16_F12
Timer_2_TimerUDB_sT16_timerdp_u0__A0_A1_REG EQU CYREG_UDB_CAT16_A2
Timer_2_TimerUDB_sT16_timerdp_u0__A0_REG EQU CYREG_UDB_W8_A02
Timer_2_TimerUDB_sT16_timerdp_u0__A1_REG EQU CYREG_UDB_W8_A12
Timer_2_TimerUDB_sT16_timerdp_u0__D0_D1_REG EQU CYREG_UDB_CAT16_D2
Timer_2_TimerUDB_sT16_timerdp_u0__D0_REG EQU CYREG_UDB_W8_D02
Timer_2_TimerUDB_sT16_timerdp_u0__D1_REG EQU CYREG_UDB_W8_D12
Timer_2_TimerUDB_sT16_timerdp_u0__DP_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL2
Timer_2_TimerUDB_sT16_timerdp_u0__F0_F1_REG EQU CYREG_UDB_CAT16_F2
Timer_2_TimerUDB_sT16_timerdp_u0__F0_REG EQU CYREG_UDB_W8_F02
Timer_2_TimerUDB_sT16_timerdp_u0__F1_REG EQU CYREG_UDB_W8_F12
Timer_2_TimerUDB_sT16_timerdp_u1__A0_A1_REG EQU CYREG_UDB_CAT16_A3
Timer_2_TimerUDB_sT16_timerdp_u1__A0_REG EQU CYREG_UDB_W8_A03
Timer_2_TimerUDB_sT16_timerdp_u1__A1_REG EQU CYREG_UDB_W8_A13
Timer_2_TimerUDB_sT16_timerdp_u1__D0_D1_REG EQU CYREG_UDB_CAT16_D3
Timer_2_TimerUDB_sT16_timerdp_u1__D0_REG EQU CYREG_UDB_W8_D03
Timer_2_TimerUDB_sT16_timerdp_u1__D1_REG EQU CYREG_UDB_W8_D13
Timer_2_TimerUDB_sT16_timerdp_u1__DP_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL3
Timer_2_TimerUDB_sT16_timerdp_u1__F0_F1_REG EQU CYREG_UDB_CAT16_F3
Timer_2_TimerUDB_sT16_timerdp_u1__F0_REG EQU CYREG_UDB_W8_F03
Timer_2_TimerUDB_sT16_timerdp_u1__F1_REG EQU CYREG_UDB_W8_F13
Timer_2_TimerUDB_sT16_timerdp_u1__MSK_DP_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK3
Timer_2_TimerUDB_sT16_timerdp_u1__PER_DP_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK3

; LED_BLUE
LED_BLUE__0__DR EQU CYREG_GPIO_PRT6_DR
LED_BLUE__0__DR_CLR EQU CYREG_GPIO_PRT6_DR_CLR
LED_BLUE__0__DR_INV EQU CYREG_GPIO_PRT6_DR_INV
LED_BLUE__0__DR_SET EQU CYREG_GPIO_PRT6_DR_SET
LED_BLUE__0__HSIOM EQU CYREG_HSIOM_PORT_SEL6
LED_BLUE__0__HSIOM_MASK EQU 0x00F00000
LED_BLUE__0__HSIOM_SHIFT EQU 20
LED_BLUE__0__INTCFG EQU CYREG_GPIO_PRT6_INTR_CFG
LED_BLUE__0__INTR EQU CYREG_GPIO_PRT6_INTR
LED_BLUE__0__INTR_CFG EQU CYREG_GPIO_PRT6_INTR_CFG
LED_BLUE__0__INTSTAT EQU CYREG_GPIO_PRT6_INTR
LED_BLUE__0__MASK EQU 0x20
LED_BLUE__0__PC EQU CYREG_GPIO_PRT6_PC
LED_BLUE__0__PC2 EQU CYREG_GPIO_PRT6_PC2
LED_BLUE__0__PORT EQU 6
LED_BLUE__0__PS EQU CYREG_GPIO_PRT6_PS
LED_BLUE__0__SHIFT EQU 5
LED_BLUE__DR EQU CYREG_GPIO_PRT6_DR
LED_BLUE__DR_CLR EQU CYREG_GPIO_PRT6_DR_CLR
LED_BLUE__DR_INV EQU CYREG_GPIO_PRT6_DR_INV
LED_BLUE__DR_SET EQU CYREG_GPIO_PRT6_DR_SET
LED_BLUE__INTCFG EQU CYREG_GPIO_PRT6_INTR_CFG
LED_BLUE__INTR EQU CYREG_GPIO_PRT6_INTR
LED_BLUE__INTR_CFG EQU CYREG_GPIO_PRT6_INTR_CFG
LED_BLUE__INTSTAT EQU CYREG_GPIO_PRT6_INTR
LED_BLUE__MASK EQU 0x20
LED_BLUE__PC EQU CYREG_GPIO_PRT6_PC
LED_BLUE__PC2 EQU CYREG_GPIO_PRT6_PC2
LED_BLUE__PORT EQU 6
LED_BLUE__PS EQU CYREG_GPIO_PRT6_PS
LED_BLUE__SHIFT EQU 5

; Timer_Int_1
Timer_Int_1__INTC_CLR_EN_REG EQU CYREG_CM0_ICER
Timer_Int_1__INTC_CLR_PD_REG EQU CYREG_CM0_ICPR
Timer_Int_1__INTC_MASK EQU 0x01
Timer_Int_1__INTC_NUMBER EQU 0
Timer_Int_1__INTC_PRIOR_MASK EQU 0xC0
Timer_Int_1__INTC_PRIOR_NUM EQU 3
Timer_Int_1__INTC_PRIOR_REG EQU CYREG_CM0_IPR0
Timer_Int_1__INTC_SET_EN_REG EQU CYREG_CM0_ISER
Timer_Int_1__INTC_SET_PD_REG EQU CYREG_CM0_ISPR

; Timer_Int_10
Timer_Int_10__INTC_CLR_EN_REG EQU CYREG_CM0_ICER
Timer_Int_10__INTC_CLR_PD_REG EQU CYREG_CM0_ICPR
Timer_Int_10__INTC_MASK EQU 0x02
Timer_Int_10__INTC_NUMBER EQU 1
Timer_Int_10__INTC_PRIOR_MASK EQU 0xC000
Timer_Int_10__INTC_PRIOR_NUM EQU 3
Timer_Int_10__INTC_PRIOR_REG EQU CYREG_CM0_IPR0
Timer_Int_10__INTC_SET_EN_REG EQU CYREG_CM0_ISER
Timer_Int_10__INTC_SET_PD_REG EQU CYREG_CM0_ISPR

; Miscellaneous
CYDEV_BCLK__HFCLK__HZ EQU 48000000
CYDEV_BCLK__HFCLK__KHZ EQU 48000
CYDEV_BCLK__HFCLK__MHZ EQU 48
CYDEV_BCLK__SYSCLK__HZ EQU 48000000
CYDEV_BCLK__SYSCLK__KHZ EQU 48000
CYDEV_BCLK__SYSCLK__MHZ EQU 48
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 26
CYDEV_CHIP_DIE_PSOC5LP EQU 2
CYDEV_CHIP_DIE_PSOC5TM EQU 3
CYDEV_CHIP_DIE_TMA4 EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 5
CYDEV_CHIP_FAMILY_FM3 EQU 6
CYDEV_CHIP_FAMILY_FM4 EQU 7
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_PSOC6 EQU 4
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC4
CYDEV_CHIP_JTAG_ID EQU 0x112D11A1
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 26
CYDEV_CHIP_MEMBER_4AA EQU 25
CYDEV_CHIP_MEMBER_4AB EQU 30
CYDEV_CHIP_MEMBER_4AC EQU 14
CYDEV_CHIP_MEMBER_4AD EQU 15
CYDEV_CHIP_MEMBER_4AE EQU 16
CYDEV_CHIP_MEMBER_4D EQU 20
CYDEV_CHIP_MEMBER_4E EQU 6
CYDEV_CHIP_MEMBER_4F EQU 27
CYDEV_CHIP_MEMBER_4G EQU 4
CYDEV_CHIP_MEMBER_4H EQU 24
CYDEV_CHIP_MEMBER_4I EQU 32
CYDEV_CHIP_MEMBER_4J EQU 21
CYDEV_CHIP_MEMBER_4K EQU 22
CYDEV_CHIP_MEMBER_4L EQU 31
CYDEV_CHIP_MEMBER_4M EQU 29
CYDEV_CHIP_MEMBER_4N EQU 11
CYDEV_CHIP_MEMBER_4O EQU 8
CYDEV_CHIP_MEMBER_4P EQU 28
CYDEV_CHIP_MEMBER_4Q EQU 17
CYDEV_CHIP_MEMBER_4R EQU 9
CYDEV_CHIP_MEMBER_4S EQU 12
CYDEV_CHIP_MEMBER_4T EQU 10
CYDEV_CHIP_MEMBER_4U EQU 5
CYDEV_CHIP_MEMBER_4V EQU 23
CYDEV_CHIP_MEMBER_4W EQU 13
CYDEV_CHIP_MEMBER_4X EQU 7
CYDEV_CHIP_MEMBER_4Y EQU 18
CYDEV_CHIP_MEMBER_4Z EQU 19
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 2
CYDEV_CHIP_MEMBER_6A EQU 33
CYDEV_CHIP_MEMBER_FM3 EQU 37
CYDEV_CHIP_MEMBER_FM4 EQU 38
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 34
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 35
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 36
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_4M
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4AA_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AB_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AC_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AD_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AE_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4R_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4S_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4T_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4V_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4W_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4X_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Y_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Z_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_6A_ES EQU 17
CYDEV_CHIP_REVISION_6A_NO_UDB EQU 33
CYDEV_CHIP_REVISION_6A_PRODUCTION EQU 33
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_4M_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_READ_ACCELERATOR EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_Disallowed
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_PROTECT_KILL EQU 4
CYDEV_DEBUG_PROTECT_OPEN EQU 1
CYDEV_DEBUG_PROTECT EQU CYDEV_DEBUG_PROTECT_OPEN
CYDEV_DEBUG_PROTECT_PROTECTED EQU 2
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DFT_SELECT_CLK0 EQU 10
CYDEV_DFT_SELECT_CLK1 EQU 11
CYDEV_DMA_CHANNELS_AVAILABLE EQU 8
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_IMO_TRIMMED_BY_USB EQU 0
CYDEV_IMO_TRIMMED_BY_WCO EQU 0
CYDEV_INTR_NUMBER_DMA EQU 13
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 1
CYDEV_VDDA_MV EQU 3300
CYDEV_VDDD_MV EQU 3300
CYDEV_VDDIO_MV EQU 3300
CYDEV_WDT_GENERATE_ISR EQU 1
CYIPBLOCK_m0s8can_VERSION EQU 1
CYIPBLOCK_m0s8cpussv2_VERSION EQU 1
CYIPBLOCK_m0s8csd_VERSION EQU 1
CYIPBLOCK_m0s8ioss_VERSION EQU 1
CYIPBLOCK_m0s8lcd_VERSION EQU 2
CYIPBLOCK_m0s8lpcomp_VERSION EQU 2
CYIPBLOCK_m0s8peri_VERSION EQU 1
CYIPBLOCK_m0s8scb_VERSION EQU 2
CYIPBLOCK_m0s8srssv2_VERSION EQU 1
CYIPBLOCK_m0s8tcpwm_VERSION EQU 2
CYIPBLOCK_m0s8udbif_VERSION EQU 1
CYIPBLOCK_m0s8wco_VERSION EQU 1
CYIPBLOCK_s8pass4al_VERSION EQU 1
DMA_CHANNELS_USED__MASK EQU 0
CYDEV_BOOTLOADER_ENABLE EQU 0
    ENDIF
    END