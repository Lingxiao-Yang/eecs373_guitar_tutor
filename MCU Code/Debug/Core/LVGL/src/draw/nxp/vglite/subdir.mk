################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite.c \
../Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite_arc.c \
../Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite_blend.c \
../Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite_line.c \
../Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite_rect.c \
../Core/LVGL/src/draw/nxp/vglite/lv_vglite_buf.c \
../Core/LVGL/src/draw/nxp/vglite/lv_vglite_utils.c 

OBJS += \
./Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite.o \
./Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite_arc.o \
./Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite_blend.o \
./Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite_line.o \
./Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite_rect.o \
./Core/LVGL/src/draw/nxp/vglite/lv_vglite_buf.o \
./Core/LVGL/src/draw/nxp/vglite/lv_vglite_utils.o 

C_DEPS += \
./Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite.d \
./Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite_arc.d \
./Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite_blend.d \
./Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite_line.d \
./Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite_rect.d \
./Core/LVGL/src/draw/nxp/vglite/lv_vglite_buf.d \
./Core/LVGL/src/draw/nxp/vglite/lv_vglite_utils.d 


# Each subdirectory must supply rules for building sources it contributes
Core/LVGL/src/draw/nxp/vglite/%.o Core/LVGL/src/draw/nxp/vglite/%.su Core/LVGL/src/draw/nxp/vglite/%.cyclo: ../Core/LVGL/src/draw/nxp/vglite/%.c Core/LVGL/src/draw/nxp/vglite/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L4R5xx -c -I../Core/Inc -I../Drivers/CMSIS/DSP/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/Src" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL/porting" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL/src" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_customer_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/images" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/custom" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-LVGL-2f-src-2f-draw-2f-nxp-2f-vglite

clean-Core-2f-LVGL-2f-src-2f-draw-2f-nxp-2f-vglite:
	-$(RM) ./Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite.cyclo ./Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite.d ./Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite.o ./Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite.su ./Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite_arc.cyclo ./Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite_arc.d ./Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite_arc.o ./Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite_arc.su ./Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite_blend.cyclo ./Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite_blend.d ./Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite_blend.o ./Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite_blend.su ./Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite_line.cyclo ./Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite_line.d ./Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite_line.o ./Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite_line.su ./Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite_rect.cyclo ./Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite_rect.d ./Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite_rect.o ./Core/LVGL/src/draw/nxp/vglite/lv_draw_vglite_rect.su ./Core/LVGL/src/draw/nxp/vglite/lv_vglite_buf.cyclo ./Core/LVGL/src/draw/nxp/vglite/lv_vglite_buf.d ./Core/LVGL/src/draw/nxp/vglite/lv_vglite_buf.o ./Core/LVGL/src/draw/nxp/vglite/lv_vglite_buf.su ./Core/LVGL/src/draw/nxp/vglite/lv_vglite_utils.cyclo ./Core/LVGL/src/draw/nxp/vglite/lv_vglite_utils.d ./Core/LVGL/src/draw/nxp/vglite/lv_vglite_utils.o ./Core/LVGL/src/draw/nxp/vglite/lv_vglite_utils.su

.PHONY: clean-Core-2f-LVGL-2f-src-2f-draw-2f-nxp-2f-vglite

