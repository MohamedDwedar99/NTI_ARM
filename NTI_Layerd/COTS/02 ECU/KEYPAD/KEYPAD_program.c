/*
 * KEYPAD_interface.c
 *
 *  Created on: May 7, 2023
 *      Author: Mohamed Dwedar
 */


#include "Bit_Math.h"
#include "Std_Types.h"
#include "DIO_interface.h"
#include "Delay_interface.h"

#include "../../02 ECU/KEYPAD/KEYPAD_config.h"



u8 KEY_GIT[4][4] = {
		{'0','1','2','3'},
		{'4','5','6','7'},
		{'8','9','A','B'},
		{'C','D','E','F'}
};

void KEYPAD_voidInit(void)
{
	// SET ROWS OUT HIGH
	for (u8 PIN_I = KEYPAD_start; PIN_I < KEYPAD_start+4; PIN_I++)
	{
		DIO_voidSetPinDirection(KEYPAD_PORT, PIN_I, GPIO_OUTPUT_10MHZ_PP);
		DIO_voidSetPinValue(KEYPAD_PORT, PIN_I, GPIO_HIGH);
	}
	// SET COLOMNS IN PULL_UP
	for (u8 PIN_I = KEYPAD_start+4; PIN_I < KEYPAD_start + 8;PIN_I++)
	{
		DIO_voidSetPinDirection(KEYPAD_PORT, PIN_I, GPIO_INPUT_PULL_UP_DOWN);
		DIO_voidSetPinValue(KEYPAD_PORT, PIN_I, GPIO_HIGH);
	}
}


u8 KEYPAD_u8Read(void)
{
	u8 data = 0;
	for (u8 i = 0;i < 4;i++)
	{
		DIO_voidSetPinValue(KEYPAD_PORT,i+KEYPAD_start,GPIO_LOW);
		for (u8 j = 0;j < 4;j++)
		{
			if (!DIO_u8GetPinValue(KEYPAD_PORT, KEYPAD_start + 4 +j))
			{
				data = KEY_GIT[i][j];
			}
		}
		DIO_voidSetPinValue(KEYPAD_PORT,i+KEYPAD_start,GPIO_HIGH);
	}
	_delay_ms(200);
	return data;
}
