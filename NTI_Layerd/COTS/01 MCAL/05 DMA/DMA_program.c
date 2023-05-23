#include "Std_Types.h"
#include "Bit_Math.h"
#include "DIO_interface.h"
#include "DMA_private.h"
#include "DMA_interface.h"





void	DMA1_voidChannelInit(u8 Channel_copy,u8 source,u8 sink)
{

//	Memory to Memory

//	priority very high
//	Size (Source & Destination) u32
//	MINC, PINC enabled
//	Direction read from Peripheral
//	Transfere Complete Interrupt
//	Channel Disable

	//DMA1 ->	Channel[0].CCR = 0x00007AC2;
	switch (source)
	{
	case DMA_Memory:
		if (sink == DMA_Memory)
		{
			// Choose the Priority
		    DMA1 -> Channel[Channel_copy].CCR |= (DMA_VERYHIGH << PL);
		    // Source size
		    DMA1 -> Channel[Channel_copy].CCR |= (SIZE_32BIT   << MSIZE);
		    // Sink size
		    DMA1 -> Channel[Channel_copy].CCR |= (SIZE_32BIT   << PSIZE);
		    // source incerment mode
		    DMA1 -> Channel[Channel_copy].CCR |= 1 << MINC;
		    // sink incerment mode
		    DMA1 -> Channel[Channel_copy].CCR |= 1 << PINC;
		    // Transfer Error interrupt enable
		    DMA1 -> Channel[Channel_copy].CCR |= 1 << TEIE;
		    // Half Transfer interrupt enable
		    DMA1 -> Channel[Channel_copy].CCR |= 1 << HTIE;
		    // Transfer complete interrupt enable
		    DMA1 -> Channel[Channel_copy].CCR |= 1 << TCIE;
		    // Enable DMA
		    DMA1 -> Channel[Channel_copy].CCR |= 1 << EN;
		}
		else if (sink == DMA_Peripheral)
		{
			// Choose the Priority
		    DMA1 -> Channel[Channel_copy].CCR |= (DMA_VERYHIGH << PL);
		    // Source size
		    DMA1 -> Channel[Channel_copy].CCR |= (SIZE_32BIT   << MSIZE);
		    // Sink size
		    DMA1 -> Channel[Channel_copy].CCR |= (SIZE_32BIT   << PSIZE);
		    // source incerment mode
		    //DMA1 -> Channel[Channel_copy].CCR |= 1 << MINC;
		    // sink incerment mode
		    DMA1 -> Channel[Channel_copy].CCR |= 1 << PINC;
		    // Transfer Error interrupt enable
		    DMA1 -> Channel[Channel_copy].CCR |= 1 << TEIE;
		    // Half Transfer interrupt enable
		    DMA1 -> Channel[Channel_copy].CCR |= 1 << HTIE;
		    // Transfer complete interrupt enable
		    DMA1 -> Channel[Channel_copy].CCR |= 1 << TCIE;
		    // Enable DMA
		    DMA1 -> Channel[Channel_copy].CCR |= 1 << EN;
		}
		break;
	case DMA_Peripheral:
		if (sink == DMA_Memory)
		{
			// Choose the Priority
		    DMA1 -> Channel[Channel_copy].CCR |= (DMA_VERYHIGH << PL);
		    // Source size
		    DMA1 -> Channel[Channel_copy].CCR |= (SIZE_32BIT   << MSIZE);
		    // Sink size
		    DMA1 -> Channel[Channel_copy].CCR |= (SIZE_32BIT   << PSIZE);
		    // source incerment mode
		    //DMA1 -> Channel[Channel_copy].CCR |= 1 << MINC;
		    // sink incerment mode
		    DMA1 -> Channel[Channel_copy].CCR |= 1 << PINC;
		    // Transfer Error interrupt enable
		    DMA1 -> Channel[Channel_copy].CCR |= 1 << TEIE;
		    // Half Transfer interrupt enable
		    DMA1 -> Channel[Channel_copy].CCR |= 1 << HTIE;
		    // Transfer complete interrupt enable
		    DMA1 -> Channel[Channel_copy].CCR |= 1 << TCIE;
		    // Enable DMA
		    DMA1 -> Channel[Channel_copy].CCR |= 1 << EN;
		}
		else if (sink == DMA_Peripheral)
		{
			// Choose the Priority
		    DMA1 -> Channel[Channel_copy].CCR |= (DMA_VERYHIGH << PL);
		    // Source size
		    DMA1 -> Channel[Channel_copy].CCR |= (SIZE_32BIT   << MSIZE);
		    // Sink size
		    DMA1 -> Channel[Channel_copy].CCR |= (SIZE_32BIT   << PSIZE);
		    // source incerment mode
		   // DMA1 -> Channel[Channel_copy].CCR |= 1 << MINC;
		    // sink incerment mode
		   // DMA1 -> Channel[Channel_copy].CCR |= 1 << PINC;
		    // Transfer Error interrupt enable
		    DMA1 -> Channel[Channel_copy].CCR |= 1 << TEIE;
		    // Half Transfer interrupt enable
		    DMA1 -> Channel[Channel_copy].CCR |= 1 << HTIE;
		    // Transfer complete interrupt enable
		    DMA1 -> Channel[Channel_copy].CCR |= 1 << TCIE;
		    // Enable DMA
		    DMA1 -> Channel[Channel_copy].CCR |= 1 << EN;
		}
		break;
	}
}

void	DMA1_voidStartChannel(u8 Channel_copy, u32 * SrcAdd,u32 * DestAdd,u16 BlockLength)
{
	/*		Make Sure that the channel is  disabled */
	CLR_BIT(DMA1 -> Channel[Channel_copy].CCR,0);
	
	DMA1 -> Channel[Channel_copy].CPAR	=	SrcAdd;
	DMA1 -> Channel[Channel_copy].CMAR	=	DestAdd;
	
	/*	Load the Block Length				*/
	DMA1 -> Channel[Channel_copy].CNDTR	=	BlockLength;

	/*		Make Sure that the channel is  Enabled to strat transfere*/
	SET_BIT(DMA1 -> Channel[Channel_copy].CCR,0);
}








