################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/LVGL/src/draw/sdl/lv_draw_sdl.c \
../Core/LVGL/src/draw/sdl/lv_draw_sdl_arc.c \
../Core/LVGL/src/draw/sdl/lv_draw_sdl_bg.c \
../Core/LVGL/src/draw/sdl/lv_draw_sdl_composite.c \
../Core/LVGL/src/draw/sdl/lv_draw_sdl_img.c \
../Core/LVGL/src/draw/sdl/lv_draw_sdl_label.c \
../Core/LVGL/src/draw/sdl/lv_draw_sdl_layer.c \
../Core/LVGL/src/draw/sdl/lv_draw_sdl_line.c \
../Core/LVGL/src/draw/sdl/lv_draw_sdl_mask.c \
../Core/LVGL/src/draw/sdl/lv_draw_sdl_polygon.c \
../Core/LVGL/src/draw/sdl/lv_draw_sdl_rect.c \
../Core/LVGL/src/draw/sdl/lv_draw_sdl_stack_blur.c \
../Core/LVGL/src/draw/sdl/lv_draw_sdl_texture_cache.c \
../Core/LVGL/src/draw/sdl/lv_draw_sdl_utils.c 

OBJS += \
./Core/LVGL/src/draw/sdl/lv_draw_sdl.o \
./Core/LVGL/src/draw/sdl/lv_draw_sdl_arc.o \
./Core/LVGL/src/draw/sdl/lv_draw_sdl_bg.o \
./Core/LVGL/src/draw/sdl/lv_draw_sdl_composite.o \
./Core/LVGL/src/draw/sdl/lv_draw_sdl_img.o \
./Core/LVGL/src/draw/sdl/lv_draw_sdl_label.o \
./Core/LVGL/src/draw/sdl/lv_draw_sdl_layer.o \
./Core/LVGL/src/draw/sdl/lv_draw_sdl_line.o \
./Core/LVGL/src/draw/sdl/lv_draw_sdl_mask.o \
./Core/LVGL/src/draw/sdl/lv_draw_sdl_polygon.o \
./Core/LVGL/src/draw/sdl/lv_draw_sdl_rect.o \
./Core/LVGL/src/draw/sdl/lv_draw_sdl_stack_blur.o \
./Core/LVGL/src/draw/sdl/lv_draw_sdl_texture_cache.o \
./Core/LVGL/src/draw/sdl/lv_draw_sdl_utils.o 

C_DEPS += \
./Core/LVGL/src/draw/sdl/lv_draw_sdl.d \
./Core/LVGL/src/draw/sdl/lv_draw_sdl_arc.d \
./Core/LVGL/src/draw/sdl/lv_draw_sdl_bg.d \
./Core/LVGL/src/draw/sdl/lv_draw_sdl_composite.d \
./Core/LVGL/src/draw/sdl/lv_draw_sdl_img.d \
./Core/LVGL/src/draw/sdl/lv_draw_sdl_label.d \
./Core/LVGL/src/draw/sdl/lv_draw_sdl_layer.d \
./Core/LVGL/src/draw/sdl/lv_draw_sdl_line.d \
./Core/LVGL/src/draw/sdl/lv_draw_sdl_mask.d \
./Core/LVGL/src/draw/sdl/lv_draw_sdl_polygon.d \
./Core/LVGL/src/draw/sdl/lv_draw_sdl_rect.d \
./Core/LVGL/src/draw/sdl/lv_draw_sdl_stack_blur.d \
./Core/LVGL/src/draw/sdl/lv_draw_sdl_texture_cache.d \
./Core/LVGL/src/draw/sdl/lv_draw_sdl_utils.d 


# Each subdirectory must supply rules for building sources it contributes
Core/LVGL/src/draw/sdl/%.o Core/LVGL/src/draw/sdl/%.su Core/LVGL/src/draw/sdl/%.cyclo: ../Core/LVGL/src/draw/sdl/%.c Core/LVGL/src/draw/sdl/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L4R5xx -c -I../Core/Inc -I../Drivers/CMSIS/DSP/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/Src" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL/porting" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL/src" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_customer_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/images" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/custom" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-LVGL-2f-src-2f-draw-2f-sdl

clean-Core-2f-LVGL-2f-src-2f-draw-2f-sdl:
	-$(RM) ./Core/LVGL/src/draw/sdl/lv_draw_sdl.cyclo ./Core/LVGL/src/draw/sdl/lv_draw_sdl.d ./Core/LVGL/src/draw/sdl/lv_draw_sdl.o ./Core/LVGL/src/draw/sdl/lv_draw_sdl.su ./Core/LVGL/src/draw/sdl/lv_draw_sdl_arc.cyclo ./Core/LVGL/src/draw/sdl/lv_draw_sdl_arc.d ./Core/LVGL/src/draw/sdl/lv_draw_sdl_arc.o ./Core/LVGL/src/draw/sdl/lv_draw_sdl_arc.su ./Core/LVGL/src/draw/sdl/lv_draw_sdl_bg.cyclo ./Core/LVGL/src/draw/sdl/lv_draw_sdl_bg.d ./Core/LVGL/src/draw/sdl/lv_draw_sdl_bg.o ./Core/LVGL/src/draw/sdl/lv_draw_sdl_bg.su ./Core/LVGL/src/draw/sdl/lv_draw_sdl_composite.cyclo ./Core/LVGL/src/draw/sdl/lv_draw_sdl_composite.d ./Core/LVGL/src/draw/sdl/lv_draw_sdl_composite.o ./Core/LVGL/src/draw/sdl/lv_draw_sdl_composite.su ./Core/LVGL/src/draw/sdl/lv_draw_sdl_img.cyclo ./Core/LVGL/src/draw/sdl/lv_draw_sdl_img.d ./Core/LVGL/src/draw/sdl/lv_draw_sdl_img.o ./Core/LVGL/src/draw/sdl/lv_draw_sdl_img.su ./Core/LVGL/src/draw/sdl/lv_draw_sdl_label.cyclo ./Core/LVGL/src/draw/sdl/lv_draw_sdl_label.d ./Core/LVGL/src/draw/sdl/lv_draw_sdl_label.o ./Core/LVGL/src/draw/sdl/lv_draw_sdl_label.su ./Core/LVGL/src/draw/sdl/lv_draw_sdl_layer.cyclo ./Core/LVGL/src/draw/sdl/lv_draw_sdl_layer.d ./Core/LVGL/src/draw/sdl/lv_draw_sdl_layer.o ./Core/LVGL/src/draw/sdl/lv_draw_sdl_layer.su ./Core/LVGL/src/draw/sdl/lv_draw_sdl_line.cyclo ./Core/LVGL/src/draw/sdl/lv_draw_sdl_line.d ./Core/LVGL/src/draw/sdl/lv_draw_sdl_line.o ./Core/LVGL/src/draw/sdl/lv_draw_sdl_line.su ./Core/LVGL/src/draw/sdl/lv_draw_sdl_mask.cyclo ./Core/LVGL/src/draw/sdl/lv_draw_sdl_mask.d ./Core/LVGL/src/draw/sdl/lv_draw_sdl_mask.o ./Core/LVGL/src/draw/sdl/lv_draw_sdl_mask.su ./Core/LVGL/src/draw/sdl/lv_draw_sdl_polygon.cyclo ./Core/LVGL/src/draw/sdl/lv_draw_sdl_polygon.d ./Core/LVGL/src/draw/sdl/lv_draw_sdl_polygon.o ./Core/LVGL/src/draw/sdl/lv_draw_sdl_polygon.su ./Core/LVGL/src/draw/sdl/lv_draw_sdl_rect.cyclo ./Core/LVGL/src/draw/sdl/lv_draw_sdl_rect.d ./Core/LVGL/src/draw/sdl/lv_draw_sdl_rect.o ./Core/LVGL/src/draw/sdl/lv_draw_sdl_rect.su ./Core/LVGL/src/draw/sdl/lv_draw_sdl_stack_blur.cyclo ./Core/LVGL/src/draw/sdl/lv_draw_sdl_stack_blur.d ./Core/LVGL/src/draw/sdl/lv_draw_sdl_stack_blur.o ./Core/LVGL/src/draw/sdl/lv_draw_sdl_stack_blur.su ./Core/LVGL/src/draw/sdl/lv_draw_sdl_texture_cache.cyclo ./Core/LVGL/src/draw/sdl/lv_draw_sdl_texture_cache.d ./Core/LVGL/src/draw/sdl/lv_draw_sdl_texture_cache.o ./Core/LVGL/src/draw/sdl/lv_draw_sdl_texture_cache.su ./Core/LVGL/src/draw/sdl/lv_draw_sdl_utils.cyclo ./Core/LVGL/src/draw/sdl/lv_draw_sdl_utils.d ./Core/LVGL/src/draw/sdl/lv_draw_sdl_utils.o ./Core/LVGL/src/draw/sdl/lv_draw_sdl_utils.su

.PHONY: clean-Core-2f-LVGL-2f-src-2f-draw-2f-sdl

