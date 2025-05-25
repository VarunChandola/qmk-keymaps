#pragma once

#include QMK_KEYBOARD_H

#define KC_NP KC_NO // key is not present
#define KC_NA KC_NO // present but not available for use
#define KC_NU KC_NO // available but not used

#define MC_SAVE LCTL(KC_S)
#define MC_SLCT LCTL(KC_A)
#define MC_UNDO LCTL(KC_Z)
#define MC_CUT LCTL(KC_X)
#define MC_COPY LCTL(KC_C)
#define MC_PASTE LCTL(KC_V)
#define MC_FIND LCTL(KC_F)

#define KC_BSPC_WD LALT(KC_BSPC)
//#define KC_FRST_GUI LT(_FIRST,KC_LGUI)
#define KC_A_MS LT(_SECOND,KC_A)
#define KC_LFT_SPC LT(_LEFT,KC_SPC)
#define KC_RGHT_SPC LT(_RIGHT,KC_SPC)
#define KC_RSFT_ENT RSFT_T(KC_ENT)

// non-KC_ keycodes
#define KC_RST QK_BOOT
#define KC_TOG RGB_TOG
#define KC_MOD RGB_MOD
#define KC_HUI RGB_HUI
#define KC_SAI RGB_SAI
#define KC_VAI RGB_VAI

enum layers { QWERTY, COLEMAK_DH, MBO, MEDR, NAVR, MOUR, NSSL, NSL, FUNL };