# Varun's Keyboardio Model 01 QMK Keymap

This keymap is a QMK conversion of my original Kaleidoscope keymap for the Keyboardio Model 01. The layout is designed to be consistent with my other keyboards (Iris rev 4, Preonic, and Ferris Sweep) that use a Miryoku-inspired design.

## Features

- Home row mods (GACS/CAGS: Ctrl, Alt, Gui, Shift)
- Layer organization similar to Miryoku
- Support for mouse keys
- Minimalist design focusing on ergonomics
- Dedicated Prog key (top left) for entering bootloader mode
- LED controls on top row of each layer
- Media controls in FUNL layer

## LED Controls

RGB LED controls are available on each layer's top row:

### PRIMARY Layer (Top Row)
- QK_BOOT: Enter bootloader mode
- RGB_TOG: Toggle RGB on/off
- RGB_MOD: Cycle through modes
- RGB_RMOD: Cycle through modes in reverse
- RGB_HUI: Hue increase
- RGB_HUD: Hue decrease
- RGB_SAI: Saturation increase
- RGB_SAD: Saturation decrease
- RGB_VAI: Value (brightness) increase
- RGB_VAD: Value (brightness) decrease
- RGB_SPI: Speed increase
- RGB_SPD: Speed decrease
- RGB_M_P: Set to plain mode
- RGB_M_B: Set to breathing mode

Similar LED controls are available on the top row of each layer, giving you consistent access to lighting customization regardless of which layer you're on.

## Media Controls

The FUNL layer includes media playback controls:
- Previous track (KC_MPRV)
- Volume down (KC_VOLD)
- Volume up (KC_VOLU)
- Next track (KC_MNXT)
- Play/Pause (KC_MPLY)
- Mute (KC_MUTE)

## Layers

1. **PRIMARY**: Base layer with QWERTY layout and home row mods
2. **NUMPAD**: Numbers, symbols, and navigation keys
3. **SYMBOL**: Special symbols and mouse controls
4. **FUNL**: Function keys and media controls

## Building and Flashing

### Setting Up QMK

This repository uses QMK as a Git submodule. Follow these steps to set it up properly:

1. **Clone the repository with submodules**:
   ```bash
   git clone --recursive https://github.com/yourusername/Keyboards.git
   ```

   If you've already cloned the repository without submodules, initialize the submodule:
   ```bash
   git submodule update --init --recursive
   ```

2. **Set up QMK environment**:

   You'll need to set up QMK properly before building:
   ```bash
   # Install QMK CLI
   python3 -m pip install qmk
   
   # Add Python bin directory to your PATH
   echo 'export PATH=$HOME/Library/Python/3.9/bin:$PATH' >> ~/.zshrc
   source ~/.zshrc  # Or restart your terminal
   
   # Initialize QMK
   cd qmk_firmware
   qmk setup
   ```

3. **Run the QMK doctor**:
   ```bash
   qmk doctor
   ```
   
   Fix any issues it reports before proceeding.

### Building with the Build Script

The included build script will handle copying your keymap to the QMK submodule and building it:

```bash
# From the repository root
./keyboards/keyboardio/model01/keymaps/varun/build.sh
```

### Building Manually

If the build script doesn't work, you can build manually:

1. Copy your keymap to the QMK directory:
   ```bash
   mkdir -p qmk_firmware/keyboards/keyboardio/model01/keymaps/varun
   cp -r keyboards/keyboardio/model01/keymaps/varun/* qmk_firmware/keyboards/keyboardio/model01/keymaps/varun/
   ```

2. Build using the QMK CLI:
   ```bash
   cd qmk_firmware
   qmk compile -kb keyboardio/model01 -km varun
   ```

3. Or build using make:
   ```bash
   cd qmk_firmware
   make keyboardio/model01:varun
   ```

### Flashing the Firmware

1. Put your keyboard into bootloader mode (press the Prog key or hold it during startup)
2. Flash the firmware:
   ```bash
   # Using the build script
   ./keyboards/keyboardio/model01/keymaps/varun/build.sh flash
   
   # Or using QMK CLI
   cd qmk_firmware
   qmk flash -kb keyboardio/model01 -km varun
   
   # Or using make
   cd qmk_firmware
   make keyboardio/model01:varun:flash
   ```

## Troubleshooting

### QMK Command Not Found

If you get a "command not found" error with qmk:

1. Check that you've installed the QMK CLI:
   ```bash
   python3 -m pip install qmk
   ```

2. Make sure the Python bin directory is in your PATH:
   ```bash
   # For macOS
   echo 'export PATH=$HOME/Library/Python/3.9/bin:$PATH' >> ~/.zshrc
   source ~/.zshrc
   ```

3. Verify QMK is installed:
   ```bash
   which qmk
   ```

### Build Fails with No Rule to Make Target

If you see an error like `No rule to make target 'keyboardio/model01:varun'`:

1. Make sure QMK is properly set up:
   ```bash
   cd qmk_firmware
   qmk setup
   ```

2. Check if the keyboard is supported in your QMK version:
   ```bash
   qmk list-keyboards | grep keyboardio
   ```

### Missing Dependencies

If you're missing dependencies for QMK:

```bash
cd qmk_firmware
util/qmk_install.sh
```

## Notes

This is a conversion from Kaleidoscope to QMK to maintain consistency with my other keyboards. The main differences are syntax-related, as both firmwares support similar concepts like home row mods and layer switching, but implement them differently. 