# MCU name
MCU = STM32F103

# Bootloader selection
BOOTLOADER = stm32duino

# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE

VIA_ENABLE = yes

CONSOLE_ENABLE = yes

RGBLIGHT_ENABLE = yes
RGBLIGHT_DRIVER = WS2812
WS2812_DRIVER = bitbang