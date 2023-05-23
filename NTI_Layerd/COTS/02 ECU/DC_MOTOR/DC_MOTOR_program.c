/*
 * DC_MOTOR_program.c
 *
 *  Created on: May 21, 2023
 *      Author: es-MohamedHAbdelAziz
 */
#include "Bit_Math.h"
#include "Std_Types.h"

#include "DC_MOTOR_config.h"
#include "DC_MOTOR_interface.h"
#include "DC_MOTOR_private.h"

#include "DIO_interface.h"

void DC_MOTOR_voidInit(void)
{
	DIO_voidSetPinDirection(DC_PORT, PIN_L, GPIO_OUTPUT_10MHZ_PP);
	DIO_voidSetPinDirection(DC_PORT, PIN_R, GPIO_OUTPUT_10MHZ_PP);
}
void DC_MOTOR_voidCW(void)
{
	DIO_voidSetPinValue(DC_PORT, PIN_L, GPIO_HIGH);
	DIO_voidSetPinValue(DC_PORT, PIN_R, GPIO_LOW);
}
void DC_MOTOR_voidCCW(void)
{
	DIO_voidSetPinValue(DC_PORT, PIN_L, GPIO_LOW);
	DIO_voidSetPinValue(DC_PORT, PIN_R, GPIO_HIGH);
}
void DC_MOTOR_voidStop(void)
{
	DIO_voidSetPinValue(DC_PORT, PIN_L, GPIO_LOW);
	DIO_voidSetPinValue(DC_PORT, PIN_R, GPIO_LOW);
}
