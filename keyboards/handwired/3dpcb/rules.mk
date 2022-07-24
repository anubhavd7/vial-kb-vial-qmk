# MCU name
MCU = 					atmega32u4
BOOTLOADER = 			atmel-dfu

# Build Options
#   comment out to disable the options.
#
BOOTMAGIC_ENABLE ?= no	# Virtual DIP switch configuration(+1000)
MOUSEKEY_ENABLE ?= no	# Mouse keys(+4700)
EXTRAKEY_ENABLE ?= yes	# Audio control and System control(+450)
CONSOLE_ENABLE ?= no	# Console for debug(+400)
COMMAND_ENABLE ?= no    # Commands for debug and configuration
SLEEP_LED_ENABLE ?= no  # Breathing sleep LED during USB suspend
NKRO_ENABLE ?= no		# USB Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
MIDI_ENABLE = yes		# MIDI controls
BACKLIGHT_ENABLE ?= no  # Enable keyboard backlight functionality
AUDIO_ENABLE ?= no
RGBLIGHT_ENABLE ?= no
TAP_DANCE_ENABLE = 		no
COMBO_ENABLE = 			no
KEY_OVERRIDE_ENABLE = 	no
