#!/bin/bash

echo "🔨 QMK Build Script"
echo ""

if [ "$1" == "model01" ]; then
  echo "Building Keyboardio Model 01..."
  cd keymaps/keyboardio/model01/varun && ./build.sh $2
elif [ "$1" == "iris" ]; then
  echo "Building Keebio Iris Rev4..."
  cd keymaps/keebio/iris/rev4/varun && ./build.sh $2
else
  echo "Usage: ./build.sh [keyboard] [flash]"
  echo ""
  echo "Keyboards:"
  echo "  model01  - Keyboardio Model 01"
  echo "  iris     - Keebio Iris Rev4"
  echo ""
  echo "Examples:"
  echo "  ./build.sh model01       # Build Model 01"
  echo "  ./build.sh iris flash    # Build and flash Iris"
  echo ""
  exit 1
fi 