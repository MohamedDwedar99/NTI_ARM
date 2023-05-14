#include	"Std_Types.h"
#include	"Bit_Math.h"
#include    "Delay_interface.h"

#include	"RCC_interface.h"
#include	"DIO_interface.h"

#include	"NVIC_interface.h"
#include    "EXTI_interface.h"

#include    "LED_interface.h"
#include    "BUZZER_interface.h"

typedef enum
{
	LEVEL_OK,
	LEVEL_LOW,
	LEVEL_HIGH
}Level_st;


int main(void)
{
	RCC_voidSysClkInt();
	RCC_voidEnablePerClk(RCC_APB2, 2);
	RCC_voidEnablePerClk(RCC_APB2, 3);
	RCC_voidEnablePerClk(RCC_APB2, 4);
	RCC_voidEnablePerClk(RCC_APB2, 9);
	DIO_voidSetPinDirection(PORTA, PIN0, GPIO_INPUT_PULL_UP_DOWN);
	DIO_voidSetPinValue(PORTA, PIN0, GPIO_LOW);
	DIO_voidSetPinDirection(PORTA, PIN1, GPIO_INPUT_PULL_UP_DOWN);
	DIO_voidSetPinValue(PORTA, PIN1, GPIO_LOW);
	DIO_voidSetPinDirection(PORTA, PIN2, GPIO_INPUT_PULL_UP_DOWN);
	DIO_voidSetPinValue(PORTA, PIN2, GPIO_LOW);
	DIO_voidSetPinDirection(PORTA, PIN3, GPIO_INPUT_PULL_UP_DOWN);
	DIO_voidSetPinValue(PORTA, PIN3, GPIO_LOW);
	LED_voidInit(PORTB, PIN0);
	LED_voidInit(PORTB, PIN1);
	LED_voidInit(PORTB, PIN5);
	LED_voidInit(PORTC, PIN13);
	BUZZER_voidInit(PORTC, PIN14);
	while (1)
	{
		Level_st Level = LEVEL_OK;
		u8 LEVEL1 = DIO_u8GetPinValue(PORTA,PIN0);
		u8 LEVEL2 = DIO_u8GetPinValue(PORTA,PIN1);
		u8 LEVEL3 = DIO_u8GetPinValue(PORTA,PIN2);
		u8 LEVEL4 = DIO_u8GetPinValue(PORTA,PIN3);
		if (LEVEL1 == 0)
		{
			// DO nothing
			Level = LEVEL_LOW;
			LED_voidOFF(PORTB, PIN0);
			LED_voidOFF(PORTB, PIN1);
			LED_voidOFF(PORTB, PIN5);
			LED_voidOFF(PORTC, PIN13);
		}
		else if (LEVEL4 == 1)
		{
			Level = LEVEL_HIGH;
			LED_voidON(PORTB, PIN0);
			LED_voidON(PORTB, PIN1);
			LED_voidON(PORTB, PIN5);
			LED_voidON(PORTC, PIN13);
		}
		else if (LEVEL3 == 1)
		{
			Level = LEVEL_OK;
			LED_voidON(PORTB, PIN0);
			LED_voidON(PORTB, PIN1);
			LED_voidON(PORTB, PIN5);
			LED_voidOFF(PORTC, PIN13);
		}
		else if (LEVEL2 == 1)
		{
			Level = LEVEL_OK;
			LED_voidON(PORTB, PIN0);
			LED_voidON(PORTB, PIN1);
			LED_voidOFF(PORTB, PIN5);
			LED_voidOFF(PORTC, PIN13);
		}
		else if (LEVEL1 == 1)
		{
			Level = LEVEL_OK;
			LED_voidON(PORTB, PIN0);
			LED_voidOFF(PORTB, PIN1);
			LED_voidOFF(PORTB, PIN5);
			LED_voidOFF(PORTC, PIN13);
		}
		if (Level == LEVEL_OK)
		{
			BUZZER_voidOFF(PORTC, PIN14);
		}
		else if (Level == LEVEL_LOW)
		{
			BUZZER_voidON(PORTC, PIN14);
			_delay_ms(500);
			BUZZER_voidOFF(PORTC, PIN14);
			_delay_ms(500);

		}
		else if (Level == LEVEL_HIGH)
		{
			BUZZER_voidON(PORTC, PIN14);
		}


	}
}
