//
// Created by ozan on 03.03.21.
//

#include "TwentyTwentyTwentyNotificationManger.h"


TwentyTwentyTwentyNotificationManger::TwentyTwentyTwentyNotificationManger(Glib::RefPtr<Application> app,
                                                                           TwentyTwentyTwentyWindow *window,
                                                                           const TwentyTwentyTwentyTimer &timer)
        : _app(app), _window(window), _timer(timer) {}

TwentyTwentyTwentyNotificationManger::~TwentyTwentyTwentyNotificationManger() = default;

void TwentyTwentyTwentyNotificationManger::work() {

    while (true) {
        if (TwentyTwentyTwentyScreenLockChecker::screenLocked()) {
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
                _app->run(*_window);
                _timer.stop();
            } else {
                std::cout << "20 minutes did not pass" << std::endl;
            }
        }
        usleep(500000);
    }
}
