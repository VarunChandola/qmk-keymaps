/* Copyright 2023 Varun Chandola
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
#include "keymap.h"

enum my_keycodes {
  KC_EM = SAFE_RANGE
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [PRIMARY] = LAYOUT(
    KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                      KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS,
    KC_BSPC, KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_HOME,    KC_PGUP, KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_EQL ,
    KC_TAB , LCTL_T(KC_A), LALT_T(KC_S), LGUI_T(KC_D), LSFT_T(KC_F), KC_G, KC_END ,    KC_PGDN, KC_H   , RSFT_T(KC_J), RGUI_T(KC_K), RALT_T(KC_L), RCTL_T(KC_SCLN), KC_QUOT,
    KC_LCTL, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_DEL ,    RGB_TOG, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_ENT ,
                                         KC_LCTL,                                 KC_RCTL,
                                            KC_BSPC,                           KC_SPC ,
                                               KC_LGUI,                     KC_RALT,
                                                  KC_LSFT,               KC_RSFT,
                                      MO(NUMPAD),                                    MO(SYMBOL)
  ),

  [NUMPAD] = LAYOUT(
    _______, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, RGB_M_P,                      _______, KC_P7  , KC_P8  , KC_P9  , KC_PPLS, _______,
    _______, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, RGB_M_B, _______,    _______, _______, KC_P4  , KC_P5  , KC_P6  , KC_PAST, _______,
    _______, RGB_RMOD, _______, _______, _______, _______, _______,    _______, _______, KC_P1  , KC_P2  , KC_P3  , KC_PSLS, _______,
    _______, _______, _______, _______, _______, _______, _______,    _______, _______, KC_P0  , KC_P0  , KC_PDOT, KC_PEQL, _______,
                                         _______,                                 _______,
                                            _______,                           _______,
                                               _______,                     _______,
                                                  _______,               _______,
                                      _______,                                        MO(FUNL)
  ),

  [SYMBOL] = LAYOUT(
    KC_GRV , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                      KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 ,
    _______, KC_EXLM, KC_AT  , KC_LCBR, KC_RCBR, KC_PIPE, _______,    _______, KC_PGUP, KC_7   , KC_8   , KC_9   , KC_ASTR, KC_F12 ,
    _______, KC_HASH, KC_DLR , KC_LPRN, KC_RPRN, KC_GRV , _______,    _______, KC_PGDN, KC_4   , KC_5   , KC_6   , KC_PLUS, KC_PIPE,
    _______, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD, _______,    _______, KC_AMPR, KC_1   , KC_2   , KC_3   , KC_BSLS, _______,
                                         _______,                                 _______,
                                            _______,                           _______,
                                               _______,                     _______,
                                                  _______,               _______,
                                      MO(FUNL),                                        _______
  ),

  [FUNL] = LAYOUT(
    _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,                      RGB_M_P, RGB_M_B, RGB_M_R, KC_MPRV, KC_MPLY, KC_MNXT,
    _______, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPI, _______,    _______, _______, KC_VOLD, KC_VOLU, KC_MUTE, _______, _______,
    _______, _______, _______, _______, _______, _______, _______,    _______, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, _______, _______,
    QK_BOOT, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, _______,
                                         _______,                                 _______,
                                            _______,                           _______,
                                               _______,                     _______,
                                                  _______,               _______,
                                      _______,                                        _______
  )
};
// clang-format on 