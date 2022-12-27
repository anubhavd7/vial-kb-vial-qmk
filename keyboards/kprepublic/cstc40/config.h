// Copyright 2022 Var (@itsvar8)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define FORCE_NKRO

#define I2C1_SDA_PIN B9
#define I2C1_SCL_PIN B8
#define DRIVER_ADDR_1 0b1010000
#define DRIVER_COUNT 1
#define DRIVER_1_LED_TOTAL 47
#define DRIVER_LED_TOTAL DRIVER_1_LED_TOTAL
#define RGB_MATRIX_LED_COUNT DRIVER_1_LED_TOTAL

#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200 // Limit to vendor-recommended value

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

// RGB Matrix Animation modes. Explicitly enabled
// For full list of effects, see:
// https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects

#define ENABLE_RGB_MATRIX_ALPHAS_MODS
#define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_BAND_SAT
#define ENABLE_RGB_MATRIX_BAND_VAL
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#define ENABLE_RGB_MATRIX_CYCLE_ALL
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
//#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
//#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
//#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
//#define ENABLE_RGB_MATRIX_DUAL_BEACON
//#define ENABLE_RGB_MATRIX_RAINBOW_BEACON
//#define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
//#define ENABLE_RGB_MATRIX_RAINDROPS
//#define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
//#define ENABLE_RGB_MATRIX_HUE_BREATHING
//#define ENABLE_RGB_MATRIX_HUE_PENDULUM
//#define ENABLE_RGB_MATRIX_HUE_WAVE
//#define ENABLE_RGB_MATRIX_PIXEL_RAIN
//#define ENABLE_RGB_MATRIX_PIXEL_FLOW
//#define ENABLE_RGB_MATRIX_PIXEL_FRACTAL

// enabled only if RGB_MATRIX_FRAMEBUFFER_EFFECTS is defined
#define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#define ENABLE_RGB_MATRIX_DIGITAL_RAIN

// enabled only of RGB_MATRIX_KEYPRESSES or RGB_MATRIX_KEYRELEASES is defined
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE
//#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
//#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
//#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
//#define ENABLE_RGB_MATRIX_SPLASH
#define ENABLE_RGB_MATRIX_MULTISPLASH
//#define ENABLE_RGB_MATRIX_SOLID_SPLASH
#define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
