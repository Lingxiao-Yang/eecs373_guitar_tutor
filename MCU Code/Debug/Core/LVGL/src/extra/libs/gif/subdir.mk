################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/LVGL/src/extra/libs/gif/gifdec.c \
../Core/LVGL/src/extra/libs/gif/lv_gif.c 

OBJS += \
./Core/LVGL/src/extra/libs/gif/gifdec.o \
./Core/LVGL/src/extra/libs/gif/lv_gif.o 

C_DEPS += \
./Core/LVGL/src/extra/libs/gif/gifdec.d \
./Core/LVGL/src/extra/libs/gif/lv_gif.d 


# Each subdirectory must supply rules for building sources it contributes
Core/LVGL/src/extra/libs/gif/%.o Core/LVGL/src/extra/libs/gif/%.su Core/LVGL/src/extra/libs/gif/%.cyclo: ../Core/LVGL/src/extra/libs/gif/%.c Core/LVGL/src/extra/libs/gif/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L4R5xx -c -I../Core/Inc -I../Drivers/CMSIS/DSP/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/Src" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL/porting" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL/src" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_customer_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/images" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/custom" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-LVGL-2f-src-2f-extra-2f-libs-2f-gif

clean-Core-2f-LVGL-2f-src-2f-extra-2f-libs-2f-gif:
	-$(RM) ./Core/LVGL/src/extra/libs/gif/gifdec.cyclo ./Core/LVGL/src/extra/libs/gif/gifdec.d ./Core/LVGL/src/extra/libs/gif/gifdec.o ./Core/LVGL/src/extra/libs/gif/gifdec.su ./Core/LVGL/src/extra/libs/gif/lv_gif.cyclo ./Core/LVGL/src/extra/libs/gif/lv_gif.d ./Core/LVGL/src/extra/libs/gif/lv_gif.o ./Core/LVGL/src/extra/libs/gif/lv_gif.su

.PHONY: clean-Core-2f-LVGL-2f-src-2f-extra-2f-libs-2f-gif

