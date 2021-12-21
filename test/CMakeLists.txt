file(GLOB TestSrcFiles ../src/TwentyTwentyTwentyScreenLockChecker.cpp  ../src/TwentyTwentyTwentyTimer.cpp)

add_executable(gtest gTest.cpp
        HelloworldTestCase.cpp
        testTwentyTwentyTwentyScreenLockChecker.cpp
        testTwentyTwentyTwentyTimer.cpp
        ${TestSrcFiles})

target_link_libraries(gtest ${GTEST_BOTH_LIBRARIES} pthread ${GTKMM_LIBRARIES})

add_test(AllTestsInGTests gtest)