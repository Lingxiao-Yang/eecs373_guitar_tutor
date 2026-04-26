################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/LVGL/src/draw/lv_draw.c \
../Core/LVGL/src/draw/lv_draw_arc.c \
../Core/LVGL/src/draw/lv_draw_img.c \
../Core/LVGL/src/draw/lv_draw_label.c \
../Core/LVGL/src/draw/lv_draw_layer.c \
../Core/LVGL/src/draw/lv_draw_line.c \
../Core/LVGL/src/draw/lv_draw_mask.c \
../Core/LVGL/src/draw/lv_draw_rect.c \
../Core/LVGL/src/draw/lv_draw_transform.c \
../Core/LVGL/src/draw/lv_draw_triangle.c \
../Core/LVGL/src/draw/lv_img_buf.c \
../Core/LVGL/src/draw/lv_img_cache.c \
../Core/LVGL/src/draw/lv_img_decoder.c 

OBJS += \
./Core/LVGL/src/draw/lv_draw.o \
./Core/LVGL/src/draw/lv_draw_arc.o \
./Core/LVGL/src/draw/lv_draw_img.o \
./Core/LVGL/src/draw/lv_draw_label.o \
./Core/LVGL/src/draw/lv_draw_layer.o \
./Core/LVGL/src/draw/lv_draw_line.o \
./Core/LVGL/src/draw/lv_draw_mask.o \
./Core/LVGL/src/draw/lv_draw_rect.o \
./Core/LVGL/src/draw/lv_draw_transform.o \
./Core/LVGL/src/draw/lv_draw_triangle.o \
./Core/LVGL/src/draw/lv_img_buf.o \
./Core/LVGL/src/draw/lv_img_cache.o \
./Core/LVGL/src/draw/lv_img_decoder.o 

C_DEPS += \
./Core/LVGL/src/draw/lv_draw.d \
./Core/LVGL/src/draw/lv_draw_arc.d \
./Core/LVGL/src/draw/lv_draw_img.d \
./Core/LVGL/src/draw/lv_draw_label.d \
./Core/LVGL/src/draw/lv_draw_layer.d \
./Core/LVGL/src/draw/lv_draw_line.d \
./Core/LVGL/src/draw/lv_draw_mask.d \
./Core/LVGL/src/draw/lv_draw_rect.d \
./Core/LVGL/src/draw/lv_draw_transform.d \
./Core/LVGL/src/draw/lv_draw_triangle.d \
./Core/LVGL/src/draw/lv_img_buf.d \
./Core/LVGL/src/draw/lv_img_cache.d \
./Core/LVGL/src/draw/lv_img_decoder.d 


# Each subdirectory must supply rules for building sources it contributes
Core/LVGL/src/draw/%.o Core/LVGL/src/draw/%.su Core/LVGL/src/draw/%.cyclo: ../Core/LVGL/src/draw/%.c Core/LVGL/src/draw/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L4R5xx -c -I../Core/Inc -I../Drivers/CMSIS/DSP/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/Src" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL/porting" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL/src" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_customer_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/images" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/custom" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-LVGL-2f-src-2f-draw

clean-Core-2f-LVGL-2f-src-2f-draw:
	-$(RM) ./Core/LVGL/src/draw/lv_draw.cyclo ./Core/LVGL/src/draw/lv_draw.d ./Core/LVGL/src/draw/lv_draw.o ./Core/LVGL/src/draw/lv_draw.su ./Core/LVGL/src/draw/lv_draw_arc.cyclo ./Core/LVGL/src/draw/lv_draw_arc.d ./Core/LVGL/src/draw/lv_draw_arc.o ./Core/LVGL/src/draw/lv_draw_arc.su ./Core/LVGL/src/draw/lv_draw_img.cyclo ./Core/LVGL/src/draw/lv_draw_img.d ./Core/LVGL/src/draw/lv_draw_img.o ./Core/LVGL/src/draw/lv_draw_img.su ./Core/LVGL/src/draw/lv_draw_label.cyclo ./Core/LVGL/src/draw/lv_draw_label.d ./Core/LVGL/src/draw/lv_draw_label.o ./Core/LVGL/src/draw/lv_draw_label.su ./Core/LVGL/src/draw/lv_draw_layer.cyclo ./Core/LVGL/src/draw/lv_draw_layer.d ./Core/LVGL/src/draw/lv_draw_layer.o ./Core/LVGL/src/draw/lv_draw_layer.su ./Core/LVGL/src/draw/lv_draw_line.cyclo ./Core/LVGL/src/draw/lv_draw_line.d ./Core/LVGL/src/draw/lv_draw_line.o ./Core/LVGL/src/draw/lv_draw_line.su ./Core/LVGL/src/draw/lv_draw_mask.cyclo ./Core/LVGL/src/draw/lv_draw_mask.d ./Core/LVGL/src/draw/lv_draw_mask.o ./Core/LVGL/src/draw/lv_draw_mask.su ./Core/LVGL/src/draw/lv_draw_rect.cyclo ./Core/LVGL/src/draw/lv_draw_rect.d ./Core/LVGL/src/draw/lv_draw_rect.o ./Core/LVGL/src/draw/lv_draw_rect.su ./Core/LVGL/src/draw/lv_draw_transform.cyclo ./Core/LVGL/src/draw/lv_draw_transform.d ./Core/LVGL/src/draw/lv_draw_transform.o ./Core/LVGL/src/draw/lv_draw_transform.su ./Core/LVGL/src/draw/lv_draw_triangle.cyclo ./Core/LVGL/src/draw/lv_draw_triangle.d ./Core/LVGL/src/draw/lv_draw_triangle.o ./Core/LVGL/src/draw/lv_draw_triangle.su ./Core/LVGL/src/draw/lv_img_buf.cyclo ./Core/LVGL/src/draw/lv_img_buf.d ./Core/LVGL/src/draw/lv_img_buf.o ./Core/LVGL/src/draw/lv_img_buf.su ./Core/LVGL/src/draw/lv_img_cache.cyclo ./Core/LVGL/src/draw/lv_img_cache.d ./Core/LVGL/src/draw/lv_img_cache.o ./Core/LVGL/src/draw/lv_img_cache.su ./Core/LVGL/src/draw/lv_img_decoder.cyclo ./Core/LVGL/src/draw/lv_img_decoder.d ./Core/LVGL/src/draw/lv_img_decoder.o ./Core/LVGL/src/draw/lv_img_decoder.su

.PHONY: clean-Core-2f-LVGL-2f-src-2f-draw

