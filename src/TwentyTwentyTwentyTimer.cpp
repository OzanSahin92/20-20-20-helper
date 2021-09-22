//
// Created by mrerzincan on 13.12.20.
//

#include "../include/TwentyTwentyTwentyTimer.h"

TwentyTwentyTwentyTimer::TwentyTwentyTwentyTimer(double timerStartTime, bool timerStarted) : _timerStartTime(
        timerStartTime), _timerStarted(timerStarted) {}

void TwentyTwentyTwentyTimer::start() {
    auto current_time = std::chrono::system_clock::now();
    auto duration_in_seconds = std::chrono::duration<double>(current_time.time_since_epoch());

    double num_seconds = duration_in_seconds.count();
    _timerStartTime = num_seconds;
    _timerStarted = true;
}

void TwentyTwentyTwentyTimer::stop() {
    _timerStartTime = 0;
    _timerStarted = false;
}

bool TwentyTwentyTwentyTimer::check20MinutesPassed() {
    auto current_time = std::chrono::system_clock::now();
    auto duration_in_seconds = std::chrono::duration<double>(current_time.time_since_epoch());

    double num_seconds = duration_in_seconds.count();

    if (num_seconds - _timerStartTime >= 1200) {
        return true;
    } else {
        return false;
    }
}

bool TwentyTwentyTwentyTimer::isTimerStarted() const {
    return _timerStarted;
}

TwentyTwentyTwentyTimer::~TwentyTwentyTwentyTimer() = default;
