/*
 * Segment7.c
 *
 *  Created on: May 4, 2023
 *      Author: es-MohamedHAbdelAziz
 */

#include "Std_Types.h"
#include "DIO_interface.h"

#include "../../02 ECU/Segment7/Segment7_interface.h"

u8 NUM[10] = {ZERO,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE};



void Segment7_voidInit(u8 Port,u8 startpin)
{
	u8 i;
	for (i = startpin; i < startpin+8;i++)
	{
		DIO_voidSetPinDirection(Port, i, GPIO_OUTPUT_2MHZ_PP);
	}
}

void Segment7_voidSetValue(u8 port,u8 start,u8 data)
{
	if (data < 11)
	{
		DIO_voidWriteValue(port, start, NUM[data]);
	}
}
void Segment7_voidDisplayON(u8 Port,u8 startpin)
{
	DIO_voidSetPinValue(Port, startpin+7, GPIO_LOW);
}
void Segment7_voidDisplayOFF(u8 Port,u8 startpin)
{
	DIO_voidSetPinValue(Port, startpin+7, GPIO_HIGH);
}