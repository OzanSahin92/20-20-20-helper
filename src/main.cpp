#include <iostream>
#include "../include/TwentyTwentyTwentyTimer.h"
#include <gtkmm-3.0/gtkmm.h>
#include "../include/TwentyTwentyTwentyWindow.h"
#include "../include/TwentyTwentyTwentyNotificationManger.h"

using namespace Gtk;

int main(int argc, char *argv[]) {

    auto window = new TwentyTwentyTwentyWindow("20 20 20",
                                               " 20 Sekunden lang auf einen 20 Fuß (ca. 6m) entfernten Punkt gucken, \n um die Augen zu entspannen! ",
                                               400, 400);
    TwentyTwentyTwentyTimer timer(0, false);
    TwentyTwentyTwentyNotificationManger manager(window, timer);

    manager.work();

    //TwentyTwentyTwentyTimer TwentyTwentyTwentyTimer(1, 1, true);
    //TwentyTwentyTwentyTimer.twentyTwentyTwentyTimer();

    //auto app = Gtk::Application::create(argc, argv,"org.gtkmm.examples.base");

    //const string title = "20 20 20";
    //const string label = " 20 Sekunden lang auf einen 20 Fuß (ca. 6m) entfernten Punkt gucken, \n um die Augen zu entspannen! ";
    //const int height = 400;
    //const int width = 400;

    //TwentyTwentyTwentyWindow window(title, label, height, width);
    //app->run(window);

    delete window;
    return EXIT_SUCCESS;
}
