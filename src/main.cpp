#include <iostream>
#include "TwentyTwentyTwentyTimer.h"
#include <gtkmm-3.0/gtkmm.h>
#include "TwentyTwentyTwentyWindow.h"
#include "TwentyTwentyTwentyNotificationManger.h"

using namespace Gtk;

int main(int argc, char *argv[]) {
    auto app = Gtk::Application::create(argc, argv, "org.gtkmm.examples.base");
    auto window = new TwentyTwentyTwentyWindow("20 20 20",
                                               " 20 Sekunden lang auf einen 20 Fuß (ca. 6m) entfernten Punkt gucken, \n um die Augen zu entspannen! ",
                                               400, 400);
    TwentyTwentyTwentyTimer timer(0, false);
    TwentyTwentyTwentyNotificationManger manager(app, window, timer);

    manager.work();

    delete window;
    return EXIT_SUCCESS;
}
