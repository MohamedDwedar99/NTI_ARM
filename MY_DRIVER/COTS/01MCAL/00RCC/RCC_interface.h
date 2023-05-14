/*
 * RCC_interface.h
 *
 *  Created on: May 8, 2023
 *      Author: es-MohamedHAbdelAziz
 */

#ifndef RCC_INTERFACE_H_
#define RCC_INTERFACE_H_

// Clock configuration Register
#define SW         0
#define SWS        2
#define HPRE       4
#define PPRE1      8
#define PPRE2      11
#define ADCPRE     14
#define PLLSRC     16
#define PLLXTPRE   17
#define PLLMUL     18
#define USBPRE     22
#define MCO        24
// BUS  macros for register
#define RCC_AHB        0
#define RCC_APB1       1
#define RCC_APB2       2
// AHB Enable & Disable Register
#define RCC_DMA1       0
#define RCC_DMA2       1
#define RCC_SRAM       2
#define RCC_FLITF      4
#define RCC_CRC        6
#define RCC_FSMC       8
#define RCC_SDIO      10

// APB2 Enable & Disable Register
#define RCC_AFIO       0
#define RCC_IOPA       2
#define RCC_IOPB       3
#define RCC_IOPC       4
#define RCC_IOPD       5
#define RCC_IOPE       6
#define RCC_IOPF       7
#define RCC_IOPG       8
#define RCC_ADC1       9
#define RCC_ADC2       10
#define RCC_TIM1       11
#define RCC_SPI1       12
#define RCC_TIM8       13
#define RCC_USART1     14
#define RCC_ADC3       15
#define RCC_TIM9       19
#define RCC_TIM10      20
#define RCC_TIM11      21

//APB2 Enable & Disable Register
#define RCC_TIM2        0
#define RCC_TIM3        1
#define RCC_TIM4        2
#define RCC_TIM5        3
#define RCC_TIM6        4
#define RCC_TIM7        5
#define RCC_TIM12       6
#define RCC_TIM13       7
#define RCC_TIM14       8
#define RCC_WWDG        11
#define RCC_SPI2        14
#define RCC_SPI3        15
#define RCC_USART2      17
#define RCC_USART3      18
#define RCC_USART4      19
#define RCC_USART5      20
#define RCC_I2C1        21
#define RCC_I2C2        22
#define RCC_USB         23
#define RCC_CAN         25
#define RCC_BKP         27
#define RCC_PWR         28
#define RCC_DAC         29



void		RCC_voidSysClkInt(void);

// for peripheral clock
void		RCC_voidEnablePerClk(u8 BusId , u8 PerId);
// for peripheral clock
void		RCC_voidDisablePerClk(u8 BusId , u8 PerId);

#endif /* 01MCAL_00RCC_RCC_INTERFACE_H_ */
