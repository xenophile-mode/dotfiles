#!/bin/bash/
#A bash script to automatically update dotfiles repo

cp ~/.bashrc ~/dotfiles/bash
cp ~/.bash_aliases ~/dotfiles/bash

cp ~/.config/dmenu-extended/config/dmenuExtended_preferences.txt ~/dotfiles/dmenu_extended

cp ~/.local/src/dwm/config.h ~/dotfiles/dwm

sudo cp /usr/share/dwmbar/config ~/dotfiles/dwmbar

cp ~/.config/fish/functions/fish_import_bash_aliases.fish ~/dotfiles/fish

sudo cp /etc/default/grub ~/dotfiles/grub
sudo cp /usr/sbin/update-grub ~/dotfiles/grub

cp ~/.config/qutebrowser/autoconfig.yml ~/dotfiles/qutebrowser

cp ~/.config/termite ~/dotfiles/terms/termite

cp ~/.vimrc ~/dotfiles

cp ~/.xprofile ~/dotfiles

cp /usr/share/xsessions/dwm.desktop ~/dotfiles

cp ~/.config/picom.conf ~/dotfiles 

cd ~/dotfiles
git add .
git commit -m "updated dotfiles"
git push
