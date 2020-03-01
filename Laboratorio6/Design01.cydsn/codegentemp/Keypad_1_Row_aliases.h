/*******************************************************************************
* File Name: Keypad_1_Row.h  
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

#if !defined(CY_PINS_Keypad_1_Row_ALIASES_H) /* Pins Keypad_1_Row_ALIASES_H */
#define CY_PINS_Keypad_1_Row_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define Keypad_1_Row_0			(Keypad_1_Row__0__PC)
#define Keypad_1_Row_0_INTR	((uint16)((uint16)0x0001u << Keypad_1_Row__0__SHIFT))

#define Keypad_1_Row_1			(Keypad_1_Row__1__PC)
#define Keypad_1_Row_1_INTR	((uint16)((uint16)0x0001u << Keypad_1_Row__1__SHIFT))

#define Keypad_1_Row_2			(Keypad_1_Row__2__PC)
#define Keypad_1_Row_2_INTR	((uint16)((uint16)0x0001u << Keypad_1_Row__2__SHIFT))

#define Keypad_1_Row_3			(Keypad_1_Row__3__PC)
#define Keypad_1_Row_3_INTR	((uint16)((uint16)0x0001u << Keypad_1_Row__3__SHIFT))

#define Keypad_1_Row_INTR_ALL	 ((uint16)(Keypad_1_Row_0_INTR| Keypad_1_Row_1_INTR| Keypad_1_Row_2_INTR| Keypad_1_Row_3_INTR))

#endif /* End Pins Keypad_1_Row_ALIASES_H */


/* [] END OF FILE */
