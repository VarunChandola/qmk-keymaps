#!/bin/bash

# Configuration
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" &> /dev/null && pwd)"
QMK_DIR="$SCRIPT_DIR/qmk_firmware"

echo "🔨 QMK Build Script"
echo ""

# Parse arguments
KEYBOARD=""
FLASH=""
if [ "$2" == "flash" ]; then
  FLASH=":flash"
fi

# Set keyboard and keymap paths
case "$1" in
  "model01")
    KEYBOARD="keyboardio/model01"
    KEYMAP_SOURCE="$SCRIPT_DIR/keymaps/keyboardio/model01/varun"
    QMK_KEYMAP_DIR="$QMK_DIR/keyboards/keyboardio/model01/keymaps/varun"
    echo "Building Keyboardio Model 01..."
    ;;
  "iris"|"iris3")
    KEYBOARD="keebio/iris/rev3"
    KEYMAP_SOURCE="$SCRIPT_DIR/keymaps/keebio/iris/rev3/varun"
    QMK_KEYMAP_DIR="$QMK_DIR/keyboards/keebio/iris/rev3/keymaps/varun"
    echo "Building Keebio Iris Rev3..."
    ;;
  *)
    echo "Usage: ./build.sh [keyboard] [flash]"
    echo ""
    echo "Keyboards:"
    echo "  model01  - Keyboardio Model 01"
    echo "  iris     - Keebio Iris Rev3"
    echo ""
    echo "Examples:"
    echo "  ./build.sh model01       # Build Model 01"
    echo "  ./build.sh iris flash    # Build and flash Iris"
    echo ""
    exit 1
    ;;
esac

# Check if QMK submodule exists
if [ ! -d "$QMK_DIR" ]; then
  echo "ERROR: QMK submodule not found at $QMK_DIR"
  echo "Please run: git submodule update --init --recursive"
  exit 1
fi

# Create keymap directory in QMK
echo "Creating keymap directory in QMK..."
mkdir -p "$QMK_KEYMAP_DIR"

# Copy keymap files (exclude build scripts)
echo "Copying keymap files to QMK..."
find "$KEYMAP_SOURCE" -name "*.c" -o -name "*.h" -o -name "*.mk" | while read file; do
  cp "$file" "$QMK_KEYMAP_DIR/"
done

# Change to QMK directory and build
cd "$QMK_DIR"
echo "Building $KEYBOARD:varun$FLASH"

make "$KEYBOARD:varun$FLASH" || {
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
if [ -z "$FLASH" ]; then
  FIRMWARE_NAME=$(echo "$KEYBOARD" | tr '/' '_')
  echo "Firmware: $QMK_DIR/.build/${FIRMWARE_NAME}_varun.hex"
fi
echo ""

# Clean up temporary files
echo "Cleaning up..."
rm -rf "$QMK_KEYMAP_DIR"

echo "Done!" 