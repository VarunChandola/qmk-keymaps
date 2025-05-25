# Keyboardio Model 01 - Varun's Keymap

QMK keymap for the Keyboardio Model 01 with home row mods and Miryoku-inspired layout.

## Features

- **Home row mods**: GACS/CAGS (Ctrl, Alt, Gui, Shift)
- **RGB matrix controls**: Full LED customization
- **Layer consistency**: Matches my other keyboards (Iris, etc.)
- **Prog key**: Top left enters bootloader mode
- **Media controls**: Volume, playback in FUNL layer

## Layers

1. **PRIMARY**: QWERTY base with home row mods
2. **NUMPAD**: Numbers, symbols, navigation
3. **SYMBOL**: Special symbols, mouse controls  
4. **FUNL**: Function keys, media controls, RGB

## RGB Controls

Top row on each layer provides RGB controls:
- `QK_BOOT`: Bootloader mode
- `RGB_TOG`: Toggle on/off
- `RGB_MOD/RMOD`: Cycle modes
- `RGB_HUI/HUD`: Hue adjust
- `RGB_SAI/SAD`: Saturation adjust
- `RGB_VAI/VAD`: Brightness adjust
- `RGB_SPI/SPD`: Speed adjust

## Building

From repository root:

```bash
# Build only
./build.sh model01

# Build and flash
./build.sh model01 flash
```

The build script automatically:
- Copies keymap to QMK temporarily
- Builds firmware
- Cleans up files
- Keeps QMK submodule pristine

## Flashing

1. Put keyboard in bootloader mode (press Prog key)
2. Run: `./build.sh model01 flash`

## Layout Philosophy

This keymap maintains consistency with my other keyboards while leveraging the Model 01's unique features like the RGB matrix and thumb clusters. The home row mods provide efficient access to modifiers without leaving the home position. 