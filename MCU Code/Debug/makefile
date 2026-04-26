################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32L4xx_HAL_Driver/Src/subdir.mk
-include Drivers/CMSIS/DSP/Source/TransformFunctions/subdir.mk
-include Drivers/CMSIS/DSP/Source/SupportFunctions/subdir.mk
-include Drivers/CMSIS/DSP/Source/StatisticsFunctions/subdir.mk
-include Drivers/CMSIS/DSP/Source/MatrixFunctions/subdir.mk
-include Drivers/CMSIS/DSP/Source/FilteringFunctions/subdir.mk
-include Drivers/CMSIS/DSP/Source/FastMathFunctions/subdir.mk
-include Drivers/CMSIS/DSP/Source/ControllerFunctions/subdir.mk
-include Drivers/CMSIS/DSP/Source/ComplexMathFunctions/subdir.mk
-include Drivers/CMSIS/DSP/Source/CommonTables/subdir.mk
-include Drivers/CMSIS/DSP/Source/BasicMathFunctions/subdir.mk
-include Core/generated/images/subdir.mk
-include Core/generated/guider_fonts/subdir.mk
-include Core/generated/subdir.mk
-include Core/custom/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include Core/LVGL/src/widgets/subdir.mk
-include Core/LVGL/src/misc/subdir.mk
-include Core/LVGL/src/hal/subdir.mk
-include Core/LVGL/src/font/subdir.mk
-include Core/LVGL/src/extra/widgets/win/subdir.mk
-include Core/LVGL/src/extra/widgets/tileview/subdir.mk
-include Core/LVGL/src/extra/widgets/tabview/subdir.mk
-include Core/LVGL/src/extra/widgets/spinner/subdir.mk
-include Core/LVGL/src/extra/widgets/spinbox/subdir.mk
-include Core/LVGL/src/extra/widgets/span/subdir.mk
-include Core/LVGL/src/extra/widgets/msgbox/subdir.mk
-include Core/LVGL/src/extra/widgets/meter/subdir.mk
-include Core/LVGL/src/extra/widgets/menu/subdir.mk
-include Core/LVGL/src/extra/widgets/list/subdir.mk
-include Core/LVGL/src/extra/widgets/led/subdir.mk
-include Core/LVGL/src/extra/widgets/keyboard/subdir.mk
-include Core/LVGL/src/extra/widgets/imgbtn/subdir.mk
-include Core/LVGL/src/extra/widgets/colorwheel/subdir.mk
-include Core/LVGL/src/extra/widgets/chart/subdir.mk
-include Core/LVGL/src/extra/widgets/calendar/subdir.mk
-include Core/LVGL/src/extra/widgets/animimg/subdir.mk
-include Core/LVGL/src/extra/themes/mono/subdir.mk
-include Core/LVGL/src/extra/themes/default/subdir.mk
-include Core/LVGL/src/extra/themes/basic/subdir.mk
-include Core/LVGL/src/extra/others/snapshot/subdir.mk
-include Core/LVGL/src/extra/others/msg/subdir.mk
-include Core/LVGL/src/extra/others/monkey/subdir.mk
-include Core/LVGL/src/extra/others/imgfont/subdir.mk
-include Core/LVGL/src/extra/others/ime/subdir.mk
-include Core/LVGL/src/extra/others/gridnav/subdir.mk
-include Core/LVGL/src/extra/others/fragment/subdir.mk
-include Core/LVGL/src/extra/libs/tiny_ttf/subdir.mk
-include Core/LVGL/src/extra/libs/sjpg/subdir.mk
-include Core/LVGL/src/extra/libs/rlottie/subdir.mk
-include Core/LVGL/src/extra/libs/qrcode/subdir.mk
-include Core/LVGL/src/extra/libs/png/subdir.mk
-include Core/LVGL/src/extra/libs/gif/subdir.mk
-include Core/LVGL/src/extra/libs/fsdrv/subdir.mk
-include Core/LVGL/src/extra/libs/freetype/subdir.mk
-include Core/LVGL/src/extra/libs/ffmpeg/subdir.mk
-include Core/LVGL/src/extra/libs/bmp/subdir.mk
-include Core/LVGL/src/extra/layouts/grid/subdir.mk
-include Core/LVGL/src/extra/layouts/flex/subdir.mk
-include Core/LVGL/src/extra/subdir.mk
-include Core/LVGL/src/draw/swm341_dma2d/subdir.mk
-include Core/LVGL/src/draw/sw/subdir.mk
-include Core/LVGL/src/draw/stm32_dma2d/subdir.mk
-include Core/LVGL/src/draw/sdl/subdir.mk
-include Core/LVGL/src/draw/renesas/subdir.mk
-include Core/LVGL/src/draw/nxp/vglite/subdir.mk
-include Core/LVGL/src/draw/nxp/pxp/subdir.mk
-include Core/LVGL/src/draw/nema_gfx/subdir.mk
-include Core/LVGL/src/draw/arm2d/subdir.mk
-include Core/LVGL/src/draw/subdir.mk
-include Core/LVGL/src/core/subdir.mk
-include Core/LVGL/porting/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := test_giutar_tutor
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
test_giutar_tutor.elf \

MAP_FILES += \
test_giutar_tutor.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
test_giutar_tutor.list \


# All Target
all: main-build

# Main-build Target
main-build: test_giutar_tutor.elf secondary-outputs

# Tool invocations
test_giutar_tutor.elf test_giutar_tutor.map: $(OBJS) $(USER_OBJS) C:\Users\syoshino\Desktop\guitar_tutor_2.1.1_backup\STM32L4R5ZITXP_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "test_giutar_tutor.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"C:\Users\syoshino\Desktop\guitar_tutor_2.1.1_backup\STM32L4R5ZITXP_FLASH.ld" --specs=nosys.specs -Wl,-Map="test_giutar_tutor.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -u _printf_float -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

test_giutar_tutor.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "test_giutar_tutor.list"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) default.size.stdout test_giutar_tutor.elf test_giutar_tutor.list test_giutar_tutor.map
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
