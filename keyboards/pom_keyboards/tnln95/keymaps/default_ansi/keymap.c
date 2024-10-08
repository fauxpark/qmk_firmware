/* Copyright 2020 Nguyen Minh HOang

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

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _DEF,
    _FNC
};

#define CMD_COPY LCTL(KC_INS)
#define CMD_PASTE LSFT(KC_INS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_DEF] = LAYOUT_ansi(
    KC_PMNS, KC_PAST, KC_PSLS, KC_BSPC, KC_ESC,    KC_GRAVE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_EQUAL,     KC_BSPC,    KC_HOME,
    KC_PPLS, KC_P7,   KC_P8,   KC_P9, KC_NUM,          KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC,    KC_BSLS,       KC_PGUP,
             KC_P4,   KC_P5,   KC_P6, CMD_COPY,          KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOTE,       KC_ENTER,     KC_PGDN,
    KC_PENT, KC_P1,   KC_P2,   KC_P3, CMD_PASTE,           KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH,   KC_RSFT,     KC_UP, KC_END,
             KC_PDOT,    KC_P0,      KC_COMMA ,       KC_LCTL, KC_LGUI, KC_LALT,                KC_SPACE,              KC_RALT,   MO(_FNC),   KC_LEFT, KC_DOWN, KC_RIGHT
  ),
  [_FNC] = LAYOUT_ansi(
    _______, _______,   _______,   _______, _______,   _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,        KC_DEL,    KC_PSCR,
    _______, _______,   _______,   _______, _______,      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, UG_TOGG, UG_PREV,  UG_NEXT,     KC_INS,      KC_VOLU,
             _______,   _______,    _______, _______,       _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,         BL_TOGG,       KC_VOLD,
    _______, _______,   _______,   _______, _______,           _______, _______, _______, _______, _______, _______, _______, _______, BL_DOWN,BL_UP,  BL_BRTG,         _______,        _______, KC_MUTE,
             _______,       _______,        _______ ,       _______,   _______,   _______,                             _______,                      _______,     MO(_FNC),    _______, _______, _______
  )
};
