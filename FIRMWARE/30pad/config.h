/* Copyright 2024 Juarendra Ramadhani <jrjuarendra@gmail.com>
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

//#include "config_common.h"
#define MATRIX_ROWS  3
#define MATRIX_COLS  10

#define WEAR_LEVELING_LOGICAL_SIZE 4096
#define WEAR_LEVELING_BACKING_SIZE 8192
#define DYNAMIC_KEYMAP_MACRO_COUNT 32

#define MIDI_ADVANCED

// wiring of each half
#define MATRIX_ROW_PINS       { B14, B13, B15}
#define MATRIX_COL_PINS       { B5, B6, B7, B8, B9, A0, A1, A2, A3, A4 } 

#define DIODE_DIRECTION COL2ROW

#define TAP_CODE_DELAY  10
/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */

#define BACKLIGHT_PIN A6
#define BACKLIGHT_LEVELS 3
#define BACKLIGHT_PWM_CHANNEL 1 
#define BACKLIGHT_PWM_DRIVER PWMD5