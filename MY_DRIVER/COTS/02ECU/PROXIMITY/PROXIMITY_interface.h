/*
 * PROXIMITY_interface.h
 *
 *  Created on: May 12, 2023
 *      Author: es-MohamedHAbdelAziz
 */

#ifndef PROXIMITY_INTERFACE_H_
#define PROXIMITY_INTERFACE_H_

void PROXIMITY_voidInit(u8 PORT, u8 PIN);
u8   PROXIMITY_u8GetValue(u8 PORT, u8 PIN);

#endif /* 02ECU_PROXIMITY_PROXIMITY_INTERFACE_H_ */
