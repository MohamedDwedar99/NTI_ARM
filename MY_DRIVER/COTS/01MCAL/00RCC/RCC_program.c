/*
 * RCC_program.c
 *
 *  Created on: May 8, 2023
 *      Author: es-MohamedHAbdelAziz
 */

#include "Std_Types.h"
#include "Bit_Math.h"
#include "RCC_config.h"
#include "RCC_interface.h"
#include "RCC_private.h"

#define x 1
#define y 01


void		RCC_voidSysClkInt(void)
{
	// Set Configurations
	RCC -> CFGR |= Sys_Clock      << SW;
	while (RCC -> CFGR != Sys_Clock);
	RCC -> CFGR |= AHB_prescaler  << HPRE;
	RCC -> CFGR |= APB1_prescaler << PPRE1;
	RCC -> CFGR |= APB2_prescaler << PPRE2;
	RCC -> CFGR |= ADC_prescaler  << ADCPRE;
	RCC -> CFGR |= PLL_source     << PLLSRC;
	RCC -> CFGR |= PLL_HSE_Divide << PLLXTPRE;
	RCC -> CFGR |= PLL_MulFactor  << PLLMUL;
	RCC -> CFGR |= USB_prescaler  << USBPRE;
	RCC -> CFGR |= Clock_output   << MCO;
	//RCC -> CFGR = (RCC_CFGR);


#if Sys_Clock_src == HSI_src
	SET_BIT(RCC -> CR, HSION);
	while (!GET_BIT(RCC -> CR, HSIRDY));
#elif Sys_Clock_src == HSE_src
	SET_BIT(RCC -> CR, HSEON);
	while (!GET_BIT(RCC -> CR,HSERDY));
#elif Sys_Clock_src == PLL_HSI_src
	SET_BIT(RCC -> CR, HSIEON);
	while (!GET_BIT(RCC -> CR, HSIRDY));
	SET_BIT(RCC -> CR, PLLON);
	while (!GET_BIT(RCC -> CR, PLLRDY));
#elif Sys_Clock_src == PLL_HSE_src
	SET_BIT(RCC -> CR, HSIEON);
	while (!GET_BIT(RCC -> CR, HSERDY));
	SET_BIT(RCC -> CR, HSEPYB)
	SET_BIT(RCC -> CR, PLLON);
	while (!GET_BIT(RCC -> CR, PLLRDY));
#else
	#error "Error in Choosing Source"
#endif
}



void		RCC_voidEnablePerClk(u8 BusId , u8 PerId)
{
	if (BusId < 32)
	{
		switch (BusId)
		{
		case RCC_AHB:  SET_BIT(RCC->AHBENR,PerId); break;
		case RCC_APB1: SET_BIT(RCC->APB1ENR,PerId); break;
		case RCC_APB2: SET_BIT(RCC->APB2ENR,PerId); break;
		}
	}
	else
	{
		// Do nothing
	}
}
void		RCC_voidDisablePerClk(u8 BusId , u8 PerId)
{
	if (BusId < 32)
	{
		switch (BusId)
		{
		case RCC_AHB:  CLR_BIT(RCC->AHBENR,PerId); break;
		case RCC_APB1: CLR_BIT(RCC->APB1ENR,PerId); break;
		case RCC_APB2: CLR_BIT(RCC->APB2ENR,PerId); break;
		}
	}
	else
	{
		// Do nothing
	}
}








