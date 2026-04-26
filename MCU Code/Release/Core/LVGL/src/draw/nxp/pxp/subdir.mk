################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/LVGL/src/draw/nxp/pxp/lv_draw_pxp.c \
../Core/LVGL/src/draw/nxp/pxp/lv_draw_pxp_blend.c \
../Core/LVGL/src/draw/nxp/pxp/lv_gpu_nxp_pxp.c \
../Core/LVGL/src/draw/nxp/pxp/lv_gpu_nxp_pxp_osa.c 

OBJS += \
./Core/LVGL/src/draw/nxp/pxp/lv_draw_pxp.o \
./Core/LVGL/src/draw/nxp/pxp/lv_draw_pxp_blend.o \
./Core/LVGL/src/draw/nxp/pxp/lv_gpu_nxp_pxp.o \
./Core/LVGL/src/draw/nxp/pxp/lv_gpu_nxp_pxp_osa.o 

C_DEPS += \
./Core/LVGL/src/draw/nxp/pxp/lv_draw_pxp.d \
./Core/LVGL/src/draw/nxp/pxp/lv_draw_pxp_blend.d \
./Core/LVGL/src/draw/nxp/pxp/lv_gpu_nxp_pxp.d \
./Core/LVGL/src/draw/nxp/pxp/lv_gpu_nxp_pxp_osa.d 


# Each subdirectory must supply rules for building sources it contributes
Core/LVGL/src/draw/nxp/pxp/%.o Core/LVGL/src/draw/nxp/pxp/%.su Core/LVGL/src/draw/nxp/pxp/%.cyclo: ../Core/LVGL/src/draw/nxp/pxp/%.c Core/LVGL/src/draw/nxp/pxp/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32L4R5xx -c -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Drivers/CMSIS/DSP/Include" -I../Core/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL/porting" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/Src" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_customer_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/images" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/custom" -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-LVGL-2f-src-2f-draw-2f-nxp-2f-pxp

clean-Core-2f-LVGL-2f-src-2f-draw-2f-nxp-2f-pxp:
	-$(RM) ./Core/LVGL/src/draw/nxp/pxp/lv_draw_pxp.cyclo ./Core/LVGL/src/draw/nxp/pxp/lv_draw_pxp.d ./Core/LVGL/src/draw/nxp/pxp/lv_draw_pxp.o ./Core/LVGL/src/draw/nxp/pxp/lv_draw_pxp.su ./Core/LVGL/src/draw/nxp/pxp/lv_draw_pxp_blend.cyclo ./Core/LVGL/src/draw/nxp/pxp/lv_draw_pxp_blend.d ./Core/LVGL/src/draw/nxp/pxp/lv_draw_pxp_blend.o ./Core/LVGL/src/draw/nxp/pxp/lv_draw_pxp_blend.su ./Core/LVGL/src/draw/nxp/pxp/lv_gpu_nxp_pxp.cyclo ./Core/LVGL/src/draw/nxp/pxp/lv_gpu_nxp_pxp.d ./Core/LVGL/src/draw/nxp/pxp/lv_gpu_nxp_pxp.o ./Core/LVGL/src/draw/nxp/pxp/lv_gpu_nxp_pxp.su ./Core/LVGL/src/draw/nxp/pxp/lv_gpu_nxp_pxp_osa.cyclo ./Core/LVGL/src/draw/nxp/pxp/lv_gpu_nxp_pxp_osa.d ./Core/LVGL/src/draw/nxp/pxp/lv_gpu_nxp_pxp_osa.o ./Core/LVGL/src/draw/nxp/pxp/lv_gpu_nxp_pxp_osa.su

.PHONY: clean-Core-2f-LVGL-2f-src-2f-draw-2f-nxp-2f-pxp

