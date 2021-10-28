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

using namespace Gtk;

class TwentyTwentyTwentyNotificationManger {
public:
    TwentyTwentyTwentyNotificationManger(Glib::RefPtr<Application> *app, TwentyTwentyTwentyWindow *window,
                                         const TwentyTwentyTwentyTimer &timer);

    virtual ~TwentyTwentyTwentyNotificationManger();

    void work();

private:
    Glib::RefPtr<Application> *_app;
    TwentyTwentyTwentyWindow *_window;
    TwentyTwentyTwentyTimer _timer;
};


#endif //INC_20_20_20_HELPER_TWENTYTWENTYTWENTYNOTIFICATIONMANGER_H
