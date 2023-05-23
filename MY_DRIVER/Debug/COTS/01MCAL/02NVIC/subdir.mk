################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../COTS/01MCAL/02NVIC/NVIC_program.c 

OBJS += \
./COTS/01MCAL/02NVIC/NVIC_program.o 

C_DEPS += \
./COTS/01MCAL/02NVIC/NVIC_program.d 


# Each subdirectory must supply rules for building sources it contributes
COTS/01MCAL/02NVIC/%.o COTS/01MCAL/02NVIC/%.su COTS/01MCAL/02NVIC/%.cyclo: ../COTS/01MCAL/02NVIC/%.c COTS/01MCAL/02NVIC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I../Inc -I"E:/NTI/STM32/MY_DRIVER/COTS/00LIB" -I"E:/NTI/STM32/MY_DRIVER/COTS/01MCAL/00RCC" -I"E:/NTI/STM32/MY_DRIVER/COTS/01MCAL/01GPIO" -I"E:/NTI/STM32/MY_DRIVER/COTS/02ECU/BUZZER" -I"E:/NTI/STM32/MY_DRIVER/COTS/02ECU/LED" -I"E:/NTI/STM32/MY_DRIVER/COTS/02ECU/Segment7" -I"E:/NTI/STM32/MY_DRIVER/COTS/01MCAL/Delay" -I"E:/NTI/STM32/MY_DRIVER/COTS/02ECU/LCD" -I"E:/NTI/STM32/MY_DRIVER/COTS/02ECU/KEYPAD" -I"E:/NTI/STM32/MY_DRIVER/COTS/02ECU/PROXIMITY" -I"E:/NTI/STM32/MY_DRIVER/COTS/01MCAL/02NVIC" -I"E:/NTI/STM32/MY_DRIVER/COTS/01MCAL/09 I2C" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-COTS-2f-01MCAL-2f-02NVIC

clean-COTS-2f-01MCAL-2f-02NVIC:
	-$(RM) ./COTS/01MCAL/02NVIC/NVIC_program.cyclo ./COTS/01MCAL/02NVIC/NVIC_program.d ./COTS/01MCAL/02NVIC/NVIC_program.o ./COTS/01MCAL/02NVIC/NVIC_program.su

.PHONY: clean-COTS-2f-01MCAL-2f-02NVIC

