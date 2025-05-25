# QMK Keymaps

Personal QMK keyboard keymaps with a clean build system and QMK submodule for easy maintenance.

## 🚀 Quick Start

```bash
# Build Model 01
./build.sh model01

# Build and flash Iris
./build.sh iris flash
```

## 📁 Structure

```
├── keymaps/                    # Source keymaps (organized by manufacturer)
│   ├── keyboardio/model01/varun/
│   └── keebio/iris/rev4/varun/
├── qmk_firmware/               # QMK submodule (never modified)
├── build.sh                   # Simple build script
└── README.md
```

## 🔨 Build System

Each keymap has its own build script that:
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
./build.sh iris          # Build Keebio Iris Rev4  
./build.sh iris flash    # Build and flash Iris
```

## ⌨️ Keyboards

### Keyboardio Model 01
- **Layout**: Split ergonomic with 64 keys
- **Features**: Home row mods, RGB controls, numpad layer
- **Build**: `./build.sh model01`
- **Layers**: PRIMARY, NUMPAD, SYMBOL, FUNL

### Keebio Iris Rev4
- **Layout**: Split 60% with 56 keys + rotary encoder
- **Features**: Home row mods, RGB underglow, encoder controls
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
   ./build.sh model01
   ```

## 🔄 Updating QMK

```bash
cd qmk_firmware
git pull origin master
cd ..
```

The QMK submodule stays clean, so updates are simple!

## ✨ Features

- **Clean structure** - No redundant files
- **Easy builds** - Simple `./build.sh [keyboard]` command
- **QMK submodule** - Easy to update, never modified
- **Automatic cleanup** - Build scripts clean up temporary files
- **Modern QMK** - Fixed all compatibility issues (QK_BOOT, removed deprecated defines)

## 🎯 Key Features by Keyboard

### Model 01
- Home row mods (GACS/CAGS)
- RGB matrix controls
- Dedicated numpad layer
- Function key layer with media controls

### Iris Rev4
- Multiple base layers (QWERTY, Colemak-DH)
- Navigation layer with arrow keys
- Mouse control layer
- Symbol layers for programming
- Encoder support for volume/RGB control

## 📝 License

MIT License - Feel free to use and modify!
