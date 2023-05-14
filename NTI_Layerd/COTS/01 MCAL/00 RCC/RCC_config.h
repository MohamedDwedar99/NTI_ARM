#ifndef		RCC_CONFIG_H
#define		RCC_CONFIG_H

#define		RCC_SYS_CLK			RCC_HSI		/*Select (RCC_HSI,RCC_HSE,RCC_PLL)*/
#define		RCC_AHB_PRE         RCC_SYSCLK	/*Set RCC_SYSCLK_N   N is from 1 to 16   */
#define		RCC_APB1_PRE		RCC_HCLK
#define		RCC_APB2_PRE		RCC_HCLK
#define     RCC_ADC_PRE         RCC_PLCK_2
#define     RCC_PLL_CLK_Src     RCC_SRC_HSI_D2
#define     RCC_PLL_Entry       RCC_HSE_E
#define     RCC_PLL_MUL         RCC_CLK_MUL_17
#define 	RCC_USB_PRE         RCC_USB_PLL
#define     RCC_MCO_CLK         RCC_MOC_0

#define 	CLK_Sourc			HSI		/*Select (HSI,HSE,PLL_HSI,PLL_HSE)*/
#endif
