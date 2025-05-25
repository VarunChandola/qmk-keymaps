#pragma once

#include QMK_KEYBOARD_H

#define XXXXXXX KC_NO // key is not present
#define KC_NA KC_NO // present but not available for use
#define KC_NU KC_NO // available but not used

#define MC_SAVE LCTL(KC_S)
#define MC_SLCT LCTL(KC_A)
#define MC_UNDO LCTL(KC_Z)
#define MC_CUT LCTL(KC_X)
#define MC_COPY LCTL(KC_C)
#define MC_PASTE LCTL(KC_V)
#define MC_FIND LCTL(KC_F)

// Layer definitions matching the Iris layout
enum layers { PRIMARY, NAVR, MOUR, NSL, NSSL, NUMPAD, SYMBOL, FUNL }; 