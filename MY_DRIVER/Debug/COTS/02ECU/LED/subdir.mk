################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../COTS/02ECU/LED/LED_program.c 

OBJS += \
./COTS/02ECU/LED/LED_program.o 

C_DEPS += \
./COTS/02ECU/LED/LED_program.d 


# Each subdirectory must supply rules for building sources it contributes
COTS/02ECU/LED/%.o COTS/02ECU/LED/%.su COTS/02ECU/LED/%.cyclo: ../COTS/02ECU/LED/%.c COTS/02ECU/LED/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I../Inc -I"E:/NTI/STM32/MY_DRIVER/COTS/00LIB" -I"E:/NTI/STM32/MY_DRIVER/COTS/01MCAL/00RCC" -I"E:/NTI/STM32/MY_DRIVER/COTS/01MCAL/01GPIO" -I"E:/NTI/STM32/MY_DRIVER/COTS/02ECU/BUZZER" -I"E:/NTI/STM32/MY_DRIVER/COTS/02ECU/LED" -I"E:/NTI/STM32/MY_DRIVER/COTS/02ECU/Segment7" -I"E:/NTI/STM32/MY_DRIVER/COTS/01MCAL/Delay" -I"E:/NTI/STM32/MY_DRIVER/COTS/02ECU/LCD" -I"E:/NTI/STM32/MY_DRIVER/COTS/02ECU/KEYPAD" -I"E:/NTI/STM32/MY_DRIVER/COTS/02ECU/PROXIMITY" -I"E:/NTI/STM32/MY_DRIVER/COTS/01MCAL/02NVIC" -I"E:/NTI/STM32/MY_DRIVER/COTS/01MCAL/09 I2C" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-COTS-2f-02ECU-2f-LED

clean-COTS-2f-02ECU-2f-LED:
	-$(RM) ./COTS/02ECU/LED/LED_program.cyclo ./COTS/02ECU/LED/LED_program.d ./COTS/02ECU/LED/LED_program.o ./COTS/02ECU/LED/LED_program.su

.PHONY: clean-COTS-2f-02ECU-2f-LED

