/*
 * SPI_interface.h
 *
 *  Created on: May 18, 2023
 *      Author: es-MohamedHAbdelAziz
 */

#ifndef SPI_INTERFACE_H_
#define SPI_INTERFACE_H_

void SPI1_voidInit(void);
void SPI_voidMasterSend(u8 data);
u8   SPI_voidMasterRecieve(void);
#endif /* 01_MCAL_08_SPI_SPI_INTERFACE_H_ */
