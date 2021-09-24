# 20-20-20-helper
small tool that helps to pay attention to the 20-20-20 rule for better eye health

## important links
- https://stackoverflow.com/questions/34590045/dbus-screensaver-activechanged-signals-not-emitted-from-ubuntu 
- https://www.linuxjournal.com/article/10455 
- https://forum.kde.org/viewtopic.php?f=66&t=136893 
- https://askubuntu.com/questions/854745/how-to-make-a-script-that-interacts-with-screen-lock-unlock 
- https://unix.stackexchange.com/questions/86221/how-can-i-lock-my-screen-in-gnome-3-without-gdm 
- https://stackoverflow.com/questions/8906250/how-to-detect-workstation-system-screen-lock-in-ubuntu-using-java/8906348
- https://gitlab.gnome.org/Archive/gnome-screensaver/-/blob/master/src/gnome-screensaver-command.c

##  to-dos 
- debug code ScreenLockChecker
- code Window
- Timer should only measure time and the Window creator should only create a pop up window 
- NotificationManager should manage the Timer, the Window and the ScreenLockChanger
- NotificationManager composites the Timer, Window and the ScreenLockChecker class
    - function twentyTwentyTwentyTimer should be in NotificationManager
- beautify pop up window

- write a 20-20-20.service file to create a systemd service
- write tests
- add CI with Dockerfile

## dependencies
- install gtmm: sudo apt-get install libgtkmm-3.0-dev
