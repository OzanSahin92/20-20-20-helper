//
// Created by ozan on 03.03.21.
//

#ifndef INC_20_20_20_HELPER_TWENTYTWENTYTWENTYNOTIFICATIONMANGER_H
#define INC_20_20_20_HELPER_TWENTYTWENTYTWENTYNOTIFICATIONMANGER_H

#include "TwentyTwentyTwentyWindow.h"
#include "TwentyTwentyTwentyTimer.h"
#include "TwentyTwentyTwentyScreenLockChecker.h"
#include <unistd.h>
#include <iostream>

class TwentyTwentyTwentyNotificationManger {
public:
    TwentyTwentyTwentyNotificationManger(TwentyTwentyTwentyWindow *window, const TwentyTwentyTwentyTimer &timer);

    virtual ~TwentyTwentyTwentyNotificationManger();

    void work();

private:
    TwentyTwentyTwentyWindow *_window;
    TwentyTwentyTwentyTimer _timer;
};


#endif //INC_20_20_20_HELPER_TWENTYTWENTYTWENTYNOTIFICATIONMANGER_H
