################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../COTS/01\ MCAL/08\ SPI/SPI_program.c 

OBJS += \
./COTS/01\ MCAL/08\ SPI/SPI_program.o 

C_DEPS += \
./COTS/01\ MCAL/08\ SPI/SPI_program.d 


# Each subdirectory must supply rules for building sources it contributes
COTS/01\ MCAL/08\ SPI/SPI_program.o: ../COTS/01\ MCAL/08\ SPI/SPI_program.c COTS/01\ MCAL/08\ SPI/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I"E:/NTI/STM32/NTI_Layerd/COTS/01 MCAL/01 GPIO" -I"E:/NTI/STM32/NTI_Layerd/COTS/00 LIB" -I"E:/NTI/STM32/NTI_Layerd/COTS/01 MCAL/00 RCC" -I"E:/NTI/STM32/NTI_Layerd/COTS/01 MCAL/02 NVIC" -I"E:/NTI/STM32/NTI_Layerd/COTS/02 ECU/LED" -I"E:/NTI/STM32/NTI_Layerd/COTS/02 ECU/Segment7" -I"E:/NTI/STM32/NTI_Layerd/COTS/01 MCAL/03 EXTI" -I"E:/NTI/STM32/NTI_Layerd/COTS/01 MCAL/05 DMA" -I"E:/NTI/STM32/NTI_Layerd/COTS/01 MCAL/04 STK" -I"E:/NTI/STM32/NTI_Layerd/COTS/01 MCAL/06 ADC" -I"E:/NTI/STM32/NTI_Layerd/Debug/COTS/02 ECU/LED" -I"E:/NTI/STM32/NTI_Layerd/COTS/02 ECU/BUZZER" -I"E:/NTI/STM32/NTI_Layerd/COTS/01 MCAL/07 USART" -I"E:/NTI/STM32/NTI_Layerd/COTS/01 MCAL/08 SPI" -I"E:/NTI/STM32/NTI_Layerd/COTS/01 MCAL/09 I2C" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"COTS/01 MCAL/08 SPI/SPI_program.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-COTS-2f-01-20-MCAL-2f-08-20-SPI

clean-COTS-2f-01-20-MCAL-2f-08-20-SPI:
	-$(RM) ./COTS/01\ MCAL/08\ SPI/SPI_program.cyclo ./COTS/01\ MCAL/08\ SPI/SPI_program.d ./COTS/01\ MCAL/08\ SPI/SPI_program.o ./COTS/01\ MCAL/08\ SPI/SPI_program.su

.PHONY: clean-COTS-2f-01-20-MCAL-2f-08-20-SPI
