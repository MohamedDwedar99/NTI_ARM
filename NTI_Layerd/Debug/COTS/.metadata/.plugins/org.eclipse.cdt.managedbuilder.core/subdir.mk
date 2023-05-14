################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../COTS/.metadata/.plugins/org.eclipse.cdt.managedbuilder.core/spec.c 

OBJS += \
./COTS/.metadata/.plugins/org.eclipse.cdt.managedbuilder.core/spec.o 

C_DEPS += \
./COTS/.metadata/.plugins/org.eclipse.cdt.managedbuilder.core/spec.d 


# Each subdirectory must supply rules for building sources it contributes
COTS/.metadata/.plugins/org.eclipse.cdt.managedbuilder.core/%.o COTS/.metadata/.plugins/org.eclipse.cdt.managedbuilder.core/%.su COTS/.metadata/.plugins/org.eclipse.cdt.managedbuilder.core/%.cyclo: ../COTS/.metadata/.plugins/org.eclipse.cdt.managedbuilder.core/%.c COTS/.metadata/.plugins/org.eclipse.cdt.managedbuilder.core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I"E:/NTI/STM32/NTI_Layerd/COTS/01 MCAL/01 GPIO" -I"E:/NTI/STM32/NTI_Layerd/COTS/00 LIB" -I"E:/NTI/STM32/NTI_Layerd/COTS/01 MCAL/00 RCC" -I"E:/NTI/STM32/NTI_Layerd/COTS/01 MCAL/02 NVIC" -I"E:/NTI/STM32/NTI_Layerd/COTS/02 ECU/LED" -I"E:/NTI/STM32/NTI_Layerd/COTS/02 ECU/Segment7" -I"E:/NTI/STM32/NTI_Layerd/COTS/01 MCAL/03 EXTI" -I"E:/NTI/STM32/NTI_Layerd/COTS/01 MCAL/05 DMA" -I"E:/NTI/STM32/NTI_Layerd/COTS/01 MCAL/04 STK" -I"E:/NTI/STM32/NTI_Layerd/COTS/01 MCAL/06 ADC" -I"E:/NTI/STM32/NTI_Layerd/Debug/COTS/02 ECU/LED" -I"E:/NTI/STM32/NTI_Layerd/COTS/02 ECU/BUZZER" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-COTS-2f--2e-metadata-2f--2e-plugins-2f-org-2e-eclipse-2e-cdt-2e-managedbuilder-2e-core

clean-COTS-2f--2e-metadata-2f--2e-plugins-2f-org-2e-eclipse-2e-cdt-2e-managedbuilder-2e-core:
	-$(RM) ./COTS/.metadata/.plugins/org.eclipse.cdt.managedbuilder.core/spec.cyclo ./COTS/.metadata/.plugins/org.eclipse.cdt.managedbuilder.core/spec.d ./COTS/.metadata/.plugins/org.eclipse.cdt.managedbuilder.core/spec.o ./COTS/.metadata/.plugins/org.eclipse.cdt.managedbuilder.core/spec.su

.PHONY: clean-COTS-2f--2e-metadata-2f--2e-plugins-2f-org-2e-eclipse-2e-cdt-2e-managedbuilder-2e-core

