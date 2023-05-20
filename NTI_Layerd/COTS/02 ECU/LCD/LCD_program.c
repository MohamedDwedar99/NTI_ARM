/*
 * LCD_program.c
 *
 *  Created on: May 4, 2023
 *      Author: Mohamed Dwedar
 */

#include "Bit_Math.h"
#include "Std_Types.h"

#include "DIO_interface.h"

#include "Delay_interface.h"
#include "../../02 ECU/LCD/LCD_config.h"
#include "../../02 ECU/LCD/LCD_interface.h"
#include "../../02 ECU/LCD/LCD_private.h"

#define DDRAM 0
#define CGRAM 1

#define Disable 0
#define Enable  1

#define WRITE    0
#define READ     1


void LCD_void_8bitSendCommand(u8 Commmand_copy)
{

	DIO_voidWriteValue(DATA_PORT, start_pin, Commmand_copy);
	DIO_voidSetPinValue(CONTROL_PORT,RS_PIN,0);
	DIO_voidSetPinValue(CONTROL_PORT,RW_PIN,0);
	DIO_voidSetPinValue(CONTROL_PORT,E_PIN,1);
	_delay_ms(1);
	DIO_voidSetPinValue(CONTROL_PORT,E_PIN,0);
	_delay_ms(3);
}
void LCD_void_8bitInit(void)
{
	for (u8 PIN_I = start_pin;  PIN_I < 8; PIN_I++)
	{
	    DIO_voidSetPinDirection(DATA_PORT, PIN_I, GPIO_OUTPUT_10MHZ_PP);
	}
	DIO_voidSetPinDirection(CONTROL_PORT,RS_PIN,GPIO_OUTPUT_10MHZ_PP);
	DIO_voidSetPinDirection(CONTROL_PORT,RW_PIN,GPIO_OUTPUT_10MHZ_PP);
	DIO_voidSetPinDirection(CONTROL_PORT,E_PIN,GPIO_OUTPUT_10MHZ_PP);
	_delay_ms(20);

	LCD_void_8bitSendCommand(LCD_MODE);
	LCD_void_8bitSendCommand(DISPLAY);
	LCD_void_8bitSendCommand(WRITE_DIR);
	LCD_void_8bitSendCommand(LCD_RETURN);
	LCD_void_8bitSendCommand(LCD_CLR);

}


void LCD_void_8bitSendChar(u8 data)
{
	DIO_voidWriteValue(DATA_PORT, start_pin, data);
	DIO_voidSetPinValue(CONTROL_PORT,RS_PIN,1);
	DIO_voidSetPinValue(CONTROL_PORT,RW_PIN,0);
	DIO_voidSetPinValue(CONTROL_PORT,E_PIN,1);
	_delay_ms(1);
	DIO_voidSetPinValue(CONTROL_PORT,E_PIN,0);
	_delay_ms(3);
}

void LCD_void_8bitSendString(const u8 data[])
{
	int i = 0;
	while (data[i] != '\0')
	{
		LCD_void_8bitSendChar(data[i]);
		i++;
	}
}
