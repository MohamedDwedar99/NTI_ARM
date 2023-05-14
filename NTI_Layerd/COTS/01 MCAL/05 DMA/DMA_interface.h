/*
 * DMA_config.h
 *
 *  Created on: May 13, 2023
 *      Author: es-MohamedHAbdelAziz
 */

#ifndef DMA_INTERFACE_H_
#define DMA_INTERFACE_H_


#define DMA_Channel1               0
#define DMA_Channel2               1
#define DMA_Channel3               2
#define DMA_Channel4               3
#define DMA_Channel5               4
#define DMA_Channel6               5
#define DMA_Channel7               6

#define DMA_Memory                 0
#define DMA_Peripheral             1

#define DMA_VERYHIGH               4
#define DMA_HIGH                   2
#define DMA_MIDEUM                 1
#define DMA_LOW                    0

#define SIZE_8BIT                  0
#define SIZE_16BIT                 1
#define SIZE_32BIT                 2

void	DMA1_voidChannelInit(u8 Channel_copy,u8 source,u8 sink);
void	DMA1_voidStartChannel(u32 * SrcAdd,u32 * DestAdd,u16 BlockLength);

#endif /* 01_MCAL_05_DMA_DMA_CONFIG_H_ */
