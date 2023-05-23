################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/RTOS_main.c 

OBJS += \
./Src/RTOS_main.o 

C_DEPS += \
./Src/RTOS_main.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o Src/%.su Src/%.cyclo: ../Src/%.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I"E:/NTI/STM32/NTI_Layerd/COTS/01 MCAL/01 GPIO" -I"E:/NTI/STM32/NTI_Layerd/COTS/00 LIB" -I"E:/NTI/STM32/NTI_Layerd/COTS/01 MCAL/00 RCC" -I"E:/NTI/STM32/NTI_Layerd/COTS/01 MCAL/02 NVIC" -I"E:/NTI/STM32/NTI_Layerd/COTS/02 ECU/LED" -I"E:/NTI/STM32/NTI_Layerd/COTS/02 ECU/Segment7" -I"E:/NTI/STM32/NTI_Layerd/COTS/01 MCAL/03 EXTI" -I"E:/NTI/STM32/NTI_Layerd/COTS/01 MCAL/05 DMA" -I"E:/NTI/STM32/NTI_Layerd/COTS/01 MCAL/04 STK" -I"E:/NTI/STM32/NTI_Layerd/COTS/01 MCAL/06 ADC" -I"E:/NTI/STM32/NTI_Layerd/Debug/COTS/02 ECU/LED" -I"E:/NTI/STM32/NTI_Layerd/COTS/02 ECU/BUZZER" -I"E:/NTI/STM32/NTI_Layerd/COTS/01 MCAL/07 USART" -I"E:/NTI/STM32/NTI_Layerd/COTS/01 MCAL/08 SPI" -I"E:/NTI/STM32/NTI_Layerd/COTS/01 MCAL/09 I2C" -I"E:/NTI/STM32/NTI_Layerd/COTS/02 ECU/DC_MOTOR" -I"E:/NTI/STM32/NTI_Layerd/COTS/RTOS" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Src

clean-Src:
	-$(RM) ./Src/RTOS_main.cyclo ./Src/RTOS_main.d ./Src/RTOS_main.o ./Src/RTOS_main.su

.PHONY: clean-Src

