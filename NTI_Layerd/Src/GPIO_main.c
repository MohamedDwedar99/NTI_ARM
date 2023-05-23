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

int main (void)
{
    RCC_voidSysClkInt();
    RCC_voidEnablePerClk(RCC_APB2, 2);
    DIO_voidSetPinDirection(PORTA, PIN0, GPIO_OUTPUT_10MHZ_PP);
	while (1)
	{
		DIO_voidSetPinValue(PORTA,PIN0, GPIO_HIGH);
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







