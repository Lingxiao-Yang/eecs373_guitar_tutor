################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/LVGL/porting/lv_port_disp.c \
../Core/LVGL/porting/lv_port_indev.c 

OBJS += \
./Core/LVGL/porting/lv_port_disp.o \
./Core/LVGL/porting/lv_port_indev.o 

C_DEPS += \
./Core/LVGL/porting/lv_port_disp.d \
./Core/LVGL/porting/lv_port_indev.d 


# Each subdirectory must supply rules for building sources it contributes
Core/LVGL/porting/%.o Core/LVGL/porting/%.su Core/LVGL/porting/%.cyclo: ../Core/LVGL/porting/%.c Core/LVGL/porting/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32L4R5xx -c -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Drivers/CMSIS/DSP/Include" -I../Core/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL/porting" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/Src" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_customer_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/images" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/custom" -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-LVGL-2f-porting

clean-Core-2f-LVGL-2f-porting:
	-$(RM) ./Core/LVGL/porting/lv_port_disp.cyclo ./Core/LVGL/porting/lv_port_disp.d ./Core/LVGL/porting/lv_port_disp.o ./Core/LVGL/porting/lv_port_disp.su ./Core/LVGL/porting/lv_port_indev.cyclo ./Core/LVGL/porting/lv_port_indev.d ./Core/LVGL/porting/lv_port_indev.o ./Core/LVGL/porting/lv_port_indev.su

.PHONY: clean-Core-2f-LVGL-2f-porting

