#include <iostream>
#include <test/lib/gtest/include/gtest/gtest.h>

using testing::InitGoogleTest;

int main(int argc, char* argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
