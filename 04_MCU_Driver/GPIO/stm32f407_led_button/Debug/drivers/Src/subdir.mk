################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drivers/Src/stm32f407xx_gpio.c 

OBJS += \
./drivers/Src/stm32f407xx_gpio.o 

C_DEPS += \
./drivers/Src/stm32f407xx_gpio.d 


# Each subdirectory must supply rules for building sources it contributes
drivers/Src/stm32f407xx_gpio.o: ../drivers/Src/stm32f407xx_gpio.c drivers/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F407G_DISC1 -DSTM32F4 -DSTM32F407VGTx -c -I"/Users/leo/Embedded_C/MCU1/target/stm32f407_drivers_led_button/drivers/Inc" -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"drivers/Src/stm32f407xx_gpio.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

