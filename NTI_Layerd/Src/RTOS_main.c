/*
 * RTOS_main.c
 *
 *  Created on: May 23, 2023
 *      Author: es-MohamedHAbdelAziz
 */


#include "Std_Types.h"
#include "Bit_Math.h"

#include "Delay_interface.h"
#include "RCC_interface.h"
#include "LED_interface.h"


void main(void)
{
	RCC_voidSysClkInt();
	RCC_voidEnablePerClk(RCC_APB2, 2);
	LED_voidInit(PORTA, PIN0);
	LED_voidInit(PORTA, PIN1);
	LED_voidInit(PORTA, PIN2);
	STK_voidInit();
	RTOS_CreateTask(0, , func_Task)

}


void task1(void)
{
	LED_voidON(PORTA, PIN0);
}
void task2(void)
{
	LED_voidON(PORTA, PIN1);
}
void task3(void)
{
	LED_voidON(PORTA, PIN2);
}
void task4(void)
{
	LED_voidON(PORTA, PIN2);
}
