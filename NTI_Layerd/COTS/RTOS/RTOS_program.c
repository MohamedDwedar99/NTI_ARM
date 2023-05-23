/*
 * RTOS_program.c
 *
 *  Created on: May 22, 2023
 *      Author: es-MohamedHAbdelAziz
 */

#include "Std_Types.h"
#include "Bit_Math.h"
#include "RTOS_interface.h"
task_st new_task[20] ={0};

void RTOS_CreateTask(u8 priority,u16 priodicity,void (*func_Task)(void))
{
	new_task[priority].priodicity = priodicity;
	new_task[priority].func_Task = func_Task;
	new_task[priority].state = passive;
}
void RTOS_Scheduler(u8 priority,task_state state)
{
	new_task[priority].state = state;
}
void RTOS_Start(void)
{
	u8 i = 0;
	while (new_task[i].func_Task != 0 && (new_task[i].state == active )&&i < 20 )
	{
		new_task[i].func_Task();
		STK_voidSetBusyWait(new_task[i].priodicity);
	}
}
