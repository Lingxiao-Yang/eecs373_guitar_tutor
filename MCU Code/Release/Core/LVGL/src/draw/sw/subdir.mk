################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/LVGL/src/draw/sw/lv_draw_sw.c \
../Core/LVGL/src/draw/sw/lv_draw_sw_arc.c \
../Core/LVGL/src/draw/sw/lv_draw_sw_blend.c \
../Core/LVGL/src/draw/sw/lv_draw_sw_dither.c \
../Core/LVGL/src/draw/sw/lv_draw_sw_gradient.c \
../Core/LVGL/src/draw/sw/lv_draw_sw_img.c \
../Core/LVGL/src/draw/sw/lv_draw_sw_layer.c \
../Core/LVGL/src/draw/sw/lv_draw_sw_letter.c \
../Core/LVGL/src/draw/sw/lv_draw_sw_line.c \
../Core/LVGL/src/draw/sw/lv_draw_sw_polygon.c \
../Core/LVGL/src/draw/sw/lv_draw_sw_rect.c \
../Core/LVGL/src/draw/sw/lv_draw_sw_transform.c 

OBJS += \
./Core/LVGL/src/draw/sw/lv_draw_sw.o \
./Core/LVGL/src/draw/sw/lv_draw_sw_arc.o \
./Core/LVGL/src/draw/sw/lv_draw_sw_blend.o \
./Core/LVGL/src/draw/sw/lv_draw_sw_dither.o \
./Core/LVGL/src/draw/sw/lv_draw_sw_gradient.o \
./Core/LVGL/src/draw/sw/lv_draw_sw_img.o \
./Core/LVGL/src/draw/sw/lv_draw_sw_layer.o \
./Core/LVGL/src/draw/sw/lv_draw_sw_letter.o \
./Core/LVGL/src/draw/sw/lv_draw_sw_line.o \
./Core/LVGL/src/draw/sw/lv_draw_sw_polygon.o \
./Core/LVGL/src/draw/sw/lv_draw_sw_rect.o \
./Core/LVGL/src/draw/sw/lv_draw_sw_transform.o 

C_DEPS += \
./Core/LVGL/src/draw/sw/lv_draw_sw.d \
./Core/LVGL/src/draw/sw/lv_draw_sw_arc.d \
./Core/LVGL/src/draw/sw/lv_draw_sw_blend.d \
./Core/LVGL/src/draw/sw/lv_draw_sw_dither.d \
./Core/LVGL/src/draw/sw/lv_draw_sw_gradient.d \
./Core/LVGL/src/draw/sw/lv_draw_sw_img.d \
./Core/LVGL/src/draw/sw/lv_draw_sw_layer.d \
./Core/LVGL/src/draw/sw/lv_draw_sw_letter.d \
./Core/LVGL/src/draw/sw/lv_draw_sw_line.d \
./Core/LVGL/src/draw/sw/lv_draw_sw_polygon.d \
./Core/LVGL/src/draw/sw/lv_draw_sw_rect.d \
./Core/LVGL/src/draw/sw/lv_draw_sw_transform.d 


# Each subdirectory must supply rules for building sources it contributes
Core/LVGL/src/draw/sw/%.o Core/LVGL/src/draw/sw/%.su Core/LVGL/src/draw/sw/%.cyclo: ../Core/LVGL/src/draw/sw/%.c Core/LVGL/src/draw/sw/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32L4R5xx -c -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Drivers/CMSIS/DSP/Include" -I../Core/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL/porting" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/Src" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_customer_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/images" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/custom" -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-LVGL-2f-src-2f-draw-2f-sw

clean-Core-2f-LVGL-2f-src-2f-draw-2f-sw:
	-$(RM) ./Core/LVGL/src/draw/sw/lv_draw_sw.cyclo ./Core/LVGL/src/draw/sw/lv_draw_sw.d ./Core/LVGL/src/draw/sw/lv_draw_sw.o ./Core/LVGL/src/draw/sw/lv_draw_sw.su ./Core/LVGL/src/draw/sw/lv_draw_sw_arc.cyclo ./Core/LVGL/src/draw/sw/lv_draw_sw_arc.d ./Core/LVGL/src/draw/sw/lv_draw_sw_arc.o ./Core/LVGL/src/draw/sw/lv_draw_sw_arc.su ./Core/LVGL/src/draw/sw/lv_draw_sw_blend.cyclo ./Core/LVGL/src/draw/sw/lv_draw_sw_blend.d ./Core/LVGL/src/draw/sw/lv_draw_sw_blend.o ./Core/LVGL/src/draw/sw/lv_draw_sw_blend.su ./Core/LVGL/src/draw/sw/lv_draw_sw_dither.cyclo ./Core/LVGL/src/draw/sw/lv_draw_sw_dither.d ./Core/LVGL/src/draw/sw/lv_draw_sw_dither.o ./Core/LVGL/src/draw/sw/lv_draw_sw_dither.su ./Core/LVGL/src/draw/sw/lv_draw_sw_gradient.cyclo ./Core/LVGL/src/draw/sw/lv_draw_sw_gradient.d ./Core/LVGL/src/draw/sw/lv_draw_sw_gradient.o ./Core/LVGL/src/draw/sw/lv_draw_sw_gradient.su ./Core/LVGL/src/draw/sw/lv_draw_sw_img.cyclo ./Core/LVGL/src/draw/sw/lv_draw_sw_img.d ./Core/LVGL/src/draw/sw/lv_draw_sw_img.o ./Core/LVGL/src/draw/sw/lv_draw_sw_img.su ./Core/LVGL/src/draw/sw/lv_draw_sw_layer.cyclo ./Core/LVGL/src/draw/sw/lv_draw_sw_layer.d ./Core/LVGL/src/draw/sw/lv_draw_sw_layer.o ./Core/LVGL/src/draw/sw/lv_draw_sw_layer.su ./Core/LVGL/src/draw/sw/lv_draw_sw_letter.cyclo ./Core/LVGL/src/draw/sw/lv_draw_sw_letter.d ./Core/LVGL/src/draw/sw/lv_draw_sw_letter.o ./Core/LVGL/src/draw/sw/lv_draw_sw_letter.su ./Core/LVGL/src/draw/sw/lv_draw_sw_line.cyclo ./Core/LVGL/src/draw/sw/lv_draw_sw_line.d ./Core/LVGL/src/draw/sw/lv_draw_sw_line.o ./Core/LVGL/src/draw/sw/lv_draw_sw_line.su ./Core/LVGL/src/draw/sw/lv_draw_sw_polygon.cyclo ./Core/LVGL/src/draw/sw/lv_draw_sw_polygon.d ./Core/LVGL/src/draw/sw/lv_draw_sw_polygon.o ./Core/LVGL/src/draw/sw/lv_draw_sw_polygon.su ./Core/LVGL/src/draw/sw/lv_draw_sw_rect.cyclo ./Core/LVGL/src/draw/sw/lv_draw_sw_rect.d ./Core/LVGL/src/draw/sw/lv_draw_sw_rect.o ./Core/LVGL/src/draw/sw/lv_draw_sw_rect.su ./Core/LVGL/src/draw/sw/lv_draw_sw_transform.cyclo ./Core/LVGL/src/draw/sw/lv_draw_sw_transform.d ./Core/LVGL/src/draw/sw/lv_draw_sw_transform.o ./Core/LVGL/src/draw/sw/lv_draw_sw_transform.su

.PHONY: clean-Core-2f-LVGL-2f-src-2f-draw-2f-sw

