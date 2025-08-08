#!/bin/bash

# Verifica si Bluetooth está activado
if bluetoothctl show | grep -q "Powered: no"; then
    bluetoothctl power on
else
    bluetoothctl power off
fi
