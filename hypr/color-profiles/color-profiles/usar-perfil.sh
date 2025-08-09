#!/bin/bash

#PARA CAMBIAR DE TEMA DE KITTY HAY QUE USAR EL KITTEN THEMES

set -e

HOME="/home/zraekl" 
PERFIL=$1
DIR="$HOME/.config/hypr/color-profiles/$PERFIL"

cp -rf "$DIR/wal/"* ~/.cache/wal/

cp -rf "$DIR/waybar/"* /etc/xdg/waybar/

cp "$DIR/rofi/config.rasi" ~/.config/rofi/config.rasi

# Recargar apps
pkill waybar && waybar &
