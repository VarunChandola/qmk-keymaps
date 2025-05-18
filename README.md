# QMK Keymaps

This repository contains my personal QMK keyboard keymaps. These keymaps are designed to be used with the QMK firmware.

## Structure

```
keyboards/
└── [keyboard_name]/
    └── keymaps/
        └── [layout_name]/
            └── keymap.c
```

## Usage

1. Install QMK CLI tools:
   ```bash
   python3 -m pip install --user qmk
   ```

2. Build a keymap:
   ```bash
   qmk compile -kb [keyboard_name] -km [layout_name]
   ```

3. Flash a keymap:
   ```bash
   qmk flash -kb [keyboard_name] -km [layout_name]
   ```

## Keyboards

### Keebio Iris Rev 4
- Split keyboard with 6x4 keys per half
- Build command: `qmk compile -kb keebio/iris/rev4 -km varun`
- Flash command: `qmk flash -kb keebio/iris/rev4 -km varun`

### Keyboardio Model 01
- Split keyboard with 6x4 keys per half
- Build command: `qmk compile -kb keyboardio/model01 -km varun`
- Flash command: `qmk flash -kb keyboardio/model01 -km varun`

### OLKB Preonic Rev 3
- Ortholinear keyboard with 5x12 keys
- Build command: `qmk compile -kb olkb/preonic/rev3 -km varun`
- Flash command: `qmk flash -kb olkb/preonic/rev3 -km varun`

### Ferris Sweep
- Split keyboard with 3x6 keys per half
- Build command: `qmk compile -kb ferris -km varun`
- Flash command: `qmk flash -kb ferris -km varun`

## License

This project is licensed under the MIT License - see the LICENSE file for details.
