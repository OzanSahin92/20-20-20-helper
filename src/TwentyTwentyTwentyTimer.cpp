//
// Created by mrerzincan on 13.12.20.
//

#include "../include/TwentyTwentyTwentyTimer.h"
#include <unistd.h>
#include <cmath>
#include <iostream>

TwentyTwentyTwentyTimer::TwentyTwentyTwentyTimer(const double &longTimerInterval, const double &shortTimerInterval,
                                                 const bool &running) : _longTimerInterval(
        longTimerInterval),
                                                                        _shortTimerInterval(
                                                                                shortTimerInterval),
                                                                        _running(running) {}

double TwentyTwentyTwentyTimer::getLongTimerInterval() const {
    return _longTimerInterval;
}

void TwentyTwentyTwentyTimer::setLongTimerInterval(double longTimerInterval) {
    _longTimerInterval = longTimerInterval;
}

double TwentyTwentyTwentyTimer::getShortTimerInterval() const {
    return _shortTimerInterval;
}

void TwentyTwentyTwentyTimer::setShortTimerInterval(double shortTimerInterval) {
    _shortTimerInterval = shortTimerInterval;
}

void TwentyTwentyTwentyTimer::twentyTwentyTwentyTimer() {

    while (_running) {
        usleep(minutesToMicroseconds());
        std::cout << '\a';
        std::cout << "First alarm!" << std::endl;
        usleep(secondsToMicroseconds());
        std::cout << '\a';
        std::cout << "Second alarm!" << std::endl;
    }

}

double TwentyTwentyTwentyTimer::minutesToMicroseconds() const {
    double microsecondsFromMinutes = _longTimerInterval * 6 * pow(10, 7);
    return microsecondsFromMinutes;
}

double TwentyTwentyTwentyTimer::secondsToMicroseconds() const {
    double microsecondsFromSeconds = _shortTimerInterval * pow(10, 6);
    return microsecondsFromSeconds;
}

TwentyTwentyTwentyTimer::~TwentyTwentyTwentyTimer() = default;
