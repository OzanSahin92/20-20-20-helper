//
// Created by mrerzincan on 21.12.21.
//

#include <gtest/gtest.h>
#include "TwentyTwentyTwentyScreenLockChecker.h"

TEST(TwentyTwentyTwentyScreenLockChecker, screenLocked) {
    TwentyTwentyTwentyScreenLockChecker screenLockChecker;
    EXPECT_EQ(screenLockChecker.screenLocked(), false);
}
