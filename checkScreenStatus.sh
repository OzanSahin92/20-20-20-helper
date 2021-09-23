#!/bin/bash

while true; do
  sleep 10
  gnome-screensaver-command -q > build/screenStatus.txt
done

