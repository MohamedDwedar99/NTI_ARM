#ifndef		RCC_INTERFACE_H
#define		RCC_INTERFACE_H



#define		RCC_AHB				0
#define		RCC_APB1			1
#define		RCC_APB2			2

#define 	SW					(RCC_PLL		<< 0)
#define 	HPRE				(RCC_SYSCLK_1	<< 4)
#define 	PPRE1				(RCC_HCLK		<< 8)
#define 	PPRE2				(RCC_HCLK		<< 11)
#define 	ADCPRE				(RCC_PLCK_2		<< 14)
#define 	PLLSRC			    (RCC_SRC_HSI_D2	<< 16)
#define 	PLLXTPRE			(RCC_HSE_E		<< 17)
#define 	PLLMUL				(RCC_CLK_MUL_16	<< 18)
#define 	USBPRE				(RCC_USB_PLL	<< 22)
#define 	MCO					(RCC_MOC_0		<< 26)

#define HSION		0
#define HSIRDY		1
#define HSEON		16
#define HSERDY		17
#define HSEBYP		18
#define CSSON		19
#define PLLON		24
#define PLLRDY		25

void		RCC_voidSysClkInt(void);
void		RCC_voidEnablePerClk(u8 BusId , u8 PerId);
void		RCC_voidDisablePerClk(u8 BusId , u8 PerId);

#endif
