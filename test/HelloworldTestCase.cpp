//
// Created by mrerzincan on 21.12.21.
//

#include <gtest/gtest.h>
#include <string>
using std::string;

string hello_world(void) { return "Hello World!"; }

TEST(helloworld_test, ok) {
    //ASSERT_EQ(0, test_eax());
    EXPECT_EQ(string("Hello World!"), hello_world());
    // add some eax_test_cases ...
}
