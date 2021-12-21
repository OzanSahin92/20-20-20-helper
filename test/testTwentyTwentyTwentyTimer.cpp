//
// Created by mrerzincan on 21.12.21.
//

#include <gtest/gtest.h>
#include "TwentyTwentyTwentyTimer.h"

TEST(TwentyTwentyTwentyTimer, start) {
    TwentyTwentyTwentyTimer timer(0, false);
    timer.start();
    EXPECT_EQ(timer.isTimerStarted(), true);
}

TEST(TwentyTwentyTwentyTimer, stop) {
    TwentyTwentyTwentyTimer timer(0, false);
    timer.start();
    timer.stop();
    EXPECT_EQ(timer.isTimerStarted(), false);
}

TEST(TwentyTwentyTwentyTimer, check20MinutesPassed) {
    TwentyTwentyTwentyTimer timer(0, false);
    timer.start();
    EXPECT_EQ(timer.check20MinutesPassed(), false);
}