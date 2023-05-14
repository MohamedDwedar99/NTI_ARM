/*
 * NVIC_private.h
 *
 *  Created on: May 12, 2023
 *      Author: es-MohamedHAbdelAziz
 */

#ifndef NVIC_PRIVATE_H_
#define NVIC_PRIVATE_H_


#define			NVIC_BASE_ADD			0xE000E100

typedef struct {
	u32 ISER0;
	u32 ISER1;
	u32 ISER2;
	u32 reserved1[30];
	u32 ICER0;
	u32 ICER1;
	u32 ICER2;
	u32 reserved2[30];
	u32 ISPR0;
	u32 ISPR1;
	u32 ISPR2;
	u32 reserved3[30];
	u32 ICPR0;
	u32 ICPR1;
	u32 ICPR2;
	u32 reserved4[30];
	u32 IABR0;
	u32 IABR1;
	u32 IABR2;
	u32 reserved5[62];
    u8  IPR[80];
	u32 reserved6[696];
	u32 STIR;
}NVIC_type;


#define NVIC         ((volatile  NVIC_type *)(NVIC_BASE_ADD))

#define			GRB_16_SUB_00			(0x05FA0300)
#define			GRB_08_SUB_02			(0x05FA0400)
#define			GRB_04_SUB_04			(0x05FA0500)
#define			GRB_02_SUB_08			(0x05FA0600)
#define			GRB_00_SUB_16			(0x05FA0700)

#endif /* 01MCAL_02NVIC_NVIC_PRIVATE_H_ */
