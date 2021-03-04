//
// Created by ozan on 03.03.21.
//

#include "../include/TwentyTwentyTwentyNotificationManger.h"

TwentyTwentyTwentyNotificationManger::TwentyTwentyTwentyNotificationManger(TwentyTwentyTwentyWindow *window,
                                                                           const TwentyTwentyTwentyTimer &timer)
        : _window(window), _timer(timer) {}

TwentyTwentyTwentyNotificationManger::~TwentyTwentyTwentyNotificationManger() = default;
