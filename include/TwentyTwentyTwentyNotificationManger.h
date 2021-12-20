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
#include <gtkmm-3.0/gtkmm.h>
#include <gtkmm/application.h>

using namespace Gtk;

class TwentyTwentyTwentyNotificationManger {
public:
    TwentyTwentyTwentyNotificationManger(const TwentyTwentyTwentyTimer &timer,
                                         TwentyTwentyTwentyScreenLockChecker screenLockChecker);

    virtual ~TwentyTwentyTwentyNotificationManger();

    void work();

private:
    TwentyTwentyTwentyWindow *_window;
    TwentyTwentyTwentyTimer _timer;
    TwentyTwentyTwentyScreenLockChecker _screenLockChecker;
};


#endif //INC_20_20_20_HELPER_TWENTYTWENTYTWENTYNOTIFICATIONMANGER_H
