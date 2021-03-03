//
// Created by mrerzincan on 13.12.20.
//

#ifndef INC_20_20_20_HELPER_TWENTYTWENTYTWENTYTIMER_H
#define INC_20_20_20_HELPER_TWENTYTWENTYTWENTYTIMER_H

class TwentyTwentyTwentyTimer {
public:
    TwentyTwentyTwentyTimer(const double &longTimerInterval, const double &shortTimerInterval, const bool &running);

    virtual ~TwentyTwentyTwentyTimer();

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


#endif //INC_20_20_20_HELPER_TWENTYTWENTYTWENTYTIMER_H
