################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/LVGL/src/core/lv_disp.c \
../Core/LVGL/src/core/lv_event.c \
../Core/LVGL/src/core/lv_group.c \
../Core/LVGL/src/core/lv_indev.c \
../Core/LVGL/src/core/lv_indev_scroll.c \
../Core/LVGL/src/core/lv_obj.c \
../Core/LVGL/src/core/lv_obj_class.c \
../Core/LVGL/src/core/lv_obj_draw.c \
../Core/LVGL/src/core/lv_obj_pos.c \
../Core/LVGL/src/core/lv_obj_scroll.c \
../Core/LVGL/src/core/lv_obj_style.c \
../Core/LVGL/src/core/lv_obj_style_gen.c \
../Core/LVGL/src/core/lv_obj_tree.c \
../Core/LVGL/src/core/lv_refr.c \
../Core/LVGL/src/core/lv_theme.c 

OBJS += \
./Core/LVGL/src/core/lv_disp.o \
./Core/LVGL/src/core/lv_event.o \
./Core/LVGL/src/core/lv_group.o \
./Core/LVGL/src/core/lv_indev.o \
./Core/LVGL/src/core/lv_indev_scroll.o \
./Core/LVGL/src/core/lv_obj.o \
./Core/LVGL/src/core/lv_obj_class.o \
./Core/LVGL/src/core/lv_obj_draw.o \
./Core/LVGL/src/core/lv_obj_pos.o \
./Core/LVGL/src/core/lv_obj_scroll.o \
./Core/LVGL/src/core/lv_obj_style.o \
./Core/LVGL/src/core/lv_obj_style_gen.o \
./Core/LVGL/src/core/lv_obj_tree.o \
./Core/LVGL/src/core/lv_refr.o \
./Core/LVGL/src/core/lv_theme.o 

C_DEPS += \
./Core/LVGL/src/core/lv_disp.d \
./Core/LVGL/src/core/lv_event.d \
./Core/LVGL/src/core/lv_group.d \
./Core/LVGL/src/core/lv_indev.d \
./Core/LVGL/src/core/lv_indev_scroll.d \
./Core/LVGL/src/core/lv_obj.d \
./Core/LVGL/src/core/lv_obj_class.d \
./Core/LVGL/src/core/lv_obj_draw.d \
./Core/LVGL/src/core/lv_obj_pos.d \
./Core/LVGL/src/core/lv_obj_scroll.d \
./Core/LVGL/src/core/lv_obj_style.d \
./Core/LVGL/src/core/lv_obj_style_gen.d \
./Core/LVGL/src/core/lv_obj_tree.d \
./Core/LVGL/src/core/lv_refr.d \
./Core/LVGL/src/core/lv_theme.d 


# Each subdirectory must supply rules for building sources it contributes
Core/LVGL/src/core/%.o Core/LVGL/src/core/%.su Core/LVGL/src/core/%.cyclo: ../Core/LVGL/src/core/%.c Core/LVGL/src/core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L4R5xx -c -I../Core/Inc -I../Drivers/CMSIS/DSP/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/Src" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL/porting" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL/src" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_customer_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/images" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/custom" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-LVGL-2f-src-2f-core

clean-Core-2f-LVGL-2f-src-2f-core:
	-$(RM) ./Core/LVGL/src/core/lv_disp.cyclo ./Core/LVGL/src/core/lv_disp.d ./Core/LVGL/src/core/lv_disp.o ./Core/LVGL/src/core/lv_disp.su ./Core/LVGL/src/core/lv_event.cyclo ./Core/LVGL/src/core/lv_event.d ./Core/LVGL/src/core/lv_event.o ./Core/LVGL/src/core/lv_event.su ./Core/LVGL/src/core/lv_group.cyclo ./Core/LVGL/src/core/lv_group.d ./Core/LVGL/src/core/lv_group.o ./Core/LVGL/src/core/lv_group.su ./Core/LVGL/src/core/lv_indev.cyclo ./Core/LVGL/src/core/lv_indev.d ./Core/LVGL/src/core/lv_indev.o ./Core/LVGL/src/core/lv_indev.su ./Core/LVGL/src/core/lv_indev_scroll.cyclo ./Core/LVGL/src/core/lv_indev_scroll.d ./Core/LVGL/src/core/lv_indev_scroll.o ./Core/LVGL/src/core/lv_indev_scroll.su ./Core/LVGL/src/core/lv_obj.cyclo ./Core/LVGL/src/core/lv_obj.d ./Core/LVGL/src/core/lv_obj.o ./Core/LVGL/src/core/lv_obj.su ./Core/LVGL/src/core/lv_obj_class.cyclo ./Core/LVGL/src/core/lv_obj_class.d ./Core/LVGL/src/core/lv_obj_class.o ./Core/LVGL/src/core/lv_obj_class.su ./Core/LVGL/src/core/lv_obj_draw.cyclo ./Core/LVGL/src/core/lv_obj_draw.d ./Core/LVGL/src/core/lv_obj_draw.o ./Core/LVGL/src/core/lv_obj_draw.su ./Core/LVGL/src/core/lv_obj_pos.cyclo ./Core/LVGL/src/core/lv_obj_pos.d ./Core/LVGL/src/core/lv_obj_pos.o ./Core/LVGL/src/core/lv_obj_pos.su ./Core/LVGL/src/core/lv_obj_scroll.cyclo ./Core/LVGL/src/core/lv_obj_scroll.d ./Core/LVGL/src/core/lv_obj_scroll.o ./Core/LVGL/src/core/lv_obj_scroll.su ./Core/LVGL/src/core/lv_obj_style.cyclo ./Core/LVGL/src/core/lv_obj_style.d ./Core/LVGL/src/core/lv_obj_style.o ./Core/LVGL/src/core/lv_obj_style.su ./Core/LVGL/src/core/lv_obj_style_gen.cyclo ./Core/LVGL/src/core/lv_obj_style_gen.d ./Core/LVGL/src/core/lv_obj_style_gen.o ./Core/LVGL/src/core/lv_obj_style_gen.su ./Core/LVGL/src/core/lv_obj_tree.cyclo ./Core/LVGL/src/core/lv_obj_tree.d ./Core/LVGL/src/core/lv_obj_tree.o ./Core/LVGL/src/core/lv_obj_tree.su ./Core/LVGL/src/core/lv_refr.cyclo ./Core/LVGL/src/core/lv_refr.d ./Core/LVGL/src/core/lv_refr.o ./Core/LVGL/src/core/lv_refr.su ./Core/LVGL/src/core/lv_theme.cyclo ./Core/LVGL/src/core/lv_theme.d ./Core/LVGL/src/core/lv_theme.o ./Core/LVGL/src/core/lv_theme.su

.PHONY: clean-Core-2f-LVGL-2f-src-2f-core

