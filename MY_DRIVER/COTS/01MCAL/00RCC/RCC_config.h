/*
 * RCC_config.h
 *
 *  Created on: May 8, 2023
 *      Author: es-MohamedHAbdelAziz
 */

#ifndef RCC_CONFIG_H_
#define RCC_CONFIG_H_




#define Sys_Clock_src    HSI_src                     /*choose the clock source of the system
                                                      * 1-HSI_src choose if Sys_clock = HSI
                                                      * 2-HSE_src choose if Sys_clock = HSE
                                                      * 3-PLL_HSI_src choose if Sys_clock = PLL and you want HSI
                                                      * 4-PLL_HSI_src choose if Sys_clock = PLL and you want HSE
                                                      */

#define AHB_prescaler    SYSCLK_2                     /* chose the Prescaller of AHB SYSCLK_x
                                                      * x = (1,2,4,8,16,64,128,256,512)
                                                      */

#define APB1_prescaler   HCLK_2                      /* chose the Prescaller of APB HCLK_x
                                                      * x = (1,2,4,8,16)
                                                      */

#define APB2_prescaler   HCLK_2                      /* chose the Prescaller of APB HCLK_x
                                                      * x = (1,2,4,8,16)
                                                      */

#define ADC_prescaler   PCLK2_8                       /* chose the Prescaller of ADC PCLK2_x
                                                      * x = (1,2,4,8)
                                                      */

#define PLL_source      HSE                           /* chose the entry clock to PLL
                                                      * 1-HSI   note that HSI divided by 2
                                                      * 2-HSE
                                                      */

#define PLL_HSE_Divide  HSE_2                         /* chose if HSE divided by 2 or not
                                                      * 1- HSE_1  not divided
                                                      * 2- HSE_2  divided by 2
                                                      */

#define PLL_MulFactor    PLL_16                       /* chose if PLL_Source multiply with x PLL_x
                                                      * x = (2 to 16)
                                                      */

#define USB_prescaler     PLL_USB1_5                  /* chose USB_PLL clock
                                                      * 1- PLL_USB1
                                                      * 2- PLL_USB1_5
                                                      */

#define Clock_output      CO_SYS                     /* choose if MCU generate clock source
                                                      * 1- CO_N   NO clock
                                                      * 2- CO_SYS
                                                      * 3- CO_HSI
                                                      * 4- CO_HSE
                                                      * 5- CO_PLL (divided by 2)
                                                      */

#endif /* 01MCAL_00RCC_RCC_CONFIG_H_ */
