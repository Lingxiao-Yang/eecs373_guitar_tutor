################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/LVGL/src/hal/lv_hal_disp.c \
../Core/LVGL/src/hal/lv_hal_indev.c \
../Core/LVGL/src/hal/lv_hal_tick.c 

OBJS += \
./Core/LVGL/src/hal/lv_hal_disp.o \
./Core/LVGL/src/hal/lv_hal_indev.o \
./Core/LVGL/src/hal/lv_hal_tick.o 

C_DEPS += \
./Core/LVGL/src/hal/lv_hal_disp.d \
./Core/LVGL/src/hal/lv_hal_indev.d \
./Core/LVGL/src/hal/lv_hal_tick.d 


# Each subdirectory must supply rules for building sources it contributes
Core/LVGL/src/hal/%.o Core/LVGL/src/hal/%.su Core/LVGL/src/hal/%.cyclo: ../Core/LVGL/src/hal/%.c Core/LVGL/src/hal/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L4R5xx -c -I../Core/Inc -I../Drivers/CMSIS/DSP/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/Src" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL/porting" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL/src" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_customer_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/images" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/custom" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-LVGL-2f-src-2f-hal

clean-Core-2f-LVGL-2f-src-2f-hal:
	-$(RM) ./Core/LVGL/src/hal/lv_hal_disp.cyclo ./Core/LVGL/src/hal/lv_hal_disp.d ./Core/LVGL/src/hal/lv_hal_disp.o ./Core/LVGL/src/hal/lv_hal_disp.su ./Core/LVGL/src/hal/lv_hal_indev.cyclo ./Core/LVGL/src/hal/lv_hal_indev.d ./Core/LVGL/src/hal/lv_hal_indev.o ./Core/LVGL/src/hal/lv_hal_indev.su ./Core/LVGL/src/hal/lv_hal_tick.cyclo ./Core/LVGL/src/hal/lv_hal_tick.d ./Core/LVGL/src/hal/lv_hal_tick.o ./Core/LVGL/src/hal/lv_hal_tick.su

.PHONY: clean-Core-2f-LVGL-2f-src-2f-hal

