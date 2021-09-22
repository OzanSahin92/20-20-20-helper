//
// Created by mrerzincan on 13.12.20.
//

#ifndef INC_20_20_20_HELPER_TWENTYTWENTYTWENTYTIMER_H
#define INC_20_20_20_HELPER_TWENTYTWENTYTWENTYTIMER_H

#include <chrono>
#include <deque>

class TwentyTwentyTwentyTimer {
public:
    TwentyTwentyTwentyTimer(double timerStartTime, bool timerStarted);

    virtual ~TwentyTwentyTwentyTimer();

    void start();

    void stop();

    bool isTimerStarted() const;

    bool check20MinutesPassed();

private:
    double _timerStartTime;
    bool _timerStarted;
};


#endif //INC_20_20_20_HELPER_TWENTYTWENTYTWENTYTIMER_H
