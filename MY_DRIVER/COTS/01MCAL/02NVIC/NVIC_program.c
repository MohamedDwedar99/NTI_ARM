/*
 * NVIC_program.c
 *
 *  Created on: May 12, 2023
 *      Author: es-MohamedHAbdelAziz
 */

#include "Bit_Math.h"
#include "Std_Types.h"

#include "NVIC_config.h"
#include "NVIC_private.h"
#include "NVIC_interface.h"


void		NVIC_voidInit(void)
{
#ifndef SCB_AIRCR
#define SCB_BASE_ADD    0xE000E008
#define SCB_AIRCR        *((volatile u32 * )(SCB_BASE_ADD + 0x0C))
#endif
SCB_AIRCR = GRB_00_SUB_16;
}



void		NVIC_voidEnablePerInt(u8 IntNum)
{
	if (IntNum < 32)
	{
        NVIC -> ISER0 = 1 << IntNum;
	}
	else if (IntNum < 64)
	{
		IntNum -= 32;
		NVIC -> ISER1 = 1 << IntNum;
	}
}
void		NVIC_voidDisablePerInt(u8 IntNum)
{
	if (IntNum < 32)
	{
        NVIC -> ICER0 = 1 << IntNum;
	}
	else if (IntNum < 64)
	{
		IntNum -= 32;
		NVIC -> ICER1 = 1 << IntNum;
	}
}

void		NVIC_voidSetPendingFlag(u8 IntNum)
{

	if (IntNum < 32)
	{
        NVIC -> ISPR0 = 1 << IntNum;
	}
	else if (IntNum < 64)
	{
		IntNum -= 32;
		NVIC -> ISPR1 = 1 << IntNum;
	}
}
void		NVIC_voidClrPendingFlag(u8 IntNum)
{
	if (IntNum < 32)
	{
        NVIC -> ICPR0 = 1 << IntNum;
	}
	else if (IntNum < 64)
	{
		IntNum -= 32;
		NVIC -> ICPR1 = 1 << IntNum;
	}
}


u8			NVIC_u8ReadActiveFlag(u8 IntNum)
{
	u8 read = 99;
	if (IntNum < 32)
	{
        read = GET_BIT(NVIC -> IABR0, IntNum);
	}
	else if (IntNum < 64)
	{
		IntNum -= 32;
		read = GET_BIT(NVIC -> IABR0, IntNum);
	}
	return read;
}



void		NVIC_voidSetSwIntPriority(u8 IntNum , u8 priority)
{
	if (IntNum < 64 && priority < 16)
	{
		NVIC -> IPR[IntNum] = priority << 4;
	}
}
