################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/FreeRTOS/croutine.c \
/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/FreeRTOS/event_groups.c \
/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/FreeRTOS/list.c \
/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/FreeRTOS/queue.c \
/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/FreeRTOS/stream_buffer.c \
/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/FreeRTOS/tasks.c \
/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/FreeRTOS/timers.c 

OBJS += \
./common/ThirdParty/FreeRTOS/croutine.o \
./common/ThirdParty/FreeRTOS/event_groups.o \
./common/ThirdParty/FreeRTOS/list.o \
./common/ThirdParty/FreeRTOS/queue.o \
./common/ThirdParty/FreeRTOS/stream_buffer.o \
./common/ThirdParty/FreeRTOS/tasks.o \
./common/ThirdParty/FreeRTOS/timers.o 

C_DEPS += \
./common/ThirdParty/FreeRTOS/croutine.d \
./common/ThirdParty/FreeRTOS/event_groups.d \
./common/ThirdParty/FreeRTOS/list.d \
./common/ThirdParty/FreeRTOS/queue.d \
./common/ThirdParty/FreeRTOS/stream_buffer.d \
./common/ThirdParty/FreeRTOS/tasks.d \
./common/ThirdParty/FreeRTOS/timers.d 


# Each subdirectory must supply rules for building sources it contributes
common/ThirdParty/FreeRTOS/croutine.o: /Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/FreeRTOS/croutine.c common/ThirdParty/FreeRTOS/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F407xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/FreeRTOS/include -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/FreeRTOS/portable/GCC/ARM_CM4F -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/SEGGER/Config -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/SEGGER/OS -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/SEGGER/SEGGER -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"common/ThirdParty/FreeRTOS/croutine.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
common/ThirdParty/FreeRTOS/event_groups.o: /Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/FreeRTOS/event_groups.c common/ThirdParty/FreeRTOS/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F407xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/FreeRTOS/include -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/FreeRTOS/portable/GCC/ARM_CM4F -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/SEGGER/Config -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/SEGGER/OS -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/SEGGER/SEGGER -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"common/ThirdParty/FreeRTOS/event_groups.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
common/ThirdParty/FreeRTOS/list.o: /Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/FreeRTOS/list.c common/ThirdParty/FreeRTOS/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F407xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/FreeRTOS/include -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/FreeRTOS/portable/GCC/ARM_CM4F -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/SEGGER/Config -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/SEGGER/OS -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/SEGGER/SEGGER -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"common/ThirdParty/FreeRTOS/list.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
common/ThirdParty/FreeRTOS/queue.o: /Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/FreeRTOS/queue.c common/ThirdParty/FreeRTOS/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F407xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/FreeRTOS/include -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/FreeRTOS/portable/GCC/ARM_CM4F -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/SEGGER/Config -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/SEGGER/OS -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/SEGGER/SEGGER -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"common/ThirdParty/FreeRTOS/queue.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
common/ThirdParty/FreeRTOS/stream_buffer.o: /Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/FreeRTOS/stream_buffer.c common/ThirdParty/FreeRTOS/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F407xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/FreeRTOS/include -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/FreeRTOS/portable/GCC/ARM_CM4F -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/SEGGER/Config -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/SEGGER/OS -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/SEGGER/SEGGER -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"common/ThirdParty/FreeRTOS/stream_buffer.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
common/ThirdParty/FreeRTOS/tasks.o: /Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/FreeRTOS/tasks.c common/ThirdParty/FreeRTOS/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F407xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/FreeRTOS/include -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/FreeRTOS/portable/GCC/ARM_CM4F -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/SEGGER/Config -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/SEGGER/OS -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/SEGGER/SEGGER -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"common/ThirdParty/FreeRTOS/tasks.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
common/ThirdParty/FreeRTOS/timers.o: /Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/FreeRTOS/timers.c common/ThirdParty/FreeRTOS/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F407xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/FreeRTOS/include -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/FreeRTOS/portable/GCC/ARM_CM4F -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/SEGGER/Config -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/SEGGER/OS -I/Users/leo/Embedded_C/MasteringRTOS/RTOS_workspace2/common/ThirdParty/SEGGER/SEGGER -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"common/ThirdParty/FreeRTOS/timers.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

