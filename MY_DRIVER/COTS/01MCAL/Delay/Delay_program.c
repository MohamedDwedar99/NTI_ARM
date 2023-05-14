/*
 * Delay_program.c
 *
 *  Created on: May 4, 2023
 *      Author: es-MohamedHAbdelAziz
 */
#include "Bit_Math.h"
#include "Std_Types.h"


void	_delay_ms(u32 ticks)
{
	u32 i;
	for( i = 0; i < (ticks * 500) ; i++)
	{
		asm("NOP");
	}
}
