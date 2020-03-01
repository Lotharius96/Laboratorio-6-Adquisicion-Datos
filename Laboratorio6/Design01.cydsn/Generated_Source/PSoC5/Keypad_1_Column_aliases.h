/*******************************************************************************
* File Name: Keypad_1_Column.h  
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

#if !defined(CY_PINS_Keypad_1_Column_ALIASES_H) /* Pins Keypad_1_Column_ALIASES_H */
#define CY_PINS_Keypad_1_Column_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define Keypad_1_Column_0			(Keypad_1_Column__0__PC)
#define Keypad_1_Column_0_INTR	((uint16)((uint16)0x0001u << Keypad_1_Column__0__SHIFT))

#define Keypad_1_Column_1			(Keypad_1_Column__1__PC)
#define Keypad_1_Column_1_INTR	((uint16)((uint16)0x0001u << Keypad_1_Column__1__SHIFT))

#define Keypad_1_Column_2			(Keypad_1_Column__2__PC)
#define Keypad_1_Column_2_INTR	((uint16)((uint16)0x0001u << Keypad_1_Column__2__SHIFT))

#define Keypad_1_Column_3			(Keypad_1_Column__3__PC)
#define Keypad_1_Column_3_INTR	((uint16)((uint16)0x0001u << Keypad_1_Column__3__SHIFT))

#define Keypad_1_Column_INTR_ALL	 ((uint16)(Keypad_1_Column_0_INTR| Keypad_1_Column_1_INTR| Keypad_1_Column_2_INTR| Keypad_1_Column_3_INTR))

#endif /* End Pins Keypad_1_Column_ALIASES_H */


/* [] END OF FILE */
