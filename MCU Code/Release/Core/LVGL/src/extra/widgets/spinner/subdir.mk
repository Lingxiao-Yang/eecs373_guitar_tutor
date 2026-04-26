################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/LVGL/src/extra/widgets/spinner/lv_spinner.c 

OBJS += \
./Core/LVGL/src/extra/widgets/spinner/lv_spinner.o 

C_DEPS += \
./Core/LVGL/src/extra/widgets/spinner/lv_spinner.d 


# Each subdirectory must supply rules for building sources it contributes
Core/LVGL/src/extra/widgets/spinner/%.o Core/LVGL/src/extra/widgets/spinner/%.su Core/LVGL/src/extra/widgets/spinner/%.cyclo: ../Core/LVGL/src/extra/widgets/spinner/%.c Core/LVGL/src/extra/widgets/spinner/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32L4R5xx -c -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Drivers/CMSIS/DSP/Include" -I../Core/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL/porting" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/Src" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_customer_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/images" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/custom" -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-LVGL-2f-src-2f-extra-2f-widgets-2f-spinner

clean-Core-2f-LVGL-2f-src-2f-extra-2f-widgets-2f-spinner:
	-$(RM) ./Core/LVGL/src/extra/widgets/spinner/lv_spinner.cyclo ./Core/LVGL/src/extra/widgets/spinner/lv_spinner.d ./Core/LVGL/src/extra/widgets/spinner/lv_spinner.o ./Core/LVGL/src/extra/widgets/spinner/lv_spinner.su

.PHONY: clean-Core-2f-LVGL-2f-src-2f-extra-2f-widgets-2f-spinner

