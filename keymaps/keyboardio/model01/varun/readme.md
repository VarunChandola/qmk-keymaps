# Keyboardio Model 01 - Varun's Keymap

QMK keymap for the Keyboardio Model 01 with home row mods, Miryoku-inspired layout, and productivity shortcuts.

## Features

- **Home row mods**: LCTL/LGUI/LALT/LSFT (consistent with Iris)
- **Palm key shortcuts**: Apple dictation and Zoom mute
- **Layer consistency**: Matches Iris layout structure
- **Thumb clusters**: Layer taps for navigation, mouse, numbers, functions
- **Prog key**: Top left enters bootloader mode

## Layers

1. **PRIMARY**: QWERTY base with home row mods
2. **NAVR**: Navigation (arrows, page up/down, home/end)
3. **MOUR**: Mouse control and scroll wheel
4. **NSL**: Numbers and symbols (left side)
5. **NSSL**: Numbers and symbols (right side)
6. **FUNL**: Function keys, media controls

## Special Keys

- **Left palm key**: Apple dictation (Option+D)
- **Right palm key**: Zoom mute toggle (Cmd+Shift+A)
- **Thumb clusters**: Layer taps matching Iris layout
  - LT(NAVR, KC_ENT): Navigation layer + Enter
  - LT(MOUR, KC_TAB): Mouse layer + Tab
  - LT(NSL, KC_SPC): Number/Symbol layer + Space
  - LT(NSSL, KC_BSPC): Shifted symbols + Backspace
  - LT(FUNL, KC_DEL): Function layer + Delete

## Building

From repository root:

```bash
# Build only
./build.sh model01

# Build and flash
./build.sh model01 flash
```

## Flashing

1. Put keyboard in bootloader mode (press Prog key)
2. Run: `./build.sh model01 flash`

## Layout Philosophy

This keymap maintains consistency with the Iris Rev3 layout while leveraging the Model 01's unique features like palm keys and thumb clusters. The home row mods provide efficient access to modifiers, and the layer structure matches the Iris for seamless switching between keyboards. The addition of productivity shortcuts makes it ideal for remote work and content creation. 