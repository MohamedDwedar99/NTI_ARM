/*
 * Segment7.c
 *
 *  Created on: May 4, 2023
 *      Author: es-MohamedHAbdelAziz
 */

#include "Std_Types.h"
#include "GPIO_interface.h"
#include "Segment7_interface.h"

u8 NUM[10] = {ZERO,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE};



void Segment7_voidInit(u8 Port,u8 startpin)
{
	u8 i;
	for (i = startpin; i < startpin+8;i++)
	{
		GPIO_voidSetPinDirection(Port, i, GPIO_OUTPUT_2MHZ_PP);
	}
}

void Segment7_voidSetValue(u8 port,u8 start,u8 data)
{
	if (data < 11)
	{
		GPIO_voidWriteValue(port, start, NUM[data]);
	}
}
void Segment7_voidDisplayON(u8 Port,u8 startpin)
{
	GPIO_voidSetPinValue(Port, startpin+7, GPIO_LOW);
}
void Segment7_voidDisplayOFF(u8 Port,u8 startpin)
{
	GPIO_voidSetPinValue(Port, startpin+7, GPIO_HIGH);
}