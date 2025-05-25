# QMK Keymaps

Personal QMK keyboard keymaps with a clean build system and QMK submodule for easy maintenance.

## 🚀 Quick Start

```bash
# Build Model 01
./build.sh model01

# Build and flash Iris Rev3
./build.sh iris flash
```

## 📁 Structure

```
├── keymaps/                    # Source keymaps (organized by manufacturer)
│   ├── keyboardio/model01/varun/
│   └── keebio/iris/rev3/varun/
├── qmk_firmware/               # QMK submodule (never modified)
├── build.sh                   # Consolidated build script
└── README.md
```

## 🔨 Build System

The consolidated build script:
- Temporarily copies files to QMK
- Builds the firmware
- Cleans up automatically
- Keeps QMK submodule pristine

### Usage

```bash
./build.sh [keyboard] [flash]
```

**Examples:**
```bash
./build.sh model01       # Build Keyboardio Model 01
./build.sh model01 flash # Build and flash Model 01
./build.sh iris          # Build Keebio Iris Rev3  
./build.sh iris flash    # Build and flash Iris
```

## ⌨️ Keyboards

### Keyboardio Model 01
- **Layout**: Split ergonomic with 64 keys
- **Features**: Home row mods, palm keys for dictation/Zoom mute
- **Build**: `./build.sh model01`
- **Layers**: PRIMARY, NAVR, MOUR, NSL, NSSL, FUNL

### Keebio Iris Rev3
- **Layout**: Split 60% with 56 keys + rotary encoder
- **Features**: Home row mods, RGB underglow, encoder controls, dictation/Zoom mute
- **Build**: `./build.sh iris`
- **Layers**: QWERTY, COLEMAK_DH, NAVR, MOUR, NSL, NSSL, FUNL

## 🔧 Setup

1. **Clone with submodules:**
   ```bash
   git clone --recursive https://github.com/VarunChandola/qmk-keymaps.git
   cd qmk-keymaps
   ```

2. **Install AVR toolchain:**
   ```bash
   brew install avr-gcc avrdude
   ```

3. **Build a keyboard:**
   ```bash
   ./build.sh iris
   ```

## 🔄 Updating QMK

```bash
cd qmk_firmware
git pull origin master
cd ..
```

The QMK submodule stays clean, so updates are simple!

## ✨ Features

- **Consolidated build system** - Single `build.sh` handles all keyboards
- **Clean structure** - No duplicate build scripts
- **QMK submodule** - Easy to update, never modified
- **Automatic cleanup** - Build script cleans up temporary files
- **Modern QMK** - Fixed all compatibility issues (QK_BOOT, removed deprecated defines)

## 🎯 Key Features by Keyboard

### Model 01
- Home row mods (LCTL/LGUI/LALT/LSFT)
- Palm keys: Left = Apple dictation (Option+D), Right = Zoom mute (Cmd+Shift+A)
- Navigation, mouse, number, and function layers
- Consistent layer structure with Iris

### Iris Rev3
- Home row mods (LCTL/LGUI/LALT/LSFT)
- Thumb clusters with layer taps
- Inner thumb keys: Left = Apple dictation (Option+D), Right = Zoom mute (Cmd+Shift+A)
- Multiple base layers (QWERTY, Colemak-DH)
- Navigation, mouse, symbol, and function layers
- Encoder support for volume control

## 📝 License

MIT License - Feel free to use and modify!
