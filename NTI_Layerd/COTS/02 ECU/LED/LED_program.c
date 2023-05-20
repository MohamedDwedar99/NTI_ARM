/*
 * LED_program.c
 *
 *  Created on: May 4, 2023
 *      Author: es-MohamedHAbdelAziz
 */

#include "Bit_Math.h"
#include "Std_Types.h"

#include "DIO_interface.h"

#include "../../02 ECU/LED/LED_interface.h"


void LED_voidInit(u8 port,u8 pin)
{
	DIO_voidSetPinDirection(port, pin, GPIO_OUTPUT_2MHZ_PP);
}
void LED_voidON(u8 port,u8 pin)
{
	DIO_voidSetPinValue(port, pin, GPIO_HIGH);
}
void LED_voidOFF(u8 port,u8 pin)
{
	DIO_voidSetPinValue(port, pin, GPIO_LOW);
}
