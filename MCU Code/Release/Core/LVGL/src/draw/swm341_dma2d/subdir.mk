################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/LVGL/src/draw/swm341_dma2d/lv_gpu_swm341_dma2d.c 

OBJS += \
./Core/LVGL/src/draw/swm341_dma2d/lv_gpu_swm341_dma2d.o 

C_DEPS += \
./Core/LVGL/src/draw/swm341_dma2d/lv_gpu_swm341_dma2d.d 


# Each subdirectory must supply rules for building sources it contributes
Core/LVGL/src/draw/swm341_dma2d/%.o Core/LVGL/src/draw/swm341_dma2d/%.su Core/LVGL/src/draw/swm341_dma2d/%.cyclo: ../Core/LVGL/src/draw/swm341_dma2d/%.c Core/LVGL/src/draw/swm341_dma2d/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32L4R5xx -c -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Drivers/CMSIS/DSP/Include" -I../Core/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL/porting" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/Src" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_customer_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/images" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/custom" -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-LVGL-2f-src-2f-draw-2f-swm341_dma2d

clean-Core-2f-LVGL-2f-src-2f-draw-2f-swm341_dma2d:
	-$(RM) ./Core/LVGL/src/draw/swm341_dma2d/lv_gpu_swm341_dma2d.cyclo ./Core/LVGL/src/draw/swm341_dma2d/lv_gpu_swm341_dma2d.d ./Core/LVGL/src/draw/swm341_dma2d/lv_gpu_swm341_dma2d.o ./Core/LVGL/src/draw/swm341_dma2d/lv_gpu_swm341_dma2d.su

.PHONY: clean-Core-2f-LVGL-2f-src-2f-draw-2f-swm341_dma2d

