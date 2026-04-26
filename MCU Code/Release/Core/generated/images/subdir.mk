################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/generated/images/_Awesome_alpha_100x100.c \
../Core/generated/images/_Awful_alpha_100x100.c \
../Core/generated/images/_Good_alpha_100x100.c \
../Core/generated/images/_guitar_sized_alpha_480x320.c 

OBJS += \
./Core/generated/images/_Awesome_alpha_100x100.o \
./Core/generated/images/_Awful_alpha_100x100.o \
./Core/generated/images/_Good_alpha_100x100.o \
./Core/generated/images/_guitar_sized_alpha_480x320.o 

C_DEPS += \
./Core/generated/images/_Awesome_alpha_100x100.d \
./Core/generated/images/_Awful_alpha_100x100.d \
./Core/generated/images/_Good_alpha_100x100.d \
./Core/generated/images/_guitar_sized_alpha_480x320.d 


# Each subdirectory must supply rules for building sources it contributes
Core/generated/images/%.o Core/generated/images/%.su Core/generated/images/%.cyclo: ../Core/generated/images/%.c Core/generated/images/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32L4R5xx -c -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Drivers/CMSIS/DSP/Include" -I../Core/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL/porting" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/Src" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_customer_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/images" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/custom" -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-generated-2f-images

clean-Core-2f-generated-2f-images:
	-$(RM) ./Core/generated/images/_Awesome_alpha_100x100.cyclo ./Core/generated/images/_Awesome_alpha_100x100.d ./Core/generated/images/_Awesome_alpha_100x100.o ./Core/generated/images/_Awesome_alpha_100x100.su ./Core/generated/images/_Awful_alpha_100x100.cyclo ./Core/generated/images/_Awful_alpha_100x100.d ./Core/generated/images/_Awful_alpha_100x100.o ./Core/generated/images/_Awful_alpha_100x100.su ./Core/generated/images/_Good_alpha_100x100.cyclo ./Core/generated/images/_Good_alpha_100x100.d ./Core/generated/images/_Good_alpha_100x100.o ./Core/generated/images/_Good_alpha_100x100.su ./Core/generated/images/_guitar_sized_alpha_480x320.cyclo ./Core/generated/images/_guitar_sized_alpha_480x320.d ./Core/generated/images/_guitar_sized_alpha_480x320.o ./Core/generated/images/_guitar_sized_alpha_480x320.su

.PHONY: clean-Core-2f-generated-2f-images

