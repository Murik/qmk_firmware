/* Copyright 2022 Murik (@Murik)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4D44 // "MD"
#define PRODUCT_ID      0x5244 // "RD"
#define DEVICE_VER      0x0100
#define MANUFACTURER    murik
#define PRODUCT         The Split IDEA 75 Keyboard

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */

/* key matrix size
ROWS = total count of rows for both sides - this is broken out accordingly in split.h
COLS = number of cols per side which curently needs to be equal so there are blank columns for the left side in the split89.h file
 */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 8

// wiring of each half
/* Left side matrix */
#define MATRIX_ROW_PINS { D4, D7, E6, B4, B5 }
/* The last NO_PIN are dummie to make the same size as MATRIX_ROW_PINS_RIGHT. */
//#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3, B2, NO_PIN } //inverse?
#define MATRIX_COL_PINS { B2, B3, B1, F7, F6, F5, F4, NO_PIN } //inversed rev1
/* Right side matrix */
#define MATRIX_ROW_PINS_RIGHT { D4, D7, E6, B4, B5 }
#define MATRIX_COL_PINS_RIGHT { F4, F5, F6, F7, B1, B3, B2, B6 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost (lacks anti-ghosting diodes) */
//#define MATRIX_HAS_GHOST

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* handedness */
/*
 * Split Keyboard specific options, make sure you have 'SPLIT_KEYBOARD = yes' in your rules.mk, and define SOFT_SERIAL_PIN.
 */
/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D0  // or D1, D2, D3, E6

/* Use I2C or Serial, not both */
#define USE_SERIAL
// #define USE_I2C

/* Select hand configuration */
#define MASTER_LEFT
// #define MASTER_RIGHT
#define EE_HANDS

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* ws2812 RGB LED */
//#define RGB_DI_PIN D3
//#define RGBLED_NUM 14    // Number of LEDs

//#define RGBLIGHT_SPLIT   // sync LEDs between RIGHT and LEFT hand

//#define RGBLIGHT_ANIMATIONS
//#define RGBLIGHT_HUE_STEP 8
//#define RGBLIGHT_SAT_STEP 8
//#define RGBLIGHT_VAL_STEP 8

/* number of backlight levels */
//#define BACKLIGHT_PIN B7
//#define BACKLIGHT_LEVELS 3
//#define BACKLIGHT_BREATHING

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

/* Bootmagic Lite key configuration */
//#define BOOTMAGIC_LITE_ROW 0
//#define BOOTMAGIC_LITE_COLUMN 0
