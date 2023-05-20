################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include COTS/02\ ECU/Segment7/subdir.mk
-include COTS/02\ ECU/PROXIMITY/subdir.mk
-include COTS/02\ ECU/LED/subdir.mk
-include COTS/02\ ECU/LCD/subdir.mk
-include COTS/02\ ECU/KEYPAD/subdir.mk
-include COTS/02\ ECU/BUZZER/subdir.mk
-include COTS/01\ MCAL/09\ I2C/subdir.mk
-include COTS/01\ MCAL/08\ SPI/subdir.mk
-include COTS/01\ MCAL/07\ USART/subdir.mk
-include COTS/01\ MCAL/06\ ADC/subdir.mk
-include COTS/01\ MCAL/05\ DMA/subdir.mk
-include COTS/01\ MCAL/04\ STK/subdir.mk
-include COTS/01\ MCAL/03\ EXTI/subdir.mk
-include COTS/01\ MCAL/02\ NVIC/subdir.mk
-include COTS/01\ MCAL/01\ GPIO/subdir.mk
-include COTS/01\ MCAL/00\ RCC/subdir.mk
-include COTS/.metadata/.plugins/org.eclipse.cdt.managedbuilder.core/subdir.mk
-include COTS/.metadata/.plugins/org.eclipse.cdt.make.core/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := NTI_Layerd
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
NTI_Layerd.elf \

MAP_FILES += \
NTI_Layerd.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
NTI_Layerd.list \

OBJCOPY_HEX += \
NTI_Layerd.hex \


# All Target
all: main-build

# Main-build Target
main-build: NTI_Layerd.elf secondary-outputs

# Tool invocations
NTI_Layerd.elf NTI_Layerd.map: $(OBJS) $(USER_OBJS) E:\NTI\STM32\NTI_Layerd\STM32F103C8TX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "NTI_Layerd.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"E:\NTI\STM32\NTI_Layerd\STM32F103C8TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="NTI_Layerd.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

NTI_Layerd.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "NTI_Layerd.list"
	@echo 'Finished building: $@'
	@echo ' '

NTI_Layerd.hex: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "NTI_Layerd.hex"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) NTI_Layerd.elf NTI_Layerd.hex NTI_Layerd.list NTI_Layerd.map default.size.stdout
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
