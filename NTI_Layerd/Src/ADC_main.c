#include	"Std_Types.h"
#include	"Bit_Math.h"
#include    "Delay_interface.h"

#include	"RCC_interface.h"
#include	"DIO_interface.h"

#include	"NVIC_interface.h"
#include    "EXTI_interface.h"
#include    "USART_interface.h"
#include    "LED_interface.h"
#include    "SPI_interface.h"
#include    "I2C_Interface.h"
#include    "ADC_interface.h"

int main (void)
{
	RCC_voidSysClkInt();
	RCC_voidEnablePerClk(RCC_APB2, 9); // enable ADC1 clock
	RCC_voidEnablePerClk(RCC_APB2, 2);  // enable GPIOA clock
	DIO_voidSetPinDirection(PORTA, PIN0, GPIO_INPUT_FLOAT);
	ADC_voidInit();
	u32 x = 0;
	while (1)
	{
		x = ADC_u16_read(0);
		asm("NOP");
	}
	return 1;
}

//void	EXTI0_IRQHandler(void)
//{
//	//EXTI0_CallBack();
//	/*		Led On		*/
//			DIO_voidSetPinValue(PORTA,PIN1,GPIO_HIGH);
//			_delay_ms(1000);
//			/*		Led Off		*/
//			DIO_voidSetPinValue(PORTA,PIN1,GPIO_LOW);
//			_delay_ms(1000);
//	/*	Clear EXTI0 Flag	*/
//	//SET_BIT(EXTI -> PR,0);
//}







