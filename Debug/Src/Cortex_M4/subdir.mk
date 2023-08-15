################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/Cortex_M4/Cortex_M4_Core_NVIC.c 

OBJS += \
./Src/Cortex_M4/Cortex_M4_Core_NVIC.o 

C_DEPS += \
./Src/Cortex_M4/Cortex_M4_Core_NVIC.d 


# Each subdirectory must supply rules for building sources it contributes
Src/Cortex_M4/%.o Src/Cortex_M4/%.su Src/Cortex_M4/%.cyclo: ../Src/Cortex_M4/%.c Src/Cortex_M4/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F407VGTx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-Cortex_M4

clean-Src-2f-Cortex_M4:
	-$(RM) ./Src/Cortex_M4/Cortex_M4_Core_NVIC.cyclo ./Src/Cortex_M4/Cortex_M4_Core_NVIC.d ./Src/Cortex_M4/Cortex_M4_Core_NVIC.o ./Src/Cortex_M4/Cortex_M4_Core_NVIC.su

.PHONY: clean-Src-2f-Cortex_M4

