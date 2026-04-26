################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/generated/events_init.c \
../Core/generated/gui_guider.c \
../Core/generated/setup_scr_screen_chord_demo.c \
../Core/generated/setup_scr_screen_logo.c \
../Core/generated/setup_scr_screen_menu.c \
../Core/generated/setup_scr_screen_set_choose.c \
../Core/generated/widgets_init.c 

OBJS += \
./Core/generated/events_init.o \
./Core/generated/gui_guider.o \
./Core/generated/setup_scr_screen_chord_demo.o \
./Core/generated/setup_scr_screen_logo.o \
./Core/generated/setup_scr_screen_menu.o \
./Core/generated/setup_scr_screen_set_choose.o \
./Core/generated/widgets_init.o 

C_DEPS += \
./Core/generated/events_init.d \
./Core/generated/gui_guider.d \
./Core/generated/setup_scr_screen_chord_demo.d \
./Core/generated/setup_scr_screen_logo.d \
./Core/generated/setup_scr_screen_menu.d \
./Core/generated/setup_scr_screen_set_choose.d \
./Core/generated/widgets_init.d 


# Each subdirectory must supply rules for building sources it contributes
Core/generated/%.o Core/generated/%.su Core/generated/%.cyclo: ../Core/generated/%.c Core/generated/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32L4R5xx -c -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Drivers/CMSIS/DSP/Include" -I../Core/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL/porting" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/Src" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_customer_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/images" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/custom" -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-generated

clean-Core-2f-generated:
	-$(RM) ./Core/generated/events_init.cyclo ./Core/generated/events_init.d ./Core/generated/events_init.o ./Core/generated/events_init.su ./Core/generated/gui_guider.cyclo ./Core/generated/gui_guider.d ./Core/generated/gui_guider.o ./Core/generated/gui_guider.su ./Core/generated/setup_scr_screen_chord_demo.cyclo ./Core/generated/setup_scr_screen_chord_demo.d ./Core/generated/setup_scr_screen_chord_demo.o ./Core/generated/setup_scr_screen_chord_demo.su ./Core/generated/setup_scr_screen_logo.cyclo ./Core/generated/setup_scr_screen_logo.d ./Core/generated/setup_scr_screen_logo.o ./Core/generated/setup_scr_screen_logo.su ./Core/generated/setup_scr_screen_menu.cyclo ./Core/generated/setup_scr_screen_menu.d ./Core/generated/setup_scr_screen_menu.o ./Core/generated/setup_scr_screen_menu.su ./Core/generated/setup_scr_screen_set_choose.cyclo ./Core/generated/setup_scr_screen_set_choose.d ./Core/generated/setup_scr_screen_set_choose.o ./Core/generated/setup_scr_screen_set_choose.su ./Core/generated/widgets_init.cyclo ./Core/generated/widgets_init.d ./Core/generated/widgets_init.o ./Core/generated/widgets_init.su

.PHONY: clean-Core-2f-generated

