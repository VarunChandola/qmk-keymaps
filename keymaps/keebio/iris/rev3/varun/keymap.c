/* Copyright 2015-2017 Jack Humbert
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[QWERTY] = LAYOUT(
  KC_NP, DF(QWERTY),   DF(COLEMAK_DH), KC_NP,             KC_NP,             KC_NP,                              KC_NP,             KC_NP,             KC_NP,             KC_NP,          KC_NP,          KC_RST,
  KC_NP, KC_Q,          KC_W,          KC_E,              KC_R,              KC_T,                               KC_Y,              KC_U,              KC_I,              KC_O,           KC_P,            KC_NP,
  KC_NP, LCTL_T(KC_A),  LGUI_T(KC_S),  LALT_T(KC_D),      LSFT_T(KC_F),      LT(FUNL, KC_G),                     LT(FUNL, KC_H),    LSFT_T(KC_J),      LALT_T(KC_K),      LGUI_T(KC_L),   LCTL_T(KC_QUOTE),KC_NP,
  KC_EM, KC_Z,          ALGR_T(KC_X),  KC_C,              KC_V,              KC_B,          LALT(KC_D),  LGUI(LSFT(KC_A)),   KC_N,              KC_M,              KC_COMM,           ALGR_T(KC_DOT), KC_SLSH,         KC_NP,
                                            KC_ESC,   LT(NAVR, KC_ENT),  LT(MOUR, KC_TAB),                   LT(NSL, KC_SPC),   LT(NSSL, KC_BSPC), LT(FUNL, KC_DEL)
),

[COLEMAK_DH] = LAYOUT(
  KC_NP, DF(QWERTY),   DF(COLEMAK_DH), KC_NP,             KC_NP,             KC_NP,                              KC_NP,             KC_NP,             KC_NP,             KC_NP,          KC_NP,         KC_RST,
  KC_NP, KC_Q,          KC_W,          KC_F,              KC_P,              KC_B,                               KC_J,              KC_L,              KC_U,              KC_Y,           KC_QUOTE,      KC_NP,
  KC_NP, LCTL_T(KC_A),  LGUI_T(KC_R),  LALT_T(KC_S),      LSFT_T(KC_T),      LT(FUNL, KC_G),                     LT(FUNL, KC_H),    LSFT_T(KC_N),      LALT_T(KC_E),      LGUI_T(KC_I),   LCTL_T(KC_O),  KC_NP,
  KC_NP, KC_Z,          ALGR_T(KC_X),  KC_C,              KC_D,              KC_V,            KC_NP,  KC_NP,     KC_K,              KC_H,              KC_COMM,           ALGR_T(KC_DOT), KC_SLSH,       KC_NP,
                                            KC_ESC,  LT(NAVR, KC_ENT),  LT(MOUR, KC_TAB),                   LT(NSL, KC_SPC),   LT(NSSL, KC_BSPC), LT(FUNL, KC_DEL)
),

[NAVR] = LAYOUT(
  KC_NP,  KC_NP,            KC_NP,         KC_NP,         KC_NP,        KC_NP,                  KC_NP,   KC_NP,   KC_NP,   KC_NP,   KC_NP,    KC_NP,
  KC_NP,  KC_LBRC,          KC_7,          KC_8,          KC_9,         KC_RBRC,                KC_AGIN, KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE,  KC_NP,
  KC_NP,  LCTL_T(KC_SCLN),  LGUI_T(KC_4),  LALT_T(KC_5),  LSFT_T(KC_6), KC_EQL,                 KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,  KC_NP,
  KC_NP,  KC_GRV,           KC_1,          KC_2,          KC_3,         KC_BSLS, KC_NP,  KC_NP, KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,   KC_NP,
                                           KC_DOT,        KC_0,         KC_MINS,                KC_ENT,  KC_BSPC, KC_DEL
),

[MOUR] = LAYOUT(
  KC_NP,  KC_NP,           KC_NP,          KC_NP,          KC_NP,          KC_NP,                   KC_NP,   KC_NP,   KC_NP,   KC_NP,   KC_NP,    KC_NP,
  KC_NP,  KC_F12,          KC_F7,          KC_F8,          KC_F9,          KC_PSCR,                 KC_NU,   KC_NU,   KC_NU,   KC_NU,   KC_NU,    KC_NP,
  KC_NP,  LCTL_T(KC_F11),  LGUI_T(KC_F4),  LALT_T(KC_F5),  LSFT_T(KC_F6),  KC_SCRL,                 KC_NU,   KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,  KC_NP,  
  KC_NP,  KC_F10,          KC_F1,          KC_F2,          KC_F3,          KC_PAUS, KC_NP,  KC_NP,  KC_NU,   KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,  KC_NP, 
                                            KC_APP,         KC_SPC,         KC_TAB,                 KC_BTN1, KC_BTN3, KC_BTN2
),

[MBO] = LAYOUT(
  KC_NP,  KC_NP,   KC_NP,   KC_NP,   KC_NP,   KC_NP,                   KC_NP,   KC_NP,   KC_NP,   KC_NP,   KC_NP,   KC_NP,
  KC_NP,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NP,
  KC_NP,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NP,
  KC_NP,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NP,  KC_NP,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NP,
                            KC_TRNS, KC_TRNS, KC_TRNS,                 KC_BTN1, KC_BTN3, KC_BTN2
),

[MEDR] = LAYOUT(
  KC_NP,  KC_NP,   KC_NP,   KC_NP,   KC_NP,   KC_NP,                   KC_NP,   KC_NP,   KC_NP,   KC_NP,   KC_NP,   KC_NP,
  KC_NP,  KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,                 KC_TOG,  KC_MOD,  KC_HUI,  KC_SAI,  KC_VAI,  KC_NP,
  KC_NP,  KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS,                 KC_NU,   KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_NP,
  KC_NP,  KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, KC_NP,  KC_NP,  KC_NU,   KC_NU,   KC_NU,   KC_NU,   KC_NU,   KC_NP,
                            KC_GT,   KC_RPRN, KC_UNDS,                 KC_MSTP, KC_MPLY, KC_MUTE
),

[FUNL] = LAYOUT(
  KC_NP,  KC_NP,   KC_NP,   KC_NP,   KC_NP,   KC_NP,                   KC_NP,   KC_NP,   KC_NP,   KC_NP,   KC_NP,   KC_NP,
  KC_NP,  KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR,                 KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_RST,  KC_NP,
  KC_NP,  KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SCRL,                 KC_NA,   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NP,
  KC_NP,  KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS, KC_NP,  KC_NP,  KC_NA,   KC_NA,   KC_NA,   KC_TRNS, KC_NA,   KC_NP,
                            KC_APP,  KC_ESC,  KC_TAB,                  KC_NA,   KC_NA,   KC_NA
),

[NSL] = LAYOUT(
  KC_NP,  KC_NP,   KC_NP,   KC_NP,   KC_NP,   KC_NP,                   KC_NP,   RGB_VAI, RGB_SAI, RGB_HUI,    RGB_MODE_FORWARD, RGB_TOG,
  KC_NP,  KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC,                 KC_NA,   KC_NA,   KC_NA,   KC_NA,      KC_NA,            KC_NP,
  KC_NP,  KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,                  KC_NA,   KC_LSFT, KC_LCTL, KC_LALT,    KC_LGUI,          KC_NP,
  KC_NP,  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS, KC_NP,  KC_NP,  KC_NA,   KC_NA,   KC_TRNS,   KC_TRNS,  KC_TRNS,          KC_NP,
                            KC_DOT,  KC_0,    KC_MINS,                 KC_NA,   KC_NA,   KC_NA
),

[NSSL] = LAYOUT(
  KC_NP,  KC_NP,   KC_NP,   KC_NP,   KC_NP,   KC_NP,                   KC_NP,   KC_NP,   KC_NP,   KC_NP,   KC_NP,   KC_NP,
  KC_NP,  KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,                 KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_RST,  KC_NP,
  KC_NP,  KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS,                 KC_NA,   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NP,
  KC_NP,  KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, KC_NP,  KC_NP,  KC_NA,   KC_NA,   KC_NA,   KC_ALGR, KC_NA,   KC_NP,
                            KC_GT,   KC_RPRN, KC_UNDS,                 KC_NA,   KC_NA,   KC_NA 
)};

#if defined(ENCODER_MAP_ENABLE)

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [QWERTY] =   { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [COLEMAK_DH] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [MBO] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [MEDR] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [NAVR] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [MOUR] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD) }, // Mode
    [NSSL] =  { ENCODER_CCW_CW(RGB_VAI, RGB_VAD) }, // Brightness
    [NSL] =  { ENCODER_CCW_CW(RGB_HUI, RGB_HUD) }, // Color
    [FUNL] = { ENCODER_CCW_CW(RGB_SAI, RGB_SAD) }, // Saturation
};

#endif

// const rgblight_segment_t PROGMEM _lr[] = RGBLIGHT_LAYER_SEGMENTS( {3, 1, HSV_GREEN}, {8, 2, HSV_GREEN} );
// const rgblight_segment_t PROGMEM _history[] = RGBLIGHT_LAYER_SEGMENTS( {0, 12, HSV_GREEN} );
// const rgblight_segment_t PROGMEM _window_switch[] = RGBLIGHT_LAYER_SEGMENTS( {0, 12, HSV_RED} );
// const rgblight_segment_t PROGMEM _search[] = RGBLIGHT_LAYER_SEGMENTS( {0, 12, HSV_BLUE} );

// const rgblight_segment_t* const PROGMEM _rgb_layers[] =
//     RGBLIGHT_LAYERS_LIST( _lr, _history, _window_switch, _search );

// void keyboard_post_init_user(void) {
//     rgblight_layers = _rgb_layers;
// }

// // enum encoder_mode {
// //   EM_LR = 0,
// //   EM_HISTORY,
// //   EM_WINDOW_SWITCH,
// //   EM_SEARCH
// // };

// int _encoderMode = 0;
// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   switch (keycode) {
//     case KC_EM:
//       if (record->event.pressed) {
//         _encoderMode += 1;
//         _encoderMode %= 4;
//         rgblight_blink_layer(_encoderMode, 500);
//       }
//       return false; // Skip all further processing of this key
//     default:
//       return true; // Process all other keycodes normally
//   }
// }

// void scroll(bool up) {
//   if (up) {
//     tap_code16(KC_WH_U);
//   } else {
//     tap_code16(KC_WH_D);
//   }
// }

// // void scrub_history(bool backwards) {
// //   if (backwards) {
// //     tap_code16(G(KC_Z));
// //   } else {
// //     tap_code16(G(S(KC_Z)));
// //   }
// // }

// // void search(bool backwards) {
// //   if (backwards) {
// //     tap_code16(G(S(KC_G)));
// //   } else {
// //     tap_code16(G(KC_G));
// //   }
// // }

// // void cycle_window(bool backwards) {
// //   if (backwards) {
// //     tap_code16(G(S(KC_TILD)));
// //   } else {
// //     tap_code16(G(KC_TILD));
// //   }
// // }

// /* The encoder_update_user is a function.
//  * It'll be called by QMK every time you turn the encoder.
//  *
//  * The index parameter tells you which encoder was turned. If you only have
//  * one encoder, the index will always be zero.
//  * 
//  * The clockwise parameter tells you the direction of the encoder. It'll be
//  * true when you turned the encoder clockwise, and false otherwise.
//  */
bool encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) { /* First encoder */
    if (clockwise) {
      tap_code(KC_VOLD);
    } else {
      tap_code(KC_VOLU);
    }
  }
  return false;
}

// Handle encoder button press - this function is called when encoder is clicked
void encoder_button_press(uint8_t index) {
    if (index == 0) {
        tap_code16(LGUI(LSFT(KC_A))); // Cmd+Shift+A for Zoom mute
    }
}

// Handle encoder button press
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // Handle encoder click if you have a specific keycode for it
    // This depends on your specific encoder setup
    return true;
}