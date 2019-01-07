//
// Created by steve on 1/6/2019.
//

#include <gtest/gtest.h>
#include "myfolder/function.cpp"

TEST(MySuiteName, testAdd) {
  ASSERT_EQ(6, add(3));
}
