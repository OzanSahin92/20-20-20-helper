add_executable(gtest gTest.cpp HelloworldTestCase.cpp)

target_link_libraries(gtest ${GTEST_BOTH_LIBRARIES} pthread)

add_test(AllTestsInGTests gtest)