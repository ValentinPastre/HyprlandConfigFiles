# HyprlandConfigFiles
My .conf files for Hyprland

# Cambio de perfiles de colores
Hay un archivo dentro de hypr/color-profiles el cual es usar-perfil.sh, este archivo cambia los colores de waybar y rofi. Los colores de kitty se cambian a traves de kitten themes.

El script se ejecuta desde la terminal con _./usar-perfil.sh theme-folder/_

Si se quiere crear un perfil nuevo se debe usar pywal en la imagen y luego copiar todos los archivos dentro de _.cache/wal/_ a la nueva carpeta. Ademas de tambier copiar los archivos de _/etc/xdg/waybar/_ y de _.config/rofi/_ (En cualquier caso, ya hay 2 themes configurados para usar como ejemplo).

#### programas instalados ####
- nmtui
- bluetoothctl
- hyprpolkitagent
- hyprpaper
- pipewire
- wireplumber
- xdg-desktop-hyprland
- swaync                //falta configurar
- nwg-look
- waybar
- pywal                 //wal -l
                        //falta configurar para vscode
                        //ya configurado para kitty y waybar. En kitty hay >
- tlp
- tlp-rdw               //usar tlp-stat -s y tlp-stat -r para ver
                        //el modo que actualmente se usa y los
                        //chipsets activos (wifi, bluetooth, etc)
- rofi-waybar
- hyprshot
- hypridle
- hyprlock
- hyprsunset
- thunar
- thunar-archive-plugin
- thunar-volman
- gvfs


#### programas a instalar ####
- mpd
