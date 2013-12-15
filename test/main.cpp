
#include <iostream>
#include "gtest/gtest.h"

int main(int argc, char **argv) {

    std::cout << "Google Mocking C++ Framework" << std::endl;

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
