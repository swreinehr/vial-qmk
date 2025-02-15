/* Copyright 2021 knighting
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
#define ____ KC_TRNS
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [0] = LAYOUT_all(
        KC_GRV,  KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,  KC_9,  KC_0,   KC_MINS, KC_EQL, KC_PIPE , KC_NO, KC_HOME,
        KC_TAB,     KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,  KC_O,  KC_P,  KC_BSPC, KC_LBRC,  KC_RBRC,     KC_PGUP, 
        KC_CAPS,      KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,  KC_L,  KC_SCLN, KC_QUOT,        KC_ENT    , KC_PGDN,
        KC_LSFT,         KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M,KC_COMM, KC_DOT,  KC_SLSH, KC_ENT      , KC_UP  , 
        KC_LCTL,   KC_LALT,    KC_SPC,            MO(2),        MO(1),              KC_LGUI, MO(3),     KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT_all(
        ____,  ____,  ____,  ____,  ____,  ____,  ____,  ____,  ____,  ____,  ____,  ____,  ____, ____,  ____, ____, 
        KC_PGUP,    KC_HOME, KC_UP,   KC_END,   ____, ____, ____, KC_7, KC_8, KC_9, ____, KC_DEL,     ____, ____, ____,
	KC_PGDN,       KC_LEFT, KC_DOWN, KC_RIGHT, ____, ____, ____, KC_4, KC_5, KC_6, ____, ____,             ____, ____,
        ____,               ____, ____, KC_PSCR, ____, ____, KC_0, KC_1, KC_2, KC_3, ____, ____,       ____, 
        ____,       ____,       ____,  ____,            ____,       ____,            ____,            ____,  ____, ____
    ),
    [2] = LAYOUT_all(
        ____,  ____,  ____,  ____,  ____,  ____,  ____,  ____,  ____,  ____,  ____,  ____,  ____, ____,  ____, ____, 
        KC_GRV,       KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,  KC_DEL,        ____, ____, ____,
        ____,           ____, ____, ____, ____, ____, ____, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, ____, ____,
        ____,             ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,      ____,        ____, 
        ____,       ____,       ____,  ____,            ____,       ____,            ____,       ____,  ____, ____
    ),
    [3] = LAYOUT_all(
        ____,  ____,  ____,  ____,  ____,  ____,  ____,  ____,  ____,  ____,  ____,  ____,  ____, ____,  ____, ____, 
        ____,    ____,  ____,  ____,  ____,  ____, ____, KC_F1, KC_F2, KC_F3, KC_F4, ____, ____, ____, ____,
        ____,      ____,  ____, ____,   ____, ____,  ____, KC_F5, KC_F6, KC_F7, KC_F8, ____, ____, ____,
        ____,         ____, ____, ____, ____, ____,   ____, KC_F9, KC_F10, KC_F11, KC_F12, ____, ____, 
        RESET,____,       ____,  ____,            ____,       ____,            ____,       ____,  ____, ____
    )
};
