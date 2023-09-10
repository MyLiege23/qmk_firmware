/*
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
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

#include QMK_KEYBOARD_H

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
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#define ENABLE_RGB_MATRIX_DUAL_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#define ENABLE_RGB_MATRIX_RAINDROPS
#define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#define ENABLE_RGB_MATRIX_HUE_BREATHING
#define ENABLE_RGB_MATRIX_HUE_PENDULUM
#define ENABLE_RGB_MATRIX_HUE_WAVE
#define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
#define ENABLE_RGB_MATRIX_PIXEL_FLOW
#define ENABLE_RGB_MATRIX_PIXEL_RAIN
#define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#define ENABLE_RGB_MATRIX_DIGITAL_RAIN
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#define ENABLE_RGB_MATRIX_MULTISPLASH
#define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_split_4x6_5(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_DEL,
                             //-------------------------------------------------//-----------------------------------------------------------//
                             KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_MINS,
                             //-------------------------------------------------//-----------------------------------------------------------//
                             KC_BSPC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
                             //-------------------------------------------------//-----------------------------------------------------------//
                             KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_BSLS,
                             //-------------------------------------------------//-----------------------------------------------------------//
                             MO(1), KC_LGUI, KC_LCTL, KC_ENT, KC_SPC, MO(2), KC_LALT, KC_LSFT, KC_DEL, KC_RALT),

    [1] = LAYOUT_split_4x6_5(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
                             //---------------------------------------------------------//-----------------------------------------------------------//
                             KC_TRNS, KC_SCLN, KC_AMPR, KC_ASTR, KC_TILD, KC_LBRC, KC_RBRC, KC_P7, KC_P8, KC_P9, KC_PSLS, KC_PAST,
                             //---------------------------------------------------------//-----------------------------------------------------------//
                             KC_TRNS, KC_GRV, KC_DLR, KC_PERC, KC_CIRC, KC_LPRN, KC_RPRN, KC_P4, KC_P5, KC_P6, KC_PEQL, KC_PMNS,
                             //---------------------------------------------------------//-----------------------------------------------------------//
                             KC_TRNS, KC_TRNS, KC_EXLM, KC_AT, KC_HASH, KC_TRNS, KC_P0, KC_P1, KC_P2, KC_P3, KC_PDOT, KC_PPLS,
                             //---------------------------------------------------------//-----------------------------------------------------------//
                             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

    [2] = LAYOUT_split_4x6_5(KC_BRID, KC_BRIU, RGB_VAD, RGB_VAI, KC_TRNS, KC_PSCR, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU,
                             //---------------------------------------------------------//--------------------------------------------------------------//
                             KC_TRNS, KC_TRNS, RGB_SAI, RGB_HUI, RGB_MOD, KC_TRNS, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_SCLN, KC_DEL,
                             //---------------------------------------------------------//--------------------------------------------------------------//
                             KC_TRNS, KC_TRNS, RGB_SAD, RGB_HUD, RGB_RMOD, KC_TRNS, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_RCTL, KC_DEL,
                             //---------------------------------------------------------//--------------------------------------------------------------//
                             KC_TRNS, KC_TRNS, KC_TRNS, RGB_TOG, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL,
                             //---------------------------------------------------------//--------------------------------------------------------------//
                             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

