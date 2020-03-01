/*******************************************************************************
* File Name: cyfittergnu.inc
* 
* PSoC Creator  4.2
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu.inc"
.include "cydevicegnu_trm.inc"

/* ADC */
.set ADC_ADC_SAR__CLK, CYREG_SAR1_CLK
.set ADC_ADC_SAR__CSR0, CYREG_SAR1_CSR0
.set ADC_ADC_SAR__CSR1, CYREG_SAR1_CSR1
.set ADC_ADC_SAR__CSR2, CYREG_SAR1_CSR2
.set ADC_ADC_SAR__CSR3, CYREG_SAR1_CSR3
.set ADC_ADC_SAR__CSR4, CYREG_SAR1_CSR4
.set ADC_ADC_SAR__CSR5, CYREG_SAR1_CSR5
.set ADC_ADC_SAR__CSR6, CYREG_SAR1_CSR6
.set ADC_ADC_SAR__PM_ACT_CFG, CYREG_PM_ACT_CFG11
.set ADC_ADC_SAR__PM_ACT_MSK, 0x02
.set ADC_ADC_SAR__PM_STBY_CFG, CYREG_PM_STBY_CFG11
.set ADC_ADC_SAR__PM_STBY_MSK, 0x02
.set ADC_ADC_SAR__SW0, CYREG_SAR1_SW0
.set ADC_ADC_SAR__SW2, CYREG_SAR1_SW2
.set ADC_ADC_SAR__SW3, CYREG_SAR1_SW3
.set ADC_ADC_SAR__SW4, CYREG_SAR1_SW4
.set ADC_ADC_SAR__SW6, CYREG_SAR1_SW6
.set ADC_ADC_SAR__TR0, CYREG_SAR1_TR0
.set ADC_ADC_SAR__WRK0, CYREG_SAR1_WRK0
.set ADC_ADC_SAR__WRK1, CYREG_SAR1_WRK1
.set ADC_Bypass__0__INTTYPE, CYREG_PICU0_INTTYPE2
.set ADC_Bypass__0__MASK, 0x04
.set ADC_Bypass__0__PC, CYREG_PRT0_PC2
.set ADC_Bypass__0__PORT, 0
.set ADC_Bypass__0__SHIFT, 2
.set ADC_Bypass__AG, CYREG_PRT0_AG
.set ADC_Bypass__AMUX, CYREG_PRT0_AMUX
.set ADC_Bypass__BIE, CYREG_PRT0_BIE
.set ADC_Bypass__BIT_MASK, CYREG_PRT0_BIT_MASK
.set ADC_Bypass__BYP, CYREG_PRT0_BYP
.set ADC_Bypass__CTL, CYREG_PRT0_CTL
.set ADC_Bypass__DM0, CYREG_PRT0_DM0
.set ADC_Bypass__DM1, CYREG_PRT0_DM1
.set ADC_Bypass__DM2, CYREG_PRT0_DM2
.set ADC_Bypass__DR, CYREG_PRT0_DR
.set ADC_Bypass__INP_DIS, CYREG_PRT0_INP_DIS
.set ADC_Bypass__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set ADC_Bypass__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set ADC_Bypass__LCD_EN, CYREG_PRT0_LCD_EN
.set ADC_Bypass__MASK, 0x04
.set ADC_Bypass__PORT, 0
.set ADC_Bypass__PRT, CYREG_PRT0_PRT
.set ADC_Bypass__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set ADC_Bypass__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set ADC_Bypass__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set ADC_Bypass__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set ADC_Bypass__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set ADC_Bypass__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set ADC_Bypass__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set ADC_Bypass__PS, CYREG_PRT0_PS
.set ADC_Bypass__SHIFT, 2
.set ADC_Bypass__SLW, CYREG_PRT0_SLW
.set ADC_IRQ__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set ADC_IRQ__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set ADC_IRQ__INTC_MASK, 0x01
.set ADC_IRQ__INTC_NUMBER, 0
.set ADC_IRQ__INTC_PRIOR_NUM, 7
.set ADC_IRQ__INTC_PRIOR_REG, CYREG_NVIC_PRI_0
.set ADC_IRQ__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set ADC_IRQ__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0
.set ADC_theACLK__CFG0, CYREG_CLKDIST_ACFG0_CFG0
.set ADC_theACLK__CFG1, CYREG_CLKDIST_ACFG0_CFG1
.set ADC_theACLK__CFG2, CYREG_CLKDIST_ACFG0_CFG2
.set ADC_theACLK__CFG2_SRC_SEL_MASK, 0x07
.set ADC_theACLK__CFG3, CYREG_CLKDIST_ACFG0_CFG3
.set ADC_theACLK__CFG3_PHASE_DLY_MASK, 0x0F
.set ADC_theACLK__INDEX, 0x00
.set ADC_theACLK__PM_ACT_CFG, CYREG_PM_ACT_CFG1
.set ADC_theACLK__PM_ACT_MSK, 0x01
.set ADC_theACLK__PM_STBY_CFG, CYREG_PM_STBY_CFG1
.set ADC_theACLK__PM_STBY_MSK, 0x01

/* LCD */
.set LCD_LCDPort__0__INTTYPE, CYREG_PICU12_INTTYPE0
.set LCD_LCDPort__0__MASK, 0x01
.set LCD_LCDPort__0__PC, CYREG_PRT12_PC0
.set LCD_LCDPort__0__PORT, 12
.set LCD_LCDPort__0__SHIFT, 0
.set LCD_LCDPort__1__INTTYPE, CYREG_PICU12_INTTYPE1
.set LCD_LCDPort__1__MASK, 0x02
.set LCD_LCDPort__1__PC, CYREG_PRT12_PC1
.set LCD_LCDPort__1__PORT, 12
.set LCD_LCDPort__1__SHIFT, 1
.set LCD_LCDPort__2__INTTYPE, CYREG_PICU12_INTTYPE2
.set LCD_LCDPort__2__MASK, 0x04
.set LCD_LCDPort__2__PC, CYREG_PRT12_PC2
.set LCD_LCDPort__2__PORT, 12
.set LCD_LCDPort__2__SHIFT, 2
.set LCD_LCDPort__3__INTTYPE, CYREG_PICU12_INTTYPE3
.set LCD_LCDPort__3__MASK, 0x08
.set LCD_LCDPort__3__PC, CYREG_PRT12_PC3
.set LCD_LCDPort__3__PORT, 12
.set LCD_LCDPort__3__SHIFT, 3
.set LCD_LCDPort__4__INTTYPE, CYREG_PICU12_INTTYPE4
.set LCD_LCDPort__4__MASK, 0x10
.set LCD_LCDPort__4__PC, CYREG_PRT12_PC4
.set LCD_LCDPort__4__PORT, 12
.set LCD_LCDPort__4__SHIFT, 4
.set LCD_LCDPort__5__INTTYPE, CYREG_PICU12_INTTYPE5
.set LCD_LCDPort__5__MASK, 0x20
.set LCD_LCDPort__5__PC, CYREG_PRT12_PC5
.set LCD_LCDPort__5__PORT, 12
.set LCD_LCDPort__5__SHIFT, 5
.set LCD_LCDPort__6__INTTYPE, CYREG_PICU12_INTTYPE6
.set LCD_LCDPort__6__MASK, 0x40
.set LCD_LCDPort__6__PC, CYREG_PRT12_PC6
.set LCD_LCDPort__6__PORT, 12
.set LCD_LCDPort__6__SHIFT, 6
.set LCD_LCDPort__AG, CYREG_PRT12_AG
.set LCD_LCDPort__BIE, CYREG_PRT12_BIE
.set LCD_LCDPort__BIT_MASK, CYREG_PRT12_BIT_MASK
.set LCD_LCDPort__BYP, CYREG_PRT12_BYP
.set LCD_LCDPort__DM0, CYREG_PRT12_DM0
.set LCD_LCDPort__DM1, CYREG_PRT12_DM1
.set LCD_LCDPort__DM2, CYREG_PRT12_DM2
.set LCD_LCDPort__DR, CYREG_PRT12_DR
.set LCD_LCDPort__INP_DIS, CYREG_PRT12_INP_DIS
.set LCD_LCDPort__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set LCD_LCDPort__MASK, 0x7F
.set LCD_LCDPort__PORT, 12
.set LCD_LCDPort__PRT, CYREG_PRT12_PRT
.set LCD_LCDPort__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set LCD_LCDPort__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set LCD_LCDPort__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set LCD_LCDPort__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set LCD_LCDPort__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set LCD_LCDPort__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set LCD_LCDPort__PS, CYREG_PRT12_PS
.set LCD_LCDPort__SHIFT, 0
.set LCD_LCDPort__SIO_CFG, CYREG_PRT12_SIO_CFG
.set LCD_LCDPort__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set LCD_LCDPort__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set LCD_LCDPort__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set LCD_LCDPort__SLW, CYREG_PRT12_SLW

/* pin */
.set pin__0__INTTYPE, CYREG_PICU2_INTTYPE1
.set pin__0__MASK, 0x02
.set pin__0__PC, CYREG_PRT2_PC1
.set pin__0__PORT, 2
.set pin__0__SHIFT, 1
.set pin__AG, CYREG_PRT2_AG
.set pin__AMUX, CYREG_PRT2_AMUX
.set pin__BIE, CYREG_PRT2_BIE
.set pin__BIT_MASK, CYREG_PRT2_BIT_MASK
.set pin__BYP, CYREG_PRT2_BYP
.set pin__CTL, CYREG_PRT2_CTL
.set pin__DM0, CYREG_PRT2_DM0
.set pin__DM1, CYREG_PRT2_DM1
.set pin__DM2, CYREG_PRT2_DM2
.set pin__DR, CYREG_PRT2_DR
.set pin__INP_DIS, CYREG_PRT2_INP_DIS
.set pin__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU2_BASE
.set pin__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set pin__LCD_EN, CYREG_PRT2_LCD_EN
.set pin__MASK, 0x02
.set pin__PORT, 2
.set pin__PRT, CYREG_PRT2_PRT
.set pin__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set pin__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set pin__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set pin__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set pin__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set pin__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set pin__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set pin__PS, CYREG_PRT2_PS
.set pin__SHIFT, 1
.set pin__SLW, CYREG_PRT2_SLW

/* Sensor */
.set Sensor__0__INTTYPE, CYREG_PICU0_INTTYPE0
.set Sensor__0__MASK, 0x01
.set Sensor__0__PC, CYREG_PRT0_PC0
.set Sensor__0__PORT, 0
.set Sensor__0__SHIFT, 0
.set Sensor__AG, CYREG_PRT0_AG
.set Sensor__AMUX, CYREG_PRT0_AMUX
.set Sensor__BIE, CYREG_PRT0_BIE
.set Sensor__BIT_MASK, CYREG_PRT0_BIT_MASK
.set Sensor__BYP, CYREG_PRT0_BYP
.set Sensor__CTL, CYREG_PRT0_CTL
.set Sensor__DM0, CYREG_PRT0_DM0
.set Sensor__DM1, CYREG_PRT0_DM1
.set Sensor__DM2, CYREG_PRT0_DM2
.set Sensor__DR, CYREG_PRT0_DR
.set Sensor__INP_DIS, CYREG_PRT0_INP_DIS
.set Sensor__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set Sensor__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set Sensor__LCD_EN, CYREG_PRT0_LCD_EN
.set Sensor__MASK, 0x01
.set Sensor__PORT, 0
.set Sensor__PRT, CYREG_PRT0_PRT
.set Sensor__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set Sensor__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set Sensor__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set Sensor__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set Sensor__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set Sensor__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set Sensor__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set Sensor__PS, CYREG_PRT0_PS
.set Sensor__SHIFT, 0
.set Sensor__SLW, CYREG_PRT0_SLW

/* Keypad_1 */
.set Keypad_1_Clock__CFG0, CYREG_CLKDIST_DCFG0_CFG0
.set Keypad_1_Clock__CFG1, CYREG_CLKDIST_DCFG0_CFG1
.set Keypad_1_Clock__CFG2, CYREG_CLKDIST_DCFG0_CFG2
.set Keypad_1_Clock__CFG2_SRC_SEL_MASK, 0x07
.set Keypad_1_Clock__INDEX, 0x00
.set Keypad_1_Clock__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set Keypad_1_Clock__PM_ACT_MSK, 0x01
.set Keypad_1_Clock__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set Keypad_1_Clock__PM_STBY_MSK, 0x01
.set Keypad_1_Column__0__INTTYPE, CYREG_PICU3_INTTYPE4
.set Keypad_1_Column__0__MASK, 0x10
.set Keypad_1_Column__0__PC, CYREG_PRT3_PC4
.set Keypad_1_Column__0__PORT, 3
.set Keypad_1_Column__0__SHIFT, 4
.set Keypad_1_Column__1__INTTYPE, CYREG_PICU3_INTTYPE5
.set Keypad_1_Column__1__MASK, 0x20
.set Keypad_1_Column__1__PC, CYREG_PRT3_PC5
.set Keypad_1_Column__1__PORT, 3
.set Keypad_1_Column__1__SHIFT, 5
.set Keypad_1_Column__2__INTTYPE, CYREG_PICU3_INTTYPE6
.set Keypad_1_Column__2__MASK, 0x40
.set Keypad_1_Column__2__PC, CYREG_PRT3_PC6
.set Keypad_1_Column__2__PORT, 3
.set Keypad_1_Column__2__SHIFT, 6
.set Keypad_1_Column__3__INTTYPE, CYREG_PICU3_INTTYPE7
.set Keypad_1_Column__3__MASK, 0x80
.set Keypad_1_Column__3__PC, CYREG_PRT3_PC7
.set Keypad_1_Column__3__PORT, 3
.set Keypad_1_Column__3__SHIFT, 7
.set Keypad_1_Column__AG, CYREG_PRT3_AG
.set Keypad_1_Column__AMUX, CYREG_PRT3_AMUX
.set Keypad_1_Column__BIE, CYREG_PRT3_BIE
.set Keypad_1_Column__BIT_MASK, CYREG_PRT3_BIT_MASK
.set Keypad_1_Column__BYP, CYREG_PRT3_BYP
.set Keypad_1_Column__CTL, CYREG_PRT3_CTL
.set Keypad_1_Column__DM0, CYREG_PRT3_DM0
.set Keypad_1_Column__DM1, CYREG_PRT3_DM1
.set Keypad_1_Column__DM2, CYREG_PRT3_DM2
.set Keypad_1_Column__DR, CYREG_PRT3_DR
.set Keypad_1_Column__INP_DIS, CYREG_PRT3_INP_DIS
.set Keypad_1_Column__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set Keypad_1_Column__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set Keypad_1_Column__LCD_EN, CYREG_PRT3_LCD_EN
.set Keypad_1_Column__PORT, 3
.set Keypad_1_Column__PRT, CYREG_PRT3_PRT
.set Keypad_1_Column__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set Keypad_1_Column__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set Keypad_1_Column__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set Keypad_1_Column__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set Keypad_1_Column__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set Keypad_1_Column__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set Keypad_1_Column__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set Keypad_1_Column__PS, CYREG_PRT3_PS
.set Keypad_1_Column__SLW, CYREG_PRT3_SLW
.set Keypad_1_Row__0__INTTYPE, CYREG_PICU3_INTTYPE0
.set Keypad_1_Row__0__MASK, 0x01
.set Keypad_1_Row__0__PC, CYREG_PRT3_PC0
.set Keypad_1_Row__0__PORT, 3
.set Keypad_1_Row__0__SHIFT, 0
.set Keypad_1_Row__1__INTTYPE, CYREG_PICU3_INTTYPE1
.set Keypad_1_Row__1__MASK, 0x02
.set Keypad_1_Row__1__PC, CYREG_PRT3_PC1
.set Keypad_1_Row__1__PORT, 3
.set Keypad_1_Row__1__SHIFT, 1
.set Keypad_1_Row__2__INTTYPE, CYREG_PICU3_INTTYPE2
.set Keypad_1_Row__2__MASK, 0x04
.set Keypad_1_Row__2__PC, CYREG_PRT3_PC2
.set Keypad_1_Row__2__PORT, 3
.set Keypad_1_Row__2__SHIFT, 2
.set Keypad_1_Row__3__INTTYPE, CYREG_PICU3_INTTYPE3
.set Keypad_1_Row__3__MASK, 0x08
.set Keypad_1_Row__3__PC, CYREG_PRT3_PC3
.set Keypad_1_Row__3__PORT, 3
.set Keypad_1_Row__3__SHIFT, 3
.set Keypad_1_Row__AG, CYREG_PRT3_AG
.set Keypad_1_Row__AMUX, CYREG_PRT3_AMUX
.set Keypad_1_Row__BIE, CYREG_PRT3_BIE
.set Keypad_1_Row__BIT_MASK, CYREG_PRT3_BIT_MASK
.set Keypad_1_Row__BYP, CYREG_PRT3_BYP
.set Keypad_1_Row__CTL, CYREG_PRT3_CTL
.set Keypad_1_Row__DM0, CYREG_PRT3_DM0
.set Keypad_1_Row__DM1, CYREG_PRT3_DM1
.set Keypad_1_Row__DM2, CYREG_PRT3_DM2
.set Keypad_1_Row__DR, CYREG_PRT3_DR
.set Keypad_1_Row__INP_DIS, CYREG_PRT3_INP_DIS
.set Keypad_1_Row__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set Keypad_1_Row__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set Keypad_1_Row__LCD_EN, CYREG_PRT3_LCD_EN
.set Keypad_1_Row__PORT, 3
.set Keypad_1_Row__PRT, CYREG_PRT3_PRT
.set Keypad_1_Row__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set Keypad_1_Row__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set Keypad_1_Row__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set Keypad_1_Row__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set Keypad_1_Row__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set Keypad_1_Row__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set Keypad_1_Row__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set Keypad_1_Row__PS, CYREG_PRT3_PS
.set Keypad_1_Row__SLW, CYREG_PRT3_SLW
.set Keypad_1_Status_Reg_sts_sts_reg__0__MASK, 0x01
.set Keypad_1_Status_Reg_sts_sts_reg__0__POS, 0
.set Keypad_1_Status_Reg_sts_sts_reg__1__MASK, 0x02
.set Keypad_1_Status_Reg_sts_sts_reg__1__POS, 1
.set Keypad_1_Status_Reg_sts_sts_reg__16BIT_STATUS_AUX_CTL_REG, CYREG_B1_UDB05_06_ACTL
.set Keypad_1_Status_Reg_sts_sts_reg__16BIT_STATUS_REG, CYREG_B1_UDB05_06_ST
.set Keypad_1_Status_Reg_sts_sts_reg__2__MASK, 0x04
.set Keypad_1_Status_Reg_sts_sts_reg__2__POS, 2
.set Keypad_1_Status_Reg_sts_sts_reg__3__MASK, 0x08
.set Keypad_1_Status_Reg_sts_sts_reg__3__POS, 3
.set Keypad_1_Status_Reg_sts_sts_reg__4__MASK, 0x10
.set Keypad_1_Status_Reg_sts_sts_reg__4__POS, 4
.set Keypad_1_Status_Reg_sts_sts_reg__MASK, 0x1F
.set Keypad_1_Status_Reg_sts_sts_reg__MASK_REG, CYREG_B1_UDB05_MSK
.set Keypad_1_Status_Reg_sts_sts_reg__STATUS_AUX_CTL_REG, CYREG_B1_UDB05_ACTL
.set Keypad_1_Status_Reg_sts_sts_reg__STATUS_REG, CYREG_B1_UDB05_ST

/* isr_press */
.set isr_press__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set isr_press__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set isr_press__INTC_MASK, 0x02
.set isr_press__INTC_NUMBER, 1
.set isr_press__INTC_PRIOR_NUM, 7
.set isr_press__INTC_PRIOR_REG, CYREG_NVIC_PRI_1
.set isr_press__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set isr_press__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* isr_timer */
.set isr_timer__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set isr_timer__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set isr_timer__INTC_MASK, 0x04
.set isr_timer__INTC_NUMBER, 2
.set isr_timer__INTC_PRIOR_NUM, 7
.set isr_timer__INTC_PRIOR_REG, CYREG_NVIC_PRI_2
.set isr_timer__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set isr_timer__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* timer_clock */
.set timer_clock__CFG0, CYREG_CLKDIST_DCFG1_CFG0
.set timer_clock__CFG1, CYREG_CLKDIST_DCFG1_CFG1
.set timer_clock__CFG2, CYREG_CLKDIST_DCFG1_CFG2
.set timer_clock__CFG2_SRC_SEL_MASK, 0x07
.set timer_clock__INDEX, 0x01
.set timer_clock__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set timer_clock__PM_ACT_MSK, 0x02
.set timer_clock__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set timer_clock__PM_STBY_MSK, 0x02

/* Timer_TimerUDB */
.set Timer_TimerUDB_rstSts_stsreg__0__MASK, 0x01
.set Timer_TimerUDB_rstSts_stsreg__0__POS, 0
.set Timer_TimerUDB_rstSts_stsreg__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB11_12_ACTL
.set Timer_TimerUDB_rstSts_stsreg__16BIT_STATUS_REG, CYREG_B0_UDB11_12_ST
.set Timer_TimerUDB_rstSts_stsreg__2__MASK, 0x04
.set Timer_TimerUDB_rstSts_stsreg__2__POS, 2
.set Timer_TimerUDB_rstSts_stsreg__3__MASK, 0x08
.set Timer_TimerUDB_rstSts_stsreg__3__POS, 3
.set Timer_TimerUDB_rstSts_stsreg__MASK, 0x0D
.set Timer_TimerUDB_rstSts_stsreg__MASK_REG, CYREG_B0_UDB11_MSK
.set Timer_TimerUDB_rstSts_stsreg__MASK_ST_AUX_CTL_REG, CYREG_B0_UDB11_MSK_ACTL
.set Timer_TimerUDB_rstSts_stsreg__PER_ST_AUX_CTL_REG, CYREG_B0_UDB11_MSK_ACTL
.set Timer_TimerUDB_rstSts_stsreg__STATUS_AUX_CTL_REG, CYREG_B0_UDB11_ACTL
.set Timer_TimerUDB_rstSts_stsreg__STATUS_CNT_REG, CYREG_B0_UDB11_ST_CTL
.set Timer_TimerUDB_rstSts_stsreg__STATUS_CONTROL_REG, CYREG_B0_UDB11_ST_CTL
.set Timer_TimerUDB_rstSts_stsreg__STATUS_REG, CYREG_B0_UDB11_ST
.set Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_AUX_CTL_REG, CYREG_B0_UDB11_12_ACTL
.set Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_CONTROL_REG, CYREG_B0_UDB11_12_CTL
.set Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_COUNT_REG, CYREG_B0_UDB11_12_CTL
.set Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_CONTROL_REG, CYREG_B0_UDB11_12_CTL
.set Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_COUNT_REG, CYREG_B0_UDB11_12_CTL
.set Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_MASK_REG, CYREG_B0_UDB11_12_MSK
.set Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_PERIOD_REG, CYREG_B0_UDB11_12_MSK
.set Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_MASK_REG, CYREG_B0_UDB11_12_MSK
.set Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_PERIOD_REG, CYREG_B0_UDB11_12_MSK
.set Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__7__MASK, 0x80
.set Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__7__POS, 7
.set Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_AUX_CTL_REG, CYREG_B0_UDB11_ACTL
.set Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_REG, CYREG_B0_UDB11_CTL
.set Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_ST_REG, CYREG_B0_UDB11_ST_CTL
.set Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_REG, CYREG_B0_UDB11_CTL
.set Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_ST_REG, CYREG_B0_UDB11_ST_CTL
.set Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__MASK, 0x80
.set Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__MASK_CTL_AUX_CTL_REG, CYREG_B0_UDB11_MSK_ACTL
.set Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__PER_CTL_AUX_CTL_REG, CYREG_B0_UDB11_MSK_ACTL
.set Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__PERIOD_REG, CYREG_B0_UDB11_MSK
.set Timer_TimerUDB_sT16_timerdp_u0__16BIT_A0_REG, CYREG_B0_UDB10_11_A0
.set Timer_TimerUDB_sT16_timerdp_u0__16BIT_A1_REG, CYREG_B0_UDB10_11_A1
.set Timer_TimerUDB_sT16_timerdp_u0__16BIT_D0_REG, CYREG_B0_UDB10_11_D0
.set Timer_TimerUDB_sT16_timerdp_u0__16BIT_D1_REG, CYREG_B0_UDB10_11_D1
.set Timer_TimerUDB_sT16_timerdp_u0__16BIT_DP_AUX_CTL_REG, CYREG_B0_UDB10_11_ACTL
.set Timer_TimerUDB_sT16_timerdp_u0__16BIT_F0_REG, CYREG_B0_UDB10_11_F0
.set Timer_TimerUDB_sT16_timerdp_u0__16BIT_F1_REG, CYREG_B0_UDB10_11_F1
.set Timer_TimerUDB_sT16_timerdp_u0__A0_A1_REG, CYREG_B0_UDB10_A0_A1
.set Timer_TimerUDB_sT16_timerdp_u0__A0_REG, CYREG_B0_UDB10_A0
.set Timer_TimerUDB_sT16_timerdp_u0__A1_REG, CYREG_B0_UDB10_A1
.set Timer_TimerUDB_sT16_timerdp_u0__D0_D1_REG, CYREG_B0_UDB10_D0_D1
.set Timer_TimerUDB_sT16_timerdp_u0__D0_REG, CYREG_B0_UDB10_D0
.set Timer_TimerUDB_sT16_timerdp_u0__D1_REG, CYREG_B0_UDB10_D1
.set Timer_TimerUDB_sT16_timerdp_u0__DP_AUX_CTL_REG, CYREG_B0_UDB10_ACTL
.set Timer_TimerUDB_sT16_timerdp_u0__F0_F1_REG, CYREG_B0_UDB10_F0_F1
.set Timer_TimerUDB_sT16_timerdp_u0__F0_REG, CYREG_B0_UDB10_F0
.set Timer_TimerUDB_sT16_timerdp_u0__F1_REG, CYREG_B0_UDB10_F1
.set Timer_TimerUDB_sT16_timerdp_u1__16BIT_A0_REG, CYREG_B0_UDB11_12_A0
.set Timer_TimerUDB_sT16_timerdp_u1__16BIT_A1_REG, CYREG_B0_UDB11_12_A1
.set Timer_TimerUDB_sT16_timerdp_u1__16BIT_D0_REG, CYREG_B0_UDB11_12_D0
.set Timer_TimerUDB_sT16_timerdp_u1__16BIT_D1_REG, CYREG_B0_UDB11_12_D1
.set Timer_TimerUDB_sT16_timerdp_u1__16BIT_DP_AUX_CTL_REG, CYREG_B0_UDB11_12_ACTL
.set Timer_TimerUDB_sT16_timerdp_u1__16BIT_F0_REG, CYREG_B0_UDB11_12_F0
.set Timer_TimerUDB_sT16_timerdp_u1__16BIT_F1_REG, CYREG_B0_UDB11_12_F1
.set Timer_TimerUDB_sT16_timerdp_u1__A0_A1_REG, CYREG_B0_UDB11_A0_A1
.set Timer_TimerUDB_sT16_timerdp_u1__A0_REG, CYREG_B0_UDB11_A0
.set Timer_TimerUDB_sT16_timerdp_u1__A1_REG, CYREG_B0_UDB11_A1
.set Timer_TimerUDB_sT16_timerdp_u1__D0_D1_REG, CYREG_B0_UDB11_D0_D1
.set Timer_TimerUDB_sT16_timerdp_u1__D0_REG, CYREG_B0_UDB11_D0
.set Timer_TimerUDB_sT16_timerdp_u1__D1_REG, CYREG_B0_UDB11_D1
.set Timer_TimerUDB_sT16_timerdp_u1__DP_AUX_CTL_REG, CYREG_B0_UDB11_ACTL
.set Timer_TimerUDB_sT16_timerdp_u1__F0_F1_REG, CYREG_B0_UDB11_F0_F1
.set Timer_TimerUDB_sT16_timerdp_u1__F0_REG, CYREG_B0_UDB11_F0
.set Timer_TimerUDB_sT16_timerdp_u1__F1_REG, CYREG_B0_UDB11_F1
.set Timer_TimerUDB_sT16_timerdp_u1__MSK_DP_AUX_CTL_REG, CYREG_B0_UDB11_MSK_ACTL
.set Timer_TimerUDB_sT16_timerdp_u1__PER_DP_AUX_CTL_REG, CYREG_B0_UDB11_MSK_ACTL

/* Miscellaneous */
.set BCLK__BUS_CLK__HZ, 24000000
.set BCLK__BUS_CLK__KHZ, 24000
.set BCLK__BUS_CLK__MHZ, 24
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PSOC4A, 21
.set CYDEV_CHIP_DIE_PSOC5LP, 2
.set CYDEV_CHIP_DIE_PSOC5TM, 3
.set CYDEV_CHIP_DIE_TMA4, 4
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_FM0P, 5
.set CYDEV_CHIP_FAMILY_FM3, 6
.set CYDEV_CHIP_FAMILY_FM4, 7
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_PSOC6, 4
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC5
.set CYDEV_CHIP_JTAG_ID, 0x2E161069
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 21
.set CYDEV_CHIP_MEMBER_4D, 16
.set CYDEV_CHIP_MEMBER_4E, 6
.set CYDEV_CHIP_MEMBER_4F, 22
.set CYDEV_CHIP_MEMBER_4G, 4
.set CYDEV_CHIP_MEMBER_4H, 20
.set CYDEV_CHIP_MEMBER_4I, 26
.set CYDEV_CHIP_MEMBER_4J, 17
.set CYDEV_CHIP_MEMBER_4K, 18
.set CYDEV_CHIP_MEMBER_4L, 25
.set CYDEV_CHIP_MEMBER_4M, 24
.set CYDEV_CHIP_MEMBER_4N, 11
.set CYDEV_CHIP_MEMBER_4O, 8
.set CYDEV_CHIP_MEMBER_4P, 23
.set CYDEV_CHIP_MEMBER_4Q, 14
.set CYDEV_CHIP_MEMBER_4R, 9
.set CYDEV_CHIP_MEMBER_4S, 12
.set CYDEV_CHIP_MEMBER_4T, 10
.set CYDEV_CHIP_MEMBER_4U, 5
.set CYDEV_CHIP_MEMBER_4V, 19
.set CYDEV_CHIP_MEMBER_4W, 13
.set CYDEV_CHIP_MEMBER_4X, 7
.set CYDEV_CHIP_MEMBER_4Y, 15
.set CYDEV_CHIP_MEMBER_5A, 3
.set CYDEV_CHIP_MEMBER_5B, 2
.set CYDEV_CHIP_MEMBER_6A, 27
.set CYDEV_CHIP_MEMBER_FM3, 31
.set CYDEV_CHIP_MEMBER_FM4, 32
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1, 28
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2, 29
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3, 30
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_5B
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES0, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES1, 1
.set CYDEV_CHIP_REV_PSOC5TM_PRODUCTION, 1
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4O_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4P_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Q_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4R_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4S_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4T_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4V_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4W_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4X_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Y_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_6A_ES, 17
.set CYDEV_CHIP_REVISION_6A_NO_UDB, 33
.set CYDEV_CHIP_REVISION_6A_PRODUCTION, 33
.set CYDEV_CHIP_REVISION_FM3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM4_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_5B_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_FASTBOOT_ENABLED, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_DMA, 0
.set CYDEV_CONFIGURATION_ECC, 1
.set CYDEV_CONFIGURATION_IMOENABLED, CYDEV_CONFIG_FASTBOOT_ENABLED
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_ENABLE_MASK, 0x20
.set CYDEV_DEBUG_ENABLE_REGISTER, CYREG_MLOGIC_DEBUG
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_JTAG_4, 1
.set CYDEV_DEBUGGING_DPS_JTAG_5, 0
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS_SWD_SWV, 6
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD_SWV
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DEBUGGING_XRES, 0
.set CYDEV_DMA_CHANNELS_AVAILABLE, 24
.set CYDEV_ECC_ENABLE, 0
.set CYDEV_HEAP_SIZE, 0x200
.set CYDEV_INSTRUCT_CACHE_ENABLED, 1
.set CYDEV_INTR_RISING, 0x00000007
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_PROTECTION_ENABLE, 0
.set CYDEV_STACK_SIZE, 0x0800
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 0
.set CYDEV_VDDA_MV, 5000
.set CYDEV_VDDD_MV, 5000
.set CYDEV_VDDIO0_MV, 5000
.set CYDEV_VDDIO1_MV, 5000
.set CYDEV_VDDIO2_MV, 5000
.set CYDEV_VDDIO3_MV, 5000
.set CYDEV_VIO0_MV, 5000
.set CYDEV_VIO1_MV, 5000
.set CYDEV_VIO2_MV, 5000
.set CYDEV_VIO3_MV, 5000
.set CYIPBLOCK_ARM_CM3_VERSION, 0
.set CYIPBLOCK_P3_ANAIF_VERSION, 0
.set CYIPBLOCK_P3_CAN_VERSION, 0
.set CYIPBLOCK_P3_CAPSENSE_VERSION, 0
.set CYIPBLOCK_P3_COMP_VERSION, 0
.set CYIPBLOCK_P3_DECIMATOR_VERSION, 0
.set CYIPBLOCK_P3_DFB_VERSION, 0
.set CYIPBLOCK_P3_DMA_VERSION, 0
.set CYIPBLOCK_P3_DRQ_VERSION, 0
.set CYIPBLOCK_P3_DSM_VERSION, 0
.set CYIPBLOCK_P3_EMIF_VERSION, 0
.set CYIPBLOCK_P3_I2C_VERSION, 0
.set CYIPBLOCK_P3_LCD_VERSION, 0
.set CYIPBLOCK_P3_LPF_VERSION, 0
.set CYIPBLOCK_P3_OPAMP_VERSION, 0
.set CYIPBLOCK_P3_PM_VERSION, 0
.set CYIPBLOCK_P3_SCCT_VERSION, 0
.set CYIPBLOCK_P3_TIMER_VERSION, 0
.set CYIPBLOCK_P3_USB_VERSION, 0
.set CYIPBLOCK_P3_VIDAC_VERSION, 0
.set CYIPBLOCK_P3_VREF_VERSION, 0
.set CYIPBLOCK_S8_GPIO_VERSION, 0
.set CYIPBLOCK_S8_IRQ_VERSION, 0
.set CYIPBLOCK_S8_SAR_VERSION, 0
.set CYIPBLOCK_S8_SIO_VERSION, 0
.set CYIPBLOCK_S8_UDB_VERSION, 0
.set DMA_CHANNELS_USED__MASK0, 0x00000000
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif