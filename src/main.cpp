#include <iostream>
#include "TwentyTwentyTwentyTimer.h"
#include "TwentyTwentyTwentyNotificationManger.h"

using namespace Gtk;

int main(int argc, char *argv[]) {
    TwentyTwentyTwentyTimer timer(0, false);
    TwentyTwentyTwentyScreenLockChecker screenLockChecker;
    TwentyTwentyTwentyNotificationManger manager(timer, screenLockChecker);

    manager.work();
    return EXIT_SUCCESS;
}
