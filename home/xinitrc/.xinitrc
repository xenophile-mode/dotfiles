pulseeffects --gapplication-service &
xrandr --output HDMI-1 --mode 1280x1024 -r 66
xrdb -merge .Xresources
dwmbar &
xinput --set-prop 11 'libinput Accel Speed' 1.0
xterm -b 20 &
picom &
wal -i papes/Wallpaper31.png
qutebrowser &
#exec dwm
bash bevelbar-launch-status-bars &
bash katriawm-launch &
exec katriawm
