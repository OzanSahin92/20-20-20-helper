#include <iostream>
#include "../include/Timer.h"
#include <gtkmm-3.0/gtkmm.h>

using namespace Gtk;

int main() {
    Timer Timer(1, 1, true);
    Timer.twentyTwentyTwentyTimer();

    return 0;
}
