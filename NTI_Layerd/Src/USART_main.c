/*
 * USART_main.c
 *
 *  Created on: May 23, 2023
 *      Author: es-MohamedHAbdelAziz
 */


#include "Std_Types.h"
#include "Bit_Math.h"

#include "RCC_interface.h"
#include "DIO_interface.h"
#include "USART_interface.h"

void main (void)
{
	RCC_voidSysClkInt();
	RCC_voidEnablePerClk(RCC_APB2, 2);
	RCC_voidEnablePerClk(RCC_APB2, 0);
	RCC_voidEnablePerClk(RCC_APB2, 14);

	DIO_voidSetPinDirection(PORTA, PIN9, GPIO_OUTPUT_10MHZ_AFPP);
	DIO_voidSetPinDirection(PORTA, PIN10, GPIO_INPUT_FLOAT);
	UART_init();
	UART_enableTX();
	UART_enableRX();
	u8 x = 0;
	while(1)
	{
		UART_TXdata('A');
		x =UART_RXdata();
		asm("NOP");
	}
}
