################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/00\ LIB/Common_function.c 

OBJS += \
./Drivers/00\ LIB/Common_function.o 

C_DEPS += \
./Drivers/00\ LIB/Common_function.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/00\ LIB/Common_function.o: ../Drivers/00\ LIB/Common_function.c Drivers/00\ LIB/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -c -I../Inc -I"E:/embeded learn/Nit embeded arm/NTI_Workspace/Project_st/Drivers/00 LIB" -I"E:/embeded learn/Nit embeded arm/NTI_Workspace/Project_st/Drivers/01 MCAL/00 RCC" -I"E:/embeded learn/Nit embeded arm/NTI_Workspace/Project_st/Drivers/01 MCAL/01 GPIO" -I"E:/embeded learn/Nit embeded arm/NTI_Workspace/Project_st/Drivers/01 MCAL/02 NVIC" -I"E:/embeded learn/Nit embeded arm/NTI_Workspace/Project_st/Drivers/01 MCAL/03 EXTI" -I"E:/embeded learn/Nit embeded arm/NTI_Workspace/Project_st/Drivers/02 ECU/00 LED" -I"E:/embeded learn/Nit embeded arm/NTI_Workspace/Project_st/Drivers/02 ECU/01 Button" -I"E:/embeded learn/Nit embeded arm/NTI_Workspace/Project_st/Drivers/02 ECU/03 Buzzer" -I"E:/embeded learn/Nit embeded arm/NTI_Workspace/Project_st/Drivers/01 MCAL/04 ADC" -I"E:/embeded learn/Nit embeded arm/NTI_Workspace/Project_st/Drivers/01 MCAL/05 STK" -I"E:/embeded learn/Nit embeded arm/NTI_Workspace/Project_st/Drivers/01 MCAL/06 USART" -I"E:/embeded learn/Nit embeded arm/NTI_Workspace/Project_st/Drivers/01 MCAL/07 I2C" -I"E:/embeded learn/Nit embeded arm/NTI_Workspace/Project_st/Drivers/02 ECU/04 BLUETOOTH" -I"E:/embeded learn/Nit embeded arm/NTI_Workspace/Project_st/Drivers/02 ECU/05 Segment7" -I"E:/embeded learn/Nit embeded arm/NTI_Workspace/Project_st/Drivers/03 APP" -I"E:/embeded learn/Nit embeded arm/NTI_Workspace/Project_st/Drivers/01 MCAL/08 SPI" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"Drivers/00 LIB/Common_function.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Drivers-2f-00-20-LIB

clean-Drivers-2f-00-20-LIB:
	-$(RM) ./Drivers/00\ LIB/Common_function.cyclo ./Drivers/00\ LIB/Common_function.d ./Drivers/00\ LIB/Common_function.o ./Drivers/00\ LIB/Common_function.su

.PHONY: clean-Drivers-2f-00-20-LIB

