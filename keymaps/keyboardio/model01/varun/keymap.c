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
    KC_TAB , LCTL_T(KC_A), LGUI_T(KC_S), LALT_T(KC_D), LSFT_T(KC_F), KC_G, KC_END ,    KC_PGDN, KC_H   , RSFT_T(KC_J), RALT_T(KC_K), RGUI_T(KC_L), RCTL_T(KC_QUOT), KC_SCLN,
    KC_LCTL, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_DEL ,    RGB_TOG, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_ENT ,
                                         KC_ESC,                                 LT(NSSL, KC_BSPC),
                                            LT(NAVR, KC_ENT),                  LT(NSL, KC_SPC),
                                               LT(MOUR, KC_TAB),            LT(FUNL, KC_DEL),
                                                  KC_LSFT,               KC_RSFT,
                                      LALT(KC_D),                                    LGUI(LSFT(KC_A))
  ),

  [NAVR] = LAYOUT(
    _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
    _______, KC_LBRC, KC_7   , KC_8   , KC_9   , KC_RBRC, _______,    _______, KC_AGIN, KC_UNDO, KC_CUT , KC_COPY, KC_PSTE, _______,
    _______, LCTL_T(KC_SCLN), LGUI_T(KC_4), LALT_T(KC_5), LSFT_T(KC_6), KC_EQL, _______,    _______, KC_CAPS, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, _______,
    _______, KC_GRV , KC_1   , KC_2   , KC_3   , KC_BSLS, _______,    _______, KC_INS , KC_HOME, KC_PGDN, KC_PGUP, KC_END , _______,
                                         KC_0,                                    KC_ENT,
                                            KC_DOT,                            KC_BSPC,
                                               KC_MINS,                       KC_DEL,
                                                  _______,               _______,
                                      _______,                                        _______
  ),

  [MOUR] = LAYOUT(
    _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
    _______, KC_F12 , KC_F7  , KC_F8  , KC_F9  , KC_PSCR, _______,    _______, _______, _______, _______, _______, _______, _______,
    _______, LCTL_T(KC_F11), LGUI_T(KC_F4), LALT_T(KC_F5), LSFT_T(KC_F6), KC_SCRL, _______,    _______, _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______,
    _______, KC_F10 , KC_F1  , KC_F2  , KC_F3  , KC_PAUS, _______,    _______, _______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, _______,
                                         KC_APP,                                 KC_BTN1,
                                            KC_SPC,                            KC_BTN3,
                                               KC_TAB,                        KC_BTN2,
                                                  _______,               _______,
                                      _______,                                        _______
  ),

  [NSL] = LAYOUT(
    _______, _______, _______, _______, _______, _______,                      _______, RGB_VAI, RGB_SAI, RGB_HUI, RGB_MOD, RGB_TOG,
    _______, KC_LBRC, KC_7   , KC_8   , KC_9   , KC_RBRC, _______,    _______, _______, _______, _______, _______, _______, _______,
    _______, KC_SCLN, KC_4   , KC_5   , KC_6   , KC_EQL , _______,    _______, _______, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, _______,
    _______, KC_GRV , KC_1   , KC_2   , KC_3   , KC_BSLS, _______,    _______, _______, _______, _______, _______, _______, _______,
                                         KC_0,                                 _______,
                                            KC_MINS,                            _______,
                                               KC_DOT,                       _______,
                                                  _______,               _______,
                                      _______,                                        _______
  ),

  [NSSL] = LAYOUT(
    _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
    _______, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, _______,    _______, _______, _______, _______, _______, QK_BOOT, _______,
    _______, KC_COLN, KC_DLR , KC_PERC, KC_CIRC, KC_PLUS, _______,    _______, _______, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, _______,
    _______, KC_TILD, KC_EXLM, KC_AT  , KC_HASH, KC_PIPE, _______,    _______, _______, _______, _______, KC_ALGR, _______, _______,
                                         KC_RPRN,                                  _______,
                                            KC_UNDS,                           _______,
                                               KC_GT,                       _______,
                                                  _______,               _______,
                                      _______,                                        _______
  ),

  [NUMPAD] = LAYOUT(
    _______, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, RGB_M_P,                      _______, KC_P7  , KC_P8  , KC_P9  , KC_PPLS, _______,
    _______, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, RGB_M_B, _______,    _______, _______, KC_P4  , KC_P5  , KC_P6  , KC_PAST, _______,
    _______, RGB_RMOD, _______, _______, _______, _______, _______,    _______, _______, KC_P1  , KC_P2  , KC_P3  , KC_PSLS, _______,
    _______, _______, _______, _______, _______, _______, _______,    _______, _______, KC_P0  , KC_P0  , KC_PDOT, KC_PEQL, _______,
                                         _______,                                 _______,
                                            _______,                           _______,
                                               _______,                       _______,
                                                  _______,               _______,
                                      _______,                                        _______
  ),

  [SYMBOL] = LAYOUT(
    KC_GRV , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                      KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 ,
    _______, KC_EXLM, KC_AT  , KC_LCBR, KC_RCBR, KC_PIPE, _______,    _______, KC_PGUP, KC_7   , KC_8   , KC_9   , KC_ASTR, KC_F12 ,
    _______, KC_HASH, KC_DLR , KC_LPRN, KC_RPRN, KC_GRV , _______,    _______, KC_PGDN, KC_4   , KC_5   , KC_6   , KC_PLUS, KC_PIPE,
    _______, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD, _______,    _______, KC_AMPR, KC_1   , KC_2   , KC_3   , KC_BSLS, _______,
                                         _______,                                 _______,
                                            _______,                           _______,
                                               _______,                       _______,
                                                  _______,               _______,
                                      _______,                                        _______
  ),

  [FUNL] = LAYOUT(
    _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
    _______, KC_F12 , KC_F7  , KC_F8  , KC_F9  , KC_PSCR, _______,    _______, _______, _______, _______, _______, QK_BOOT, _______,
    _______, KC_F11 , KC_F4  , KC_F5  , KC_F6  , KC_SCRL, _______,    _______, _______, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, _______,
    _______, KC_F10 , KC_F1  , KC_F2  , KC_F3  , KC_PAUS, _______,    _______, _______, _______, _______, _______, _______, _______,
                                         KC_APP,                                 _______,
                                            KC_ESC,                            _______,
                                               KC_TAB,                        _______,
                                                  _______,               _______,
                                      _______,                                        _______
  )
};
// clang-format on 