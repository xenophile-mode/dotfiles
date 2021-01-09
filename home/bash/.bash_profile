#
# ~/.bash_profile
#
if [[ -z "$DISPLAY" ]] && [[ $(tty) = /dev/tty1 ]]; then
. startx
logout
fi

[[ -f ~/.bashrc ]] && . ~/.bashrc
