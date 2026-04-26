################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/LVGL/src/draw/nema_gfx/lv_draw_nema_gfx.c \
../Core/LVGL/src/draw/nema_gfx/lv_draw_nema_gfx_img.c \
../Core/LVGL/src/draw/nema_gfx/lv_draw_nema_gfx_letter.c 

OBJS += \
./Core/LVGL/src/draw/nema_gfx/lv_draw_nema_gfx.o \
./Core/LVGL/src/draw/nema_gfx/lv_draw_nema_gfx_img.o \
./Core/LVGL/src/draw/nema_gfx/lv_draw_nema_gfx_letter.o 

C_DEPS += \
./Core/LVGL/src/draw/nema_gfx/lv_draw_nema_gfx.d \
./Core/LVGL/src/draw/nema_gfx/lv_draw_nema_gfx_img.d \
./Core/LVGL/src/draw/nema_gfx/lv_draw_nema_gfx_letter.d 


# Each subdirectory must supply rules for building sources it contributes
Core/LVGL/src/draw/nema_gfx/%.o Core/LVGL/src/draw/nema_gfx/%.su Core/LVGL/src/draw/nema_gfx/%.cyclo: ../Core/LVGL/src/draw/nema_gfx/%.c Core/LVGL/src/draw/nema_gfx/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L4R5xx -c -I../Core/Inc -I../Drivers/CMSIS/DSP/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/Src" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL/porting" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL/src" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_customer_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/images" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/custom" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-LVGL-2f-src-2f-draw-2f-nema_gfx

clean-Core-2f-LVGL-2f-src-2f-draw-2f-nema_gfx:
	-$(RM) ./Core/LVGL/src/draw/nema_gfx/lv_draw_nema_gfx.cyclo ./Core/LVGL/src/draw/nema_gfx/lv_draw_nema_gfx.d ./Core/LVGL/src/draw/nema_gfx/lv_draw_nema_gfx.o ./Core/LVGL/src/draw/nema_gfx/lv_draw_nema_gfx.su ./Core/LVGL/src/draw/nema_gfx/lv_draw_nema_gfx_img.cyclo ./Core/LVGL/src/draw/nema_gfx/lv_draw_nema_gfx_img.d ./Core/LVGL/src/draw/nema_gfx/lv_draw_nema_gfx_img.o ./Core/LVGL/src/draw/nema_gfx/lv_draw_nema_gfx_img.su ./Core/LVGL/src/draw/nema_gfx/lv_draw_nema_gfx_letter.cyclo ./Core/LVGL/src/draw/nema_gfx/lv_draw_nema_gfx_letter.d ./Core/LVGL/src/draw/nema_gfx/lv_draw_nema_gfx_letter.o ./Core/LVGL/src/draw/nema_gfx/lv_draw_nema_gfx_letter.su

.PHONY: clean-Core-2f-LVGL-2f-src-2f-draw-2f-nema_gfx

