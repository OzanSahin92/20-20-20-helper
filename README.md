# 20-20-20-helper
small tool that helps to pay attention to the 20-20-20 rule for better eye health


##  to-dos
- Timer should only measure time and the Window creator should only create a pop up window 
- NotificationManager should manage the Timer and the Window pop ups
  in form of composition
- NotificationManager composites the Timer and the Window class
	- function twentyTwentyTwentyTimer should be in NotificationManager
- pop up window should automatically close if 20 seconds passed	
- beautify pop up window
- find a way to check if the screen is active
	- based on screen inactivity pause the Timer
	- if screen changed to active again, resume the Timer or restart it
	
- write a 20-20-20.service file to create a systemd service
- write tests
- add CI with Dockerfile

## dependencies
- install gtmm: sudo apt-get install libgtkmm-3.0-dev
