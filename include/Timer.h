//
// Created by mrerzincan on 13.12.20.
//

#ifndef INC_20_20_20_HELPER_TIMER_H
#define INC_20_20_20_HELPER_TIMER_H

class Timer {
public:
    Timer(const double &longTimerInterval, const double &shortTimerInterval, const bool &running);

    virtual ~Timer();

    double getLongTimerInterval() const;

    void setLongTimerInterval(double longTimerInterval);

    double getShortTimerInterval() const;

    void setShortTimerInterval(double shortTimerInterval);

    void twentyTwentyTwentyTimer();

private:
    double secondsToMicroseconds() const;
    double minutesToMicroseconds() const;
    double _longTimerInterval;
    double _shortTimerInterval;
    bool _running;
};


#endif //INC_20_20_20_HELPER_TIMER_H
