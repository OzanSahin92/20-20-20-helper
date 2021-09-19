dbus-monitor --session "type='signal',interface='com.ubuntu.Upstart0_6'" | \
(
  while read X; do
    if [[ "$X" =~ desktop-lock ]]; then
      echo "SCREEN_LOCKED";
    elif [[ "$X" =~ desktop-unlock ]]; then
      echo "SCREEN_UNLOCKED";
    fi
  done
)
