#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

/* Installing gtest (https://code.google.com/p/googlemock/downloads/list):
 *
 * http://stackoverflow.com/questions/13513905/how-to-properly-setup-googletest-on-linux
 *
 * wget https://googletest.googlecode.com/files/gtest-1.7.0.zip
 * unzip gtest-1.7.0.zip
 * cd gtest-1.7.0
 * ./configure
 * make
 * sudo cp -a include/gtest /usr/include
 * sudo cp -a lib/.libs/* /usr/lib/
 * sudo ldconfig -v | grep gtest
 */
/* Installing gmock (https://code.google.com/p/googletest/downloads/list):
 *
 * wget https://googlemock.googlecode.com/files/gmock-1.7.0.zip
 * unzip, cd, configure, make, sudo cp, sudo ldconfig
 * TODO: IMPORTANT steps:
 * wget https://github.com/triglav/cmake-findgmock/blob/master/FindGMock.cmake
 * sudo mv FindGMock.cmake /usr/share/cmake-2.8/Modules/
 */
/* Settings:
 * Color gtest: Projects -> Run -> Arguments: --gtest_color=yes
 * Color gmock: Projects -> Run -> Arguments: --gmock_color=yes
 */
/* Compiling in console:
 * g++ main.cpp -lgtest -lgtest_main -pthread
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
