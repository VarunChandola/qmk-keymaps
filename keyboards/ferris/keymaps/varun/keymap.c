#include QMK_KEYBOARD_H

// Layer definitions
enum layers {
    BASE,
    NUMBERS,
    SYMBOLS,
    FUNCTION
};

// Layer names
#define BASE 0
#define NUMBERS 1
#define SYMBOLS 2
#define FUNCTION 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
                          KC_LCTL, KC_LGUI, KC_LALT, KC_SPC,  KC_ENT,  KC_BSPC, KC_DEL,  KC_ESC
    ),

    [NUMBERS] = LAYOUT(
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
        KC_TAB,  KC_GRV,  KC_MINS, KC_EQL,  KC_BSLS, KC_LBRC, KC_RBRC, KC_QUOT, KC_SCLN, KC_BSLS,
        KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_SPC,  KC_SPC,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
                          _______, _______, _______, _______, _______, _______, _______, _______
    ),

    [SYMBOLS] = LAYOUT(
        KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
        KC_TILD, KC_GRV,  KC_UNDS, KC_PLUS, KC_PIPE, KC_LCBR, KC_RCBR, KC_DQUO, KC_COLN, KC_BSLS,
        KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_SPC,  KC_SPC,  KC_LT,   KC_GT,   KC_QUES, KC_SLSH,
                          _______, _______, _______, _______, _______, _______, _______, _______
    ),

    [FUNCTION] = LAYOUT(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
        KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,
        KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_SPC,  KC_SPC,  KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,
                          _______, _______, _______, _______, _______, _______, _______, _______
    )
};

// Layer switching
const uint16_t PROGMEM layer_switch[] = {
    [BASE] = MO(NUMBERS),
    [NUMBERS] = MO(SYMBOLS),
    [SYMBOLS] = MO(FUNCTION),
    [FUNCTION] = MO(BASE)
}; 