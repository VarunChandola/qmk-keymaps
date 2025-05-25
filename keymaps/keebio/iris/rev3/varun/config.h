#pragma once

#define MASTER_LEFT
#define RGBLIGHT_ANIMATIONS
// #define RGBLIGHT_MODE_TWINKLE
// #define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_TWINKLE
// #undef RGBLIGHT_EFFECT_CHRISTMAS
// #undef RGBLIGHT_EFFECT_RGB_TEST
// #define RGBLIGHT_MODE_STATIC_LIGHT
// #define RGBLIGHT_MODE_BREATHING
// #define RGBLIGHT_MODE_RAINBOW_MOOD
// #define RGBLIGHT_MODE_RAINBOW_SWIRL
// #define RGBLIGHT_MODE_SNAKE
// #define RGBLIGHT_MODE_KNIGHT
// #define RGBLIGHT_MODE_STATIC_GRADIENT

// Synchronization functionality for split keyboard
#define RGBLIGHT_SPLIT
// RGB lighting will be switched off when the host goes to sleep
#define RGBLIGHT_SLEEP

#define RGBLIGHT_LAYERS
#define RGBLIGHT_LAYER_BLINK

// default but important
#define TAPPING_TERM 200

// This makes tap and hold keys (like Mod Tap) work better when typing tast
#define PERMISSIVE_HOLD 

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Recommended for heavy chording.
#define QMK_KEYS_PER_SCAN 4

#undef TAPPING_TOGGLE
#define TAPPING_TOGGLE 2

// Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY          0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL       16
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY    0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED      6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX    64

// // Space saving
// #define NO_ACTION_ONESHOT
// #define NO_ACTION_TAPPING
// #define NO_MUSIC_MODE
// // Limit to 8 layers
// #define LAYER_STATE_8BIT
