# Keebio Iris Rev4 - Varun's Keymap

Modified Miryoku layout for the Iris Rev4 with home row mods and multiple base layers.

Based on [Miryoku](https://github.com/manna-harbour/miryoku) but adapted for the Iris's unique layout.

## Features

- **Multiple base layers**: QWERTY and Colemak-DH
- **Home row mods**: GACS/CAGS (Ctrl, Alt, Gui, Shift)
- **Miryoku-inspired**: Navigation, mouse, symbol layers
- **Rotary encoder**: Volume control and RGB adjustment
- **RGB underglow**: Full customization support

## Layers

1. **QWERTY**: Standard QWERTY base layer
2. **COLEMAK_DH**: Colemak Mod-DH alternative base
3. **NAVR**: Navigation (arrows, page up/down, home/end)
4. **MOUR**: Mouse control and scroll wheel
5. **NSL**: Numbers and symbols (left side)
6. **NSSL**: Numbers and symbols (right side)  
7. **FUNL**: Function keys, media, RGB controls

## Encoder Functions

- **Default**: Volume up/down
- **With layer mods**: RGB hue/brightness adjustment

## Building

From repository root:

```bash
# Build only
./build.sh iris

# Build and flash
./build.sh iris flash
```

## Flashing

1. Put keyboard in bootloader mode (press reset button)
2. Run: `./build.sh iris flash`

## Layout Philosophy

This layout follows Miryoku principles while adapting to the Iris's 4x6+4 layout. The home row mods eliminate the need for dedicated modifier keys, and the layer system provides efficient access to all functions without stretching.