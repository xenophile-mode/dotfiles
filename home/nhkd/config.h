bool debug_print_spawned_command = false;

struct MouseEvent mouse_events[] = {
    { ButtonPress,   Mod1Mask, Button1, IgnoreMouseInfo, "katriac client_move_mouse down" },
    { MotionNotify,  Mod1Mask, Button1, IgnoreMouseInfo, "katriac client_move_mouse motion" },
    { ButtonRelease, Mod1Mask, Button1, IgnoreMouseInfo, "katriac client_move_mouse up" },

    { ButtonPress,   Mod1Mask, Button3, IgnoreMouseInfo, "katriac client_resize_mouse down" },
    { MotionNotify,  Mod1Mask, Button3, IgnoreMouseInfo, "katriac client_resize_mouse motion" },
    { ButtonRelease, Mod1Mask, Button3, IgnoreMouseInfo, "katriac client_resize_mouse up" },
};

struct KeyEvent key_events[] = {
    /* katriawm */
    { KeyPress, Mod1Mask, XK_j,   "katriac client_select next" },
    { KeyPress, Mod1Mask, XK_k,   "katriac client_select prev" },
    { KeyPress, Mod1Mask, XK_o,   "sr S $(sr -elvi | gawk '{ print $1 }' | dmenu -p search )" },
    { KeyPress, Mod1Mask, XK_v,   "sr $(sr -elvi | gawk '{ print $1 }' | dmenu -p search )" },
    { KeyPress, Mod1Mask, XK_Tab, "katriac client_select recent" },

    { KeyPress, Mod1Mask | ShiftMask, XK_j, "katriac client_move_list next" },
    { KeyPress, Mod1Mask | ShiftMask, XK_k, "katriac client_move_list prev" },

    { KeyPress, Mod1Mask, XK_h,      "katriac workspace_select prev" },
    { KeyPress, Mod1Mask, XK_l,      "katriac workspace_select next" },
    { KeyPress, Mod1Mask, XK_i,      "xterm -b 20 -e bash .testrc" },
    { KeyPress, Mod1Mask, XK_Escape, "katriac workspace_select recent" },
    { KeyPress, Mod1Mask, XK_r, "xterm -b 20 -e bash ~/kbshortcut-scripts/cmus-script" },
    { KeyPress, Mod1Mask, XK_e, "xterm -b 20 -e bash ~/kbshortcut-scripts/htop-script" },
    { KeyPress, Mod1Mask, XK_w, "xterm -b 20 -e bash ~/kbshortcut-scripts/kak-script" },
    { KeyPress, Mod1Mask | ShiftMask, XK_r, "xterm -b 20 -e bash ~/kbshortcut-scripts/reboot-script" },
    { KeyPress, Mod1Mask, XK_g, "xterm -b 20 -e bash ~/kbshortcut-scripts/rss-script" },
    { KeyPress, Mod1Mask, XK_d, "xterm -b 20 -e bash ~/kbshortcut-scripts/rtorrent-script" },
    { KeyPress, Mod1Mask, XK_x, "xterm -b 20 -e bash ~/kbshortcut-scripts/update-script" },
    { KeyPress, Mod1Mask, XK_b, "qutebrowser" },
    { KeyPress, Mod1Mask, XK_a, "xterm -b 20 -e bash ~/kbshortcut-scripts/vpn-script" },
    { KeyPress, Mod1Mask, XK_s, "xterm -b 20 -e bash ~/kbshortcut-scripts/tuir-script" },


    { KeyPress, Mod1Mask | ShiftMask, XK_h, "katriac client_switch_workspace prev" },
    { KeyPress, Mod1Mask | ShiftMask, XK_l, "katriac client_switch_workspace next" },

    { KeyPress, Mod1Mask, XK_1, "katriac workspace_select 1" },
    { KeyPress, Mod1Mask, XK_2, "katriac workspace_select 2" },
    { KeyPress, Mod1Mask, XK_3, "katriac workspace_select 3" },
    { KeyPress, Mod1Mask, XK_4, "katriac workspace_select 4" },
    { KeyPress, Mod1Mask, XK_5, "katriac workspace_select 5" },
    { KeyPress, Mod1Mask, XK_6, "katriac workspace_select 6" },
    { KeyPress, Mod1Mask, XK_7, "katriac workspace_select 7" },
    { KeyPress, Mod1Mask, XK_8, "katriac workspace_select 8" },
    { KeyPress, Mod1Mask, XK_9, "katriac workspace_select 9" },
    { KeyPress, Mod1Mask, XK_0, "katriac workspace_select 10" },

    { KeyPress, Mod1Mask, XK_F1,  "katriac workspace_select 11" },
    { KeyPress, Mod1Mask, XK_F2,  "katriac workspace_select 12" },
    { KeyPress, Mod1Mask, XK_F3,  "katriac workspace_select 13" },
    { KeyPress, Mod1Mask, XK_F4,  "katriac workspace_select 14" },
    { KeyPress, Mod1Mask, XK_F5,  "katriac workspace_select 15" },
    { KeyPress, Mod1Mask, XK_F6,  "katriac workspace_select 16" },
    { KeyPress, Mod1Mask, XK_F7,  "katriac workspace_select 17" },
    { KeyPress, Mod1Mask, XK_F8,  "katriac workspace_select 18" },
    { KeyPress, Mod1Mask, XK_F9,  "katriac workspace_select 19" },
    { KeyPress, Mod1Mask, XK_F10, "katriac workspace_select 20" },
    { KeyPress, Mod1Mask, XK_F11, "katriac workspace_select 21" },
    { KeyPress, Mod1Mask, XK_F12, "katriac workspace_select 22" },

    { KeyPress, Mod1Mask | ShiftMask, XK_1, "katriac client_switch_workspace 1" },
    { KeyPress, Mod1Mask | ShiftMask, XK_2, "katriac client_switch_workspace 2" },
    { KeyPress, Mod1Mask | ShiftMask, XK_3, "katriac client_switch_workspace 3" },
    { KeyPress, Mod1Mask | ShiftMask, XK_4, "katriac client_switch_workspace 4" },
    { KeyPress, Mod1Mask | ShiftMask, XK_5, "katriac client_switch_workspace 5" },
    { KeyPress, Mod1Mask | ShiftMask, XK_6, "katriac client_switch_workspace 6" },
    { KeyPress, Mod1Mask | ShiftMask, XK_7, "katriac client_switch_workspace 7" },
    { KeyPress, Mod1Mask | ShiftMask, XK_8, "katriac client_switch_workspace 8" },
    { KeyPress, Mod1Mask | ShiftMask, XK_9, "katriac client_switch_workspace 9" },
    { KeyPress, Mod1Mask | ShiftMask, XK_0, "katriac client_switch_workspace 10" },

    { KeyPress, Mod1Mask | ShiftMask, XK_F1,  "katriac client_switch_workspace 11" },
    { KeyPress, Mod1Mask | ShiftMask, XK_F2,  "katriac client_switch_workspace 12" },
    { KeyPress, Mod1Mask | ShiftMask, XK_F3,  "katriac client_switch_workspace 13" },
    { KeyPress, Mod1Mask | ShiftMask, XK_F4,  "katriac client_switch_workspace 14" },
    { KeyPress, Mod1Mask | ShiftMask, XK_F5,  "katriac client_switch_workspace 15" },
    { KeyPress, Mod1Mask | ShiftMask, XK_F6,  "katriac client_switch_workspace 16" },
    { KeyPress, Mod1Mask | ShiftMask, XK_F7,  "katriac client_switch_workspace 17" },
    { KeyPress, Mod1Mask | ShiftMask, XK_F8,  "katriac client_switch_workspace 18" },
    { KeyPress, Mod1Mask | ShiftMask, XK_F9,  "katriac client_switch_workspace 19" },
    { KeyPress, Mod1Mask | ShiftMask, XK_F10, "katriac client_switch_workspace 20" },
    { KeyPress, Mod1Mask | ShiftMask, XK_F11, "katriac client_switch_workspace 21" },
    { KeyPress, Mod1Mask | ShiftMask, XK_F12, "katriac client_switch_workspace 22" },

    { KeyPress, Mod1Mask, XK_y,  "katriac monitor_select left" },
    { KeyPress, Mod1Mask, XK_u,  "katriac monitor_select right" },
    { KeyPress, Mod1Mask, XK_asciicircum, "katriac monitor_select recent" },

    { KeyPress, Mod1Mask | ShiftMask, XK_y, "katriac client_switch_monitor left" },
    { KeyPress, Mod1Mask | ShiftMask, XK_u, "katriac client_switch_monitor right" },

    { KeyPress, Mod1Mask | ControlMask, XK_BackSpace, "katriac wm_quit" },
    { KeyPress, Mod1Mask | ControlMask, XK_r,         "katriac wm_restart" },

    { KeyPress, Mod1Mask, XK_t, "katriac layout_set tile" },
    { KeyPress, Mod1Mask, XK_w, "katriac layout_set float" },
    { KeyPress, Mod1Mask, XK_m, "katriac layout_set monocle" },
    { KeyPress, Mod1Mask, XK_a, "katriac layout_set stack" },

    { KeyPress, Mod1Mask, XK_q, "katriac client_close" },

    { KeyPress, Mod1Mask,             XK_f,     "katriac client_fullscreen_toggle" },
    { KeyPress, Mod1Mask | ShiftMask, XK_space, "katriac client_floating_toggle" },

    { KeyPress, Mod1Mask,             XK_BackSpace, "katriac urgency_clear_visible" },
    { KeyPress, Mod1Mask | ShiftMask, XK_BackSpace, "katriac urgency_mute_toggle" },

    { KeyPress, Mod1Mask | Mod1Mask,             XK_1, "katriac placement_store 1" },
    { KeyPress, Mod1Mask | Mod1Mask,             XK_2, "katriac placement_store 2" },
    { KeyPress, Mod1Mask | Mod1Mask,             XK_3, "katriac placement_store 3" },
    { KeyPress, Mod1Mask | Mod1Mask | ShiftMask, XK_1, "katriac placement_use 1" },
    { KeyPress, Mod1Mask | Mod1Mask | ShiftMask, XK_2, "katriac placement_use 2" },
    { KeyPress, Mod1Mask | Mod1Mask | ShiftMask, XK_3, "katriac placement_use 3" },

    { KeyPress, Mod1Mask,            XK_c,      "katriac client_center_floating" },
    { KeyPress, Mod1Mask,            XK_n,      "katriac client_maximize_floating" },
    { KeyPress, Mod1Mask | Mod1Mask, XK_Return, "katriac floaters_collect" },

    /* Applications */
    { KeyPress, Mod1Mask | ShiftMask,   XK_Return, "~/git/xrandr-invert-colors/xrandr-invert-colors" },
    { KeyPress, Mod1Mask | ControlMask, XK_Return, "~/work/C/xlocatemouse/xlocatemouse" },

    { KeyPress, Mod1Mask, XK_Return, "xterm -b 20" },

    { KeyPress, Mod1Mask,             XK_space, "browser-inputline" },
    { KeyPress, Mod1Mask | ShiftMask, XK_c,     "browser-clipboard-wrapper" },

    { KeyPress, Mod1Mask,               XK_Print, "cd ~/gfx/screenshots && scrot" },
    { KeyPress, Mod1Mask | ShiftMask,   XK_Print, "shot-sel" },

    { KeyPress, Mod1Mask,             XK_Up,   "sudo intel-backlight up" },
    { KeyPress, Mod1Mask,             XK_Down, "sudo intel-backlight down" },
    { KeyPress, Mod1Mask | ShiftMask, XK_Down, "sudo intel-backlight off" },

    { KeyPress, Mod1Mask, XK_p, "dmenu_run -l 25" },

    { KeyPress, Mod1Mask | ControlMask, XK_a, "idasen-stand" },
    { KeyPress, Mod1Mask | ControlMask, XK_l, "slock" },
};
