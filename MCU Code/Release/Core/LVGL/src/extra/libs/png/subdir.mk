################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/LVGL/src/extra/libs/png/lodepng.c \
../Core/LVGL/src/extra/libs/png/lv_png.c 

OBJS += \
./Core/LVGL/src/extra/libs/png/lodepng.o \
./Core/LVGL/src/extra/libs/png/lv_png.o 

C_DEPS += \
./Core/LVGL/src/extra/libs/png/lodepng.d \
./Core/LVGL/src/extra/libs/png/lv_png.d 


# Each subdirectory must supply rules for building sources it contributes
Core/LVGL/src/extra/libs/png/%.o Core/LVGL/src/extra/libs/png/%.su Core/LVGL/src/extra/libs/png/%.cyclo: ../Core/LVGL/src/extra/libs/png/%.c Core/LVGL/src/extra/libs/png/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32L4R5xx -c -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Drivers/CMSIS/DSP/Include" -I../Core/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL/porting" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/Src" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_customer_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/images" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/custom" -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-LVGL-2f-src-2f-extra-2f-libs-2f-png

clean-Core-2f-LVGL-2f-src-2f-extra-2f-libs-2f-png:
	-$(RM) ./Core/LVGL/src/extra/libs/png/lodepng.cyclo ./Core/LVGL/src/extra/libs/png/lodepng.d ./Core/LVGL/src/extra/libs/png/lodepng.o ./Core/LVGL/src/extra/libs/png/lodepng.su ./Core/LVGL/src/extra/libs/png/lv_png.cyclo ./Core/LVGL/src/extra/libs/png/lv_png.d ./Core/LVGL/src/extra/libs/png/lv_png.o ./Core/LVGL/src/extra/libs/png/lv_png.su

.PHONY: clean-Core-2f-LVGL-2f-src-2f-extra-2f-libs-2f-png

