//
// Created by steve on 1/6/2019.
//

#include <test/lib/gtest/include/gtest/gtest.h>
#include "../src/ClassName.h"

class ClassNameTest : public ::testing::Test
{
protected:
  virtual void SetUp()
  {
  }
  virtual void TearDown() {}

  ClassName	className;

  ClassNameTest() {
    className.value = 1;
  }
};



//------------------------------------------------------------------------------
TEST_F(ClassNameTest, Basic)
{
  ASSERT_EQ(1, className.value);
  ASSERT_NE(2, className.value);
}