/* Copyright 2019
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

#define PRODUCT Delock Numpad STM32F103

#define MATRIX_COLS 6
#define MATRIX_ROWS 5
#define MATRIX_COL_PINS { A6, A7, B0, B1, B10, A0}
#define MATRIX_ROW_PINS { A5, A4, A3, A2, A1 }
#define UNUSED_PINS

#define WS2812_SPI SPI2 // default: SPID1
#define WS2812_SPI_MOSI_PAL_MODE 5 // MOSI pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 5
#define WS2812_SPI_SCK_PIN B13 // Required for F072, may be for others -- SCK pin, see the respective datasheet for the appropriate values for your MCU. default: unspecified
#define WS2812_SPI_SCK_PAL_MODE 5 // SCK pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 5

#define RGBLIGHT_LAYERS 
#undef RGBLED_NUM
#define RGBLED_NUM 1
#define RGB_DI_PIN B15
#define RGBLIGHT_LIMIT_VAL 50
// #define RGBLIGHT_MODE_STATIC_LIGHT 1
// #define BACKLIGHT_PIN         A0
// #define BACKLIGHT_PWM_DRIVER  PWMD2
// #define BACKLIGHT_PWM_CHANNEL 1

// #define RGB_DI_PIN A1

// #define ADC_PIN A0
