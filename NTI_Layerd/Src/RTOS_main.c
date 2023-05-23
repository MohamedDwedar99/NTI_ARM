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
#include "DIO_interface.h"
#include "LED_interface.h"
#include "STK_interface.h"
#include "RTOS_interface.h"

void task1(void);
void task2(void);
void task3(void);

int main(void)
{
	RCC_voidSysClkInt();
	RCC_voidEnablePerClk(RCC_APB2, 2);
	LED_voidInit(PORTA, PIN0);
	LED_voidInit(PORTA, PIN1);
	LED_voidInit(PORTA, PIN2);
	STK_voidInit();
	RTOS_CreateTask(0, 3, task1,0);
	RTOS_CreateTask(1, 5, task2,1);
	RTOS_CreateTask(2, 2, task3,2);
	while(1)
	{
		RTOS_Start();
	}
	return 0;
}


void task1(void)
{
	LED_voidToggle(PORTA, PIN0);
}
void task2(void)
{
	LED_voidToggle(PORTA, PIN1);
}
void task3(void)
{
	LED_voidToggle(PORTA, PIN2);
}
