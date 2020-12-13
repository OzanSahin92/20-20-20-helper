//
// Created by mrerzincan on 13.12.20.
//

#include "../include/Timer.h"
#include <unistd.h>
#include <cmath>
#include <iostream>

Timer::Timer(const double &longTimerInterval, const double &shortTimerInterval, const bool &running) : _longTimerInterval(
        longTimerInterval),
                                                                                                 _shortTimerInterval(
                                                                                                         shortTimerInterval),
                                                                                                 _running(running) {}

double Timer::getLongTimerInterval() const {
    return _longTimerInterval;
}

void Timer::setLongTimerInterval(double longTimerInterval) {
    _longTimerInterval = longTimerInterval;
}

double Timer::getShortTimerInterval() const {
    return _shortTimerInterval;
}

void Timer::setShortTimerInterval(double shortTimerInterval) {
    _shortTimerInterval = shortTimerInterval;
}

void Timer::twentyTwentyTwentyTimer() {

    while(_running) {
        usleep(minutesToMicroseconds());
        std::cout << '\a';
        std::cout << "First alarm!" << std::endl;
        usleep(secondsToMicroseconds());
        std::cout << '\a';
        std::cout << "Second alarm!" << std::endl;
    }

}

double Timer::minutesToMicroseconds() const {
    double microsecondsFromMinutes = _longTimerInterval * 6 * pow(10,7);
    return microsecondsFromMinutes;
}

double Timer::secondsToMicroseconds() const {
    double microsecondsFromSeconds = _shortTimerInterval * pow(10,6);
    return microsecondsFromSeconds;
}

Timer::~Timer() = default;
