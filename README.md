# 20-20-20-helper
small tool that helps to pay attention to the 20-20-20 rule for better eye health


##  to-dos
- add a pop-up window for both timings -> GTKMM
  -> see example https://de.wikipedia.org/wiki/Gtkmm
- write tests
- find a way to check if the screen is active
	- based on screen inactivity pause the Timer
	- if screen changed to active again, resume the Timer or restart it
- add CI with Dockerfile

## dependencies
- install gtmm: sudo apt-get install libgtkmm-3.0-dev
