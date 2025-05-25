# Keebio Iris Rev3 - Varun's Keymap

Modified Miryoku layout for the Iris Rev3 with home row mods, multiple base layers, and productivity shortcuts.

Based on [Miryoku](https://github.com/manna-harbour/miryoku) but adapted for the Iris's unique layout.

## Features

- **Multiple base layers**: QWERTY and Colemak-DH
- **Home row mods**: LCTL/LGUI/LALT/LSFT (consistent across both hands)
- **Miryoku-inspired**: Navigation, mouse, symbol layers
- **Productivity shortcuts**: Apple dictation and Zoom mute on thumb keys
- **Rotary encoder**: Volume control
- **RGB underglow**: Full customization support

## Layers

1. **QWERTY**: Standard QWERTY base layer
2. **COLEMAK_DH**: Colemak Mod-DH alternative base
3. **NAVR**: Navigation (arrows, page up/down, home/end)
4. **MOUR**: Mouse control and scroll wheel
5. **NSL**: Numbers and symbols (left side)
6. **NSSL**: Numbers and symbols (right side)  
7. **FUNL**: Function keys, media, RGB controls

## Special Keys

- **Left inner thumb**: Apple dictation (Option+D)
- **Right inner thumb**: Zoom mute toggle (Cmd+Shift+A)
- **Encoder rotation**: Volume up/down
- **Layer taps on thumbs**: Access to navigation, mouse, number, and function layers

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
3. Flash both halves separately

## Layout Philosophy

This layout follows Miryoku principles while adapting to the Iris's 4x6+4 layout. The home row mods eliminate the need for dedicated modifier keys, and the layer system provides efficient access to all functions without stretching. The addition of productivity shortcuts (dictation and Zoom mute) makes it ideal for remote work and content creation.