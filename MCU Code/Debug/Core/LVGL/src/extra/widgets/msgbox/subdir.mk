################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/LVGL/src/extra/widgets/msgbox/lv_msgbox.c 

OBJS += \
./Core/LVGL/src/extra/widgets/msgbox/lv_msgbox.o 

C_DEPS += \
./Core/LVGL/src/extra/widgets/msgbox/lv_msgbox.d 


# Each subdirectory must supply rules for building sources it contributes
Core/LVGL/src/extra/widgets/msgbox/%.o Core/LVGL/src/extra/widgets/msgbox/%.su Core/LVGL/src/extra/widgets/msgbox/%.cyclo: ../Core/LVGL/src/extra/widgets/msgbox/%.c Core/LVGL/src/extra/widgets/msgbox/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L4R5xx -c -I../Core/Inc -I../Drivers/CMSIS/DSP/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/Src" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL/porting" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL/src" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_customer_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/images" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/custom" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-LVGL-2f-src-2f-extra-2f-widgets-2f-msgbox

clean-Core-2f-LVGL-2f-src-2f-extra-2f-widgets-2f-msgbox:
	-$(RM) ./Core/LVGL/src/extra/widgets/msgbox/lv_msgbox.cyclo ./Core/LVGL/src/extra/widgets/msgbox/lv_msgbox.d ./Core/LVGL/src/extra/widgets/msgbox/lv_msgbox.o ./Core/LVGL/src/extra/widgets/msgbox/lv_msgbox.su

.PHONY: clean-Core-2f-LVGL-2f-src-2f-extra-2f-widgets-2f-msgbox

