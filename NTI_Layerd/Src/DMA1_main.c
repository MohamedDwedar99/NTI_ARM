
#include "Std_Types.h"
#include "Bit_Math.h"
#include "RCC_interface.h"
#include "DMA_interface.h"
#include "NVIC_interface.h"
#include "DIO_interface.h"




u32	Processor_Arr1[1100];
u32	Processor_Arr2[1100];

u32	DMA_Arr3[1100];
u32	DMA_Arr4[1100];


int main()
{
	for(u16 i = 0 ; i < 1100 ; i++)
	{
		Processor_Arr1[i]	=	i;
		DMA_Arr3[i]			=	i;
	}

	/*	System init			*/
	RCC_voidSysClkInt();
	RCC_voidEnablePerClk(RCC_AHB, 0);
	NVIC_voidInit();
	NVIC_voidEnablePerInt(11);
	DMA1_voidChannelInit(DMA_Channel1, DMA_Memory, DMA_Memory);
	/*	DMA1 Channel Transfere Round	*/
	DMA1_voidStartChannel(DMA_Arr3,DMA_Arr4,1100);

	/*	Processor Transfere Round	*/
	for(u16 i = 0 ; i < 1000 ; i++)
	{
		Processor_Arr2[i]	=	Processor_Arr1[i];
	}



while(1)
{

}

return 0;
}

void	DMA1_Channel1_IRQHandler()
{
	/*		Toggle led		*/
	asm("NOP");
	DIO_voidSetPinDirection(PORTA, PIN0, GPIO_INPUT_ANALOG);

}
