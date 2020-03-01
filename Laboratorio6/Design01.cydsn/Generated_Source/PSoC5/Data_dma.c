/***************************************************************************
* File Name: Data_dma.c  
* Version 1.70
*
*  Description:
*   Provides an API for the DMAC component. The API includes functions
*   for the DMA controller, DMA channels and Transfer Descriptors.
*
*
*   Note:
*     This module requires the developer to finish or fill in the auto
*     generated funcions and setup the dma channel and TD's.
*
********************************************************************************
* Copyright 2008-2010, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/
#include <CYLIB.H>
#include <CYDMAC.H>
#include <Data_dma.H>



/****************************************************************************
* 
* The following defines are available in Cyfitter.h
* 
* 
* 
* Data__DRQ_CTL_REG
* 
* 
* Data__DRQ_NUMBER
* 
* Number of TD's used by this channel.
* Data__NUMBEROF_TDS
* 
* Priority of this channel.
* Data__PRIORITY
* 
* True if Data_TERMIN_SEL is used.
* Data__TERMIN_EN
* 
* TERMIN interrupt line to signal terminate.
* Data__TERMIN_SEL
* 
* 
* True if Data_TERMOUT0_SEL is used.
* Data__TERMOUT0_EN
* 
* 
* TERMOUT0 interrupt line to signal completion.
* Data__TERMOUT0_SEL
* 
* 
* True if Data_TERMOUT1_SEL is used.
* Data__TERMOUT1_EN
* 
* 
* TERMOUT1 interrupt line to signal completion.
* Data__TERMOUT1_SEL
* 
****************************************************************************/


/* Zero based index of Data dma channel */
uint8 Data_DmaHandle = DMA_INVALID_CHANNEL;

/*********************************************************************
* Function Name: uint8 Data_DmaInitalize
**********************************************************************
* Summary:
*   Allocates and initialises a channel of the DMAC to be used by the
*   caller.
*
* Parameters:
*   BurstCount.
*       
*       
*   ReqestPerBurst.
*       
*       
*   UpperSrcAddress.
*       
*       
*   UpperDestAddress.
*       
*
* Return:
*   The channel that can be used by the caller for DMA activity.
*   DMA_INVALID_CHANNEL (0xFF) if there are no channels left. 
*
*
*******************************************************************/
uint8 Data_DmaInitialize(uint8 BurstCount, uint8 ReqestPerBurst, uint16 UpperSrcAddress, uint16 UpperDestAddress) 
{

    /* Allocate a DMA channel. */
    Data_DmaHandle = (uint8)Data__DRQ_NUMBER;

    /* Configure the channel. */
    (void)CyDmaChSetConfiguration(Data_DmaHandle,
                                  BurstCount,
                                  ReqestPerBurst,
                                  (uint8)Data__TERMOUT0_SEL,
                                  (uint8)Data__TERMOUT1_SEL,
                                  (uint8)Data__TERMIN_SEL);

    /* Set the extended address for the transfers */
    (void)CyDmaChSetExtendedAddress(Data_DmaHandle, UpperSrcAddress, UpperDestAddress);

    /* Set the priority for this channel */
    (void)CyDmaChPriority(Data_DmaHandle, (uint8)Data__PRIORITY);
    
    return Data_DmaHandle;
}

/*********************************************************************
* Function Name: void Data_DmaRelease
**********************************************************************
* Summary:
*   Frees the channel associated with Data.
*
*
* Parameters:
*   void.
*
*
*
* Return:
*   void.
*
*******************************************************************/
void Data_DmaRelease(void) 
{
    /* Disable the channel */
    (void)CyDmaChDisable(Data_DmaHandle);
}

