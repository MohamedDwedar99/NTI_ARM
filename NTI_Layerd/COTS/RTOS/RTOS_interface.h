/*
 * RTOS_interface.h
 *
 *  Created on: May 22, 2023
 *      Author: es-MohamedHAbdelAziz
 */

#ifndef RTOS_RTOS_INTERFACE_H_
#define RTOS_RTOS_INTERFACE_H_


typedef struct {
	u16 priodicity;
	void (*func_Task)(void);
	u8 state;
}task_st;

typedef enum {
	passive,
	active
}task_state;

void RTOS_CreateTask(u8 priority,u16 priodicity,void (*func_Task)(void));
void RTOS_Scheduler(u8 task_prioity,u8 state);
void RTOS_Start(void);
#endif /* RTOS_RTOS_INTERFACE_H_ */
