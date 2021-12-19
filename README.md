# 20-20-20-helper
small tool that helps to pay attention to the 20-20-20 rule for better eye health

## important links
- https://developer-old.gnome.org/gtkmm-tutorial/stable/sec-basics-simple-example.html.en
- https://stackoverflow.com/questions/34590045/dbus-screensaver-activechanged-signals-not-emitted-from-ubuntu 
- https://www.linuxjournal.com/article/10455 
- https://forum.kde.org/viewtopic.php?f=66&t=136893 
- https://askubuntu.com/questions/854745/how-to-make-a-script-that-interacts-with-screen-lock-unlock 
- https://unix.stackexchange.com/questions/86221/how-can-i-lock-my-screen-in-gnome-3-without-gdm 
- https://stackoverflow.com/questions/8906250/how-to-detect-workstation-system-screen-lock-in-ubuntu-using-java/8906348
- https://gitlab.gnome.org/Archive/gnome-screensaver/-/blob/master/src/gnome-screensaver-command.c

##  to-dos
- debug code ScreenLockChecker
  - after screen lock and new timer initialization SIGSEV with the following message:
    GLib-GIO-CRITICAL **: g_application_parse_command_line: assertion '!application->priv->options_parsed' failed
- beautify pop up window
- write tests

### optional to-dos
- add CI with Dockerfile
- add options to main.cpp (f.e. goptions)

## dependencies
- install gtmm: sudo apt-get install libgtkmm-3.0-dev
