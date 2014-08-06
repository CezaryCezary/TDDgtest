#include <iostream>
#include <gtest/gtest.h>


/* Compiling in console:
 * g++ main.cpp -lgtest -lgtest_main -lpthread
 */

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}

TEST(MathTest, TwoPlusTwo_EqualsFour)
{
    EXPECT_EQ(2+2, 4);
}
