MCU = RP2040
BOOTLOADER = rp2040


# LTO_ENABLE 					= yes

CONSOLE_ENABLE			= no
COMMAND_ENABLE  		= no
NKRO_ENABLE					= no
BACKLIGHT_ENABLE		= no
RGBLIGHT_ENABLE			= no
AUDIO_ENABLE				= no
UNICODE_ENABLE			= no
MAGIC_ENABLE				= no

BOOTMAGIC_ENABLE		= yes
MOUSEKEY_ENABLE			= yes
EXTRAKEY_ENABLE			= yes

DEFERRED_EXEC_ENABLE = yes
SRC += matrix.c

QUANTUM_LIB_SRC += spi_master.c
CUSTOM_MATRIX = lite

ifeq ($(strip $(TRACKPAD_ENABLE)), yes)
	POINTING_DEVICE_DRIVER = cirque_pinnacle_spi
	POINTING_DEVICE_ENABLE = yes
	OPT_DEFTS += -DTRACKPAD_ENABLED
endif