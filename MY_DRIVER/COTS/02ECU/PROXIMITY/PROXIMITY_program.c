/*
 * PROXIMITY_program.c
 *
 *  Created on: May 12, 2023
 *      Author: es-MohamedHAbdelAziz
 */
#include "Std_Types.h"
#include "Bit_Math.h"

#include "GPIO_interface.h"
#include "PROXIMITY_interface.h"

void PROXIMITY_voidInit(u8 PORT, u8 PIN)
{
	GPIO_voidSetPinDirection(PORT, PIN,GPIO_INPUT_PULL_UP_DOWN);
	GPIO_voidSetPinValue(PORT, PIN,GPIO_HIGH);
}
u8   PROXIMITY_u8GetValue(u8 PORT, u8 PIN)
{
	u8 read = 99;
	read = GPIO_voidGetPinValue(PORT, PIN);
	return read;
}
