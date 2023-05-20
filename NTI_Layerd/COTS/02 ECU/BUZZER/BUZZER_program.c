/*
 * BUZZER_program.c
 *
 *  Created on: May 4, 2023
 *      Author: es-MohamedHAbdelAziz
 */

#include "Bit_Math.h"
#include "Std_Types.h"

#include "DIO_interface.h"

#include "../../02 ECU/BUZZER/BUZZER_interface.h"


void BUZZER_voidInit(u8 port,u8 pin)
{
	DIO_voidSetPinDirection(port, pin, GPIO_OUTPUT_2MHZ_PP);
}
void BUZZER_voidON(u8 port,u8 pin)
{
	DIO_voidSetPinValue(port, pin, GPIO_HIGH);
}
void BUZZER_voidOFF(u8 port,u8 pin)
{
	DIO_voidSetPinValue(port, pin, GPIO_LOW);
}
