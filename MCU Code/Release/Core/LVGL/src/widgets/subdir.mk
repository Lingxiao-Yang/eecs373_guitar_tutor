################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/LVGL/src/widgets/lv_arc.c \
../Core/LVGL/src/widgets/lv_bar.c \
../Core/LVGL/src/widgets/lv_btn.c \
../Core/LVGL/src/widgets/lv_btnmatrix.c \
../Core/LVGL/src/widgets/lv_canvas.c \
../Core/LVGL/src/widgets/lv_checkbox.c \
../Core/LVGL/src/widgets/lv_dropdown.c \
../Core/LVGL/src/widgets/lv_img.c \
../Core/LVGL/src/widgets/lv_label.c \
../Core/LVGL/src/widgets/lv_line.c \
../Core/LVGL/src/widgets/lv_objx_templ.c \
../Core/LVGL/src/widgets/lv_roller.c \
../Core/LVGL/src/widgets/lv_slider.c \
../Core/LVGL/src/widgets/lv_switch.c \
../Core/LVGL/src/widgets/lv_table.c \
../Core/LVGL/src/widgets/lv_textarea.c 

OBJS += \
./Core/LVGL/src/widgets/lv_arc.o \
./Core/LVGL/src/widgets/lv_bar.o \
./Core/LVGL/src/widgets/lv_btn.o \
./Core/LVGL/src/widgets/lv_btnmatrix.o \
./Core/LVGL/src/widgets/lv_canvas.o \
./Core/LVGL/src/widgets/lv_checkbox.o \
./Core/LVGL/src/widgets/lv_dropdown.o \
./Core/LVGL/src/widgets/lv_img.o \
./Core/LVGL/src/widgets/lv_label.o \
./Core/LVGL/src/widgets/lv_line.o \
./Core/LVGL/src/widgets/lv_objx_templ.o \
./Core/LVGL/src/widgets/lv_roller.o \
./Core/LVGL/src/widgets/lv_slider.o \
./Core/LVGL/src/widgets/lv_switch.o \
./Core/LVGL/src/widgets/lv_table.o \
./Core/LVGL/src/widgets/lv_textarea.o 

C_DEPS += \
./Core/LVGL/src/widgets/lv_arc.d \
./Core/LVGL/src/widgets/lv_bar.d \
./Core/LVGL/src/widgets/lv_btn.d \
./Core/LVGL/src/widgets/lv_btnmatrix.d \
./Core/LVGL/src/widgets/lv_canvas.d \
./Core/LVGL/src/widgets/lv_checkbox.d \
./Core/LVGL/src/widgets/lv_dropdown.d \
./Core/LVGL/src/widgets/lv_img.d \
./Core/LVGL/src/widgets/lv_label.d \
./Core/LVGL/src/widgets/lv_line.d \
./Core/LVGL/src/widgets/lv_objx_templ.d \
./Core/LVGL/src/widgets/lv_roller.d \
./Core/LVGL/src/widgets/lv_slider.d \
./Core/LVGL/src/widgets/lv_switch.d \
./Core/LVGL/src/widgets/lv_table.d \
./Core/LVGL/src/widgets/lv_textarea.d 


# Each subdirectory must supply rules for building sources it contributes
Core/LVGL/src/widgets/%.o Core/LVGL/src/widgets/%.su Core/LVGL/src/widgets/%.cyclo: ../Core/LVGL/src/widgets/%.c Core/LVGL/src/widgets/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32L4R5xx -c -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Drivers/CMSIS/DSP/Include" -I../Core/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL/porting" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/Src" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_customer_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/images" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/custom" -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-LVGL-2f-src-2f-widgets

clean-Core-2f-LVGL-2f-src-2f-widgets:
	-$(RM) ./Core/LVGL/src/widgets/lv_arc.cyclo ./Core/LVGL/src/widgets/lv_arc.d ./Core/LVGL/src/widgets/lv_arc.o ./Core/LVGL/src/widgets/lv_arc.su ./Core/LVGL/src/widgets/lv_bar.cyclo ./Core/LVGL/src/widgets/lv_bar.d ./Core/LVGL/src/widgets/lv_bar.o ./Core/LVGL/src/widgets/lv_bar.su ./Core/LVGL/src/widgets/lv_btn.cyclo ./Core/LVGL/src/widgets/lv_btn.d ./Core/LVGL/src/widgets/lv_btn.o ./Core/LVGL/src/widgets/lv_btn.su ./Core/LVGL/src/widgets/lv_btnmatrix.cyclo ./Core/LVGL/src/widgets/lv_btnmatrix.d ./Core/LVGL/src/widgets/lv_btnmatrix.o ./Core/LVGL/src/widgets/lv_btnmatrix.su ./Core/LVGL/src/widgets/lv_canvas.cyclo ./Core/LVGL/src/widgets/lv_canvas.d ./Core/LVGL/src/widgets/lv_canvas.o ./Core/LVGL/src/widgets/lv_canvas.su ./Core/LVGL/src/widgets/lv_checkbox.cyclo ./Core/LVGL/src/widgets/lv_checkbox.d ./Core/LVGL/src/widgets/lv_checkbox.o ./Core/LVGL/src/widgets/lv_checkbox.su ./Core/LVGL/src/widgets/lv_dropdown.cyclo ./Core/LVGL/src/widgets/lv_dropdown.d ./Core/LVGL/src/widgets/lv_dropdown.o ./Core/LVGL/src/widgets/lv_dropdown.su ./Core/LVGL/src/widgets/lv_img.cyclo ./Core/LVGL/src/widgets/lv_img.d ./Core/LVGL/src/widgets/lv_img.o ./Core/LVGL/src/widgets/lv_img.su ./Core/LVGL/src/widgets/lv_label.cyclo ./Core/LVGL/src/widgets/lv_label.d ./Core/LVGL/src/widgets/lv_label.o ./Core/LVGL/src/widgets/lv_label.su ./Core/LVGL/src/widgets/lv_line.cyclo ./Core/LVGL/src/widgets/lv_line.d ./Core/LVGL/src/widgets/lv_line.o ./Core/LVGL/src/widgets/lv_line.su ./Core/LVGL/src/widgets/lv_objx_templ.cyclo ./Core/LVGL/src/widgets/lv_objx_templ.d ./Core/LVGL/src/widgets/lv_objx_templ.o ./Core/LVGL/src/widgets/lv_objx_templ.su ./Core/LVGL/src/widgets/lv_roller.cyclo ./Core/LVGL/src/widgets/lv_roller.d ./Core/LVGL/src/widgets/lv_roller.o ./Core/LVGL/src/widgets/lv_roller.su ./Core/LVGL/src/widgets/lv_slider.cyclo ./Core/LVGL/src/widgets/lv_slider.d ./Core/LVGL/src/widgets/lv_slider.o ./Core/LVGL/src/widgets/lv_slider.su ./Core/LVGL/src/widgets/lv_switch.cyclo ./Core/LVGL/src/widgets/lv_switch.d ./Core/LVGL/src/widgets/lv_switch.o ./Core/LVGL/src/widgets/lv_switch.su ./Core/LVGL/src/widgets/lv_table.cyclo ./Core/LVGL/src/widgets/lv_table.d ./Core/LVGL/src/widgets/lv_table.o ./Core/LVGL/src/widgets/lv_table.su ./Core/LVGL/src/widgets/lv_textarea.cyclo ./Core/LVGL/src/widgets/lv_textarea.d ./Core/LVGL/src/widgets/lv_textarea.o ./Core/LVGL/src/widgets/lv_textarea.su

.PHONY: clean-Core-2f-LVGL-2f-src-2f-widgets

