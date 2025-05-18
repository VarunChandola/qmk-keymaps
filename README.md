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

[List your keyboards here as you add them]

## License

This project is licensed under the MIT License - see the LICENSE file for details.
