################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/LVGL/src/misc/lv_anim.c \
../Core/LVGL/src/misc/lv_anim_timeline.c \
../Core/LVGL/src/misc/lv_area.c \
../Core/LVGL/src/misc/lv_async.c \
../Core/LVGL/src/misc/lv_bidi.c \
../Core/LVGL/src/misc/lv_color.c \
../Core/LVGL/src/misc/lv_fs.c \
../Core/LVGL/src/misc/lv_gc.c \
../Core/LVGL/src/misc/lv_ll.c \
../Core/LVGL/src/misc/lv_log.c \
../Core/LVGL/src/misc/lv_lru.c \
../Core/LVGL/src/misc/lv_math.c \
../Core/LVGL/src/misc/lv_mem.c \
../Core/LVGL/src/misc/lv_printf.c \
../Core/LVGL/src/misc/lv_style.c \
../Core/LVGL/src/misc/lv_style_gen.c \
../Core/LVGL/src/misc/lv_templ.c \
../Core/LVGL/src/misc/lv_timer.c \
../Core/LVGL/src/misc/lv_tlsf.c \
../Core/LVGL/src/misc/lv_txt.c \
../Core/LVGL/src/misc/lv_txt_ap.c \
../Core/LVGL/src/misc/lv_utils.c 

OBJS += \
./Core/LVGL/src/misc/lv_anim.o \
./Core/LVGL/src/misc/lv_anim_timeline.o \
./Core/LVGL/src/misc/lv_area.o \
./Core/LVGL/src/misc/lv_async.o \
./Core/LVGL/src/misc/lv_bidi.o \
./Core/LVGL/src/misc/lv_color.o \
./Core/LVGL/src/misc/lv_fs.o \
./Core/LVGL/src/misc/lv_gc.o \
./Core/LVGL/src/misc/lv_ll.o \
./Core/LVGL/src/misc/lv_log.o \
./Core/LVGL/src/misc/lv_lru.o \
./Core/LVGL/src/misc/lv_math.o \
./Core/LVGL/src/misc/lv_mem.o \
./Core/LVGL/src/misc/lv_printf.o \
./Core/LVGL/src/misc/lv_style.o \
./Core/LVGL/src/misc/lv_style_gen.o \
./Core/LVGL/src/misc/lv_templ.o \
./Core/LVGL/src/misc/lv_timer.o \
./Core/LVGL/src/misc/lv_tlsf.o \
./Core/LVGL/src/misc/lv_txt.o \
./Core/LVGL/src/misc/lv_txt_ap.o \
./Core/LVGL/src/misc/lv_utils.o 

C_DEPS += \
./Core/LVGL/src/misc/lv_anim.d \
./Core/LVGL/src/misc/lv_anim_timeline.d \
./Core/LVGL/src/misc/lv_area.d \
./Core/LVGL/src/misc/lv_async.d \
./Core/LVGL/src/misc/lv_bidi.d \
./Core/LVGL/src/misc/lv_color.d \
./Core/LVGL/src/misc/lv_fs.d \
./Core/LVGL/src/misc/lv_gc.d \
./Core/LVGL/src/misc/lv_ll.d \
./Core/LVGL/src/misc/lv_log.d \
./Core/LVGL/src/misc/lv_lru.d \
./Core/LVGL/src/misc/lv_math.d \
./Core/LVGL/src/misc/lv_mem.d \
./Core/LVGL/src/misc/lv_printf.d \
./Core/LVGL/src/misc/lv_style.d \
./Core/LVGL/src/misc/lv_style_gen.d \
./Core/LVGL/src/misc/lv_templ.d \
./Core/LVGL/src/misc/lv_timer.d \
./Core/LVGL/src/misc/lv_tlsf.d \
./Core/LVGL/src/misc/lv_txt.d \
./Core/LVGL/src/misc/lv_txt_ap.d \
./Core/LVGL/src/misc/lv_utils.d 


# Each subdirectory must supply rules for building sources it contributes
Core/LVGL/src/misc/%.o Core/LVGL/src/misc/%.su Core/LVGL/src/misc/%.cyclo: ../Core/LVGL/src/misc/%.c Core/LVGL/src/misc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32L4R5xx -c -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Drivers/CMSIS/DSP/Include" -I../Core/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL/porting" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/Src" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/LVGL" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_customer_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/guider_fonts" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/generated/images" -I"C:/Users/syoshino/Desktop/guitar_tutor_2.1.1_backup/Core/custom" -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-LVGL-2f-src-2f-misc

clean-Core-2f-LVGL-2f-src-2f-misc:
	-$(RM) ./Core/LVGL/src/misc/lv_anim.cyclo ./Core/LVGL/src/misc/lv_anim.d ./Core/LVGL/src/misc/lv_anim.o ./Core/LVGL/src/misc/lv_anim.su ./Core/LVGL/src/misc/lv_anim_timeline.cyclo ./Core/LVGL/src/misc/lv_anim_timeline.d ./Core/LVGL/src/misc/lv_anim_timeline.o ./Core/LVGL/src/misc/lv_anim_timeline.su ./Core/LVGL/src/misc/lv_area.cyclo ./Core/LVGL/src/misc/lv_area.d ./Core/LVGL/src/misc/lv_area.o ./Core/LVGL/src/misc/lv_area.su ./Core/LVGL/src/misc/lv_async.cyclo ./Core/LVGL/src/misc/lv_async.d ./Core/LVGL/src/misc/lv_async.o ./Core/LVGL/src/misc/lv_async.su ./Core/LVGL/src/misc/lv_bidi.cyclo ./Core/LVGL/src/misc/lv_bidi.d ./Core/LVGL/src/misc/lv_bidi.o ./Core/LVGL/src/misc/lv_bidi.su ./Core/LVGL/src/misc/lv_color.cyclo ./Core/LVGL/src/misc/lv_color.d ./Core/LVGL/src/misc/lv_color.o ./Core/LVGL/src/misc/lv_color.su ./Core/LVGL/src/misc/lv_fs.cyclo ./Core/LVGL/src/misc/lv_fs.d ./Core/LVGL/src/misc/lv_fs.o ./Core/LVGL/src/misc/lv_fs.su ./Core/LVGL/src/misc/lv_gc.cyclo ./Core/LVGL/src/misc/lv_gc.d ./Core/LVGL/src/misc/lv_gc.o ./Core/LVGL/src/misc/lv_gc.su ./Core/LVGL/src/misc/lv_ll.cyclo ./Core/LVGL/src/misc/lv_ll.d ./Core/LVGL/src/misc/lv_ll.o ./Core/LVGL/src/misc/lv_ll.su ./Core/LVGL/src/misc/lv_log.cyclo ./Core/LVGL/src/misc/lv_log.d ./Core/LVGL/src/misc/lv_log.o ./Core/LVGL/src/misc/lv_log.su ./Core/LVGL/src/misc/lv_lru.cyclo ./Core/LVGL/src/misc/lv_lru.d ./Core/LVGL/src/misc/lv_lru.o ./Core/LVGL/src/misc/lv_lru.su ./Core/LVGL/src/misc/lv_math.cyclo ./Core/LVGL/src/misc/lv_math.d ./Core/LVGL/src/misc/lv_math.o ./Core/LVGL/src/misc/lv_math.su ./Core/LVGL/src/misc/lv_mem.cyclo ./Core/LVGL/src/misc/lv_mem.d ./Core/LVGL/src/misc/lv_mem.o ./Core/LVGL/src/misc/lv_mem.su ./Core/LVGL/src/misc/lv_printf.cyclo ./Core/LVGL/src/misc/lv_printf.d ./Core/LVGL/src/misc/lv_printf.o ./Core/LVGL/src/misc/lv_printf.su ./Core/LVGL/src/misc/lv_style.cyclo ./Core/LVGL/src/misc/lv_style.d ./Core/LVGL/src/misc/lv_style.o ./Core/LVGL/src/misc/lv_style.su ./Core/LVGL/src/misc/lv_style_gen.cyclo ./Core/LVGL/src/misc/lv_style_gen.d ./Core/LVGL/src/misc/lv_style_gen.o ./Core/LVGL/src/misc/lv_style_gen.su ./Core/LVGL/src/misc/lv_templ.cyclo ./Core/LVGL/src/misc/lv_templ.d ./Core/LVGL/src/misc/lv_templ.o ./Core/LVGL/src/misc/lv_templ.su ./Core/LVGL/src/misc/lv_timer.cyclo ./Core/LVGL/src/misc/lv_timer.d ./Core/LVGL/src/misc/lv_timer.o ./Core/LVGL/src/misc/lv_timer.su ./Core/LVGL/src/misc/lv_tlsf.cyclo ./Core/LVGL/src/misc/lv_tlsf.d ./Core/LVGL/src/misc/lv_tlsf.o ./Core/LVGL/src/misc/lv_tlsf.su ./Core/LVGL/src/misc/lv_txt.cyclo ./Core/LVGL/src/misc/lv_txt.d ./Core/LVGL/src/misc/lv_txt.o ./Core/LVGL/src/misc/lv_txt.su ./Core/LVGL/src/misc/lv_txt_ap.cyclo ./Core/LVGL/src/misc/lv_txt_ap.d ./Core/LVGL/src/misc/lv_txt_ap.o ./Core/LVGL/src/misc/lv_txt_ap.su ./Core/LVGL/src/misc/lv_utils.cyclo ./Core/LVGL/src/misc/lv_utils.d ./Core/LVGL/src/misc/lv_utils.o ./Core/LVGL/src/misc/lv_utils.su

.PHONY: clean-Core-2f-LVGL-2f-src-2f-misc

