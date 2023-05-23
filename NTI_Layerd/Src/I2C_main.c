#include	"Std_Types.h"
#include	"Bit_Math.h"
#include    "Delay_interface.h"

#include	"RCC_interface.h"
#include	"GPIO_interface.h"

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
	RCC_voidEnablePerClk(RCC_APB2, 3);
	RCC_voidEnablePerClk(RCC_APB2, 4);
	RCC_voidEnablePerClk(RCC_APB2, 0);
	RCC_voidEnablePerClk(RCC_APB1, 21);
	GPIO_voidSetPinDirection(PORTB, PIN6, GPIO_OUTPUT_10MHZ_AFOD);
	GPIO_voidSetPinDirection(PORTB, PIN7, GPIO_OUTPUT_10MHZ_AFOD);
	GPIO_voidSetPinValue(PORTB, PIN6, GPIO_HIGH);
	GPIO_voidSetPinValue(PORTB, PIN7, GPIO_HIGH);

	GPIO_voidSetPinDirection(PORTB, PIN7, GPIO_OUTPUT_10MHZ_AFOD);
	GPIO_voidSetPinValue(PORTB, PIN7, GPIO_LOW);


	GPIO_voidSetPinDirection(PORTB, PIN6, GPIO_OUTPUT_10MHZ_AFOD);
	GPIO_voidSetPinValue(PORTB, PIN6, GPIO_LOW);

	GPIO_voidSetPinDirection(PORTB, PIN7, GPIO_OUTPUT_10MHZ_AFOD);
	GPIO_voidSetPinValue(PORTB, PIN7, GPIO_HIGH);

	GPIO_voidSetPinDirection(PORTB, PIN6, GPIO_OUTPUT_10MHZ_AFOD);
	GPIO_voidSetPinValue(PORTB, PIN6, GPIO_HIGH);

	GPIO_voidSetPinValue(PORTB, PIN7, GPIO_LOW);
	GPIO_voidSetPinValue(PORTB, PIN6, GPIO_LOW);

	I2C1_voidMasterInit();
	// write A to eeprom
	_delay_ms(5);
	I2C1_voidStart();
	_delay_ms(5);
	I2C1_voidSendAddress(0b10100100);
	_delay_ms(5);
	I2C1_voidSendData(0b1);
	_delay_ms(5);
	I2C1_voidSendData('A');
	_delay_ms(5);
	I2C1_voidStop();
	_delay_ms(5);
	I2C1_voidStart();
	_delay_ms(5);
	I2C1_voidSendAddress(0b10100100);
	_delay_ms(5);
	I2C1_voidSendData(2);
	_delay_ms(5);
	I2C1_voidSendData('B');
	_delay_ms(5);
	I2C1_voidStop();
	_delay_ms(5);
	int readI2C = '\0';
	while (1)
	{
		//read from eeprom
		I2C1_voidStart();
		_delay_ms(5);
		I2C1_voidSendAddress(0b10100100);
		_delay_ms(5);
		I2C1_voidSendData(0b1);
		_delay_ms(5);
		I2C1_voidStart();
		_delay_ms(5);
		I2C1_voidSendAddress(0b10100100+1);
		readI2C = I2C1_voidRecieveData();
		I2C1_voidStop();
		_delay_ms(5);
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







