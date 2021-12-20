//
// Created by ozan on 03.03.21.
//

#include "TwentyTwentyTwentyNotificationManger.h"


TwentyTwentyTwentyNotificationManger::TwentyTwentyTwentyNotificationManger(const TwentyTwentyTwentyTimer &timer,
                                                                           TwentyTwentyTwentyScreenLockChecker screenLockChecker)
        : _timer(timer), _screenLockChecker(screenLockChecker) {}

TwentyTwentyTwentyNotificationManger::~TwentyTwentyTwentyNotificationManger() = default;

void TwentyTwentyTwentyNotificationManger::work() {

    while (true) {
        if (_screenLockChecker.screenLocked()) {
            std::cout << "Screen is locked" << std::endl;
            _timer.stop();
        } else {
            std::cout << "Screen is not locked" << std::endl;
            if (_timer.isTimerStarted()) {
                std::cout << "Timer already started" << std::endl;
            } else {
                std::cout << "Timer not started yet. Starting it now!" << std::endl;
                _timer.start();
            }
            if (_timer.check20MinutesPassed()) {
                std::cout << "20 minutes passed" << std::endl;
                auto app = Gtk::Application::create("org.gtkmm.examples.base");
                _window = new TwentyTwentyTwentyWindow("20 20 20",
                                                       " 20 Sekunden lang auf einen 20 Fuß (ca. 6m) entfernten Punkt gucken, \n um die Augen zu entspannen! \n\n\n"
                                                       "Schließe dieses Fenster, wenn 20 Sekunden vergangen sind \n und der Timer startet neu! ",
                                                       400, 400);
                app->run(*_window);
                _timer.stop();
                delete _window;
            } else {
                std::cout << "20 minutes did not pass" << std::endl;
            }
        }
        std::cout << "\n\n\n";
        usleep(500000);
    }
}
