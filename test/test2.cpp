//
// Created by steve on 1/6/2019.
//

#include <gtest/gtest.h>
#include "../src/ClassName2.h"

class ClassName2Test : public ::testing::Test
{
protected:
  virtual void SetUp()
  {
  }
  virtual void TearDown() {}

  ClassName2	className;

  ClassName2Test() {
    className.value = 5;
  }
};

//-----------------------------------------------------------------------------
TEST_F(ClassName2Test, Parse)
{
  ASSERT_EQ(5, className.value);
}