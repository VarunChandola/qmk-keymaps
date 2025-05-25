#!/bin/bash

# Set current directory to script location
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" &> /dev/null && pwd)"
cd "$SCRIPT_DIR"
KEYMAP_DIR="$SCRIPT_DIR"
KEYBOARD_REPO_ROOT="/Users/varunchandola/Programming/Keyboards"
QMK_DIR="/Users/varunchandola/Programming/Keyboards/qmk_firmware"

echo "=== QMK Model 01 Build Script ==="
echo "Keymap directory: $KEYMAP_DIR"
echo "QMK directory: $QMK_DIR"

# Check if we have QMK as a submodule
if [ ! -d "$QMK_DIR" ]; then
  echo "ERROR: QMK submodule not found at $QMK_DIR"
  echo "Please run: git submodule update --init --recursive"
  exit 1
fi

# Create the keymap directory in QMK if it doesn't exist
QMK_KEYMAP_DIR="$QMK_DIR/keyboards/keyboardio/model01/keymaps/varun"
if [ ! -d "$QMK_KEYMAP_DIR" ]; then
  echo "Creating keymap directory in QMK..."
  mkdir -p "$QMK_KEYMAP_DIR"
fi

# Copy all keymap files to QMK keymap directory (exclude build script)
echo "Copying keymap files to QMK..."
cp "$KEYMAP_DIR"/*.c "$KEYMAP_DIR"/*.h "$KEYMAP_DIR"/*.mk "$QMK_KEYMAP_DIR/" 2>/dev/null || true

# Change to QMK directory
cd "$QMK_DIR"

# Check if we're trying to flash
if [ "$1" == "flash" ]; then
  FLASH_ARG=":flash"
else
  FLASH_ARG=""
fi

# Display build information
echo "Building keyboardio/model01:varun${FLASH_ARG}"

# Run the make command directly
make "keyboardio/model01:varun$FLASH_ARG" || {
  echo ""
  echo "Build failed!"
  echo "Try: brew install avr-gcc avrdude"
  
  # Clean up on failure
  echo "Cleaning up..."
  rm -rf "$QMK_KEYMAP_DIR"
  exit 1
}

echo ""
echo "✅ Build successful!"
echo "Firmware: $QMK_DIR/.build/keyboardio_model01_varun.hex"
echo ""

# Clean up temporary files
echo "Cleaning up..."
rm -rf "$QMK_KEYMAP_DIR"

echo "Done!"
exit 0 