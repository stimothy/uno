//
// Created by steve on 1/6/2019.
//

#include <gtest/gtest.h>
#include <schema/Card.cpp>

class CardTest : public ::testing::Test
{
protected:

  Card card;

  CardTest() {
    card = Card(ZERO, BLUE);
  }
};



//------------------------------------------------------------------------------
TEST_F(CardTest, testConstructor)
{
  ASSERT_EQ(0, card.getValue());
  ASSERT_EQ("Zero", card.getName());
  ASSERT_EQ(ZERO, card.getCardType());
  ASSERT_EQ(BLUE, card.getCardColor());

  card = Card(SKIP, GREEN);

  ASSERT_EQ(20, card.getValue());
  ASSERT_EQ("Skip", card.getName());
  ASSERT_EQ(SKIP, card.getCardType());
  ASSERT_EQ(GREEN, card.getCardColor());
}

TEST_F(CardTest, testGetValue)
{
  ASSERT_EQ(0, card.getValue());
}

TEST_F(CardTest, testGetName)
{
  ASSERT_EQ("Zero", card.getName());
}

TEST_F(CardTest, testGetCardType)
{
  ASSERT_EQ(ZERO, card.getCardType());
}

TEST_F(CardTest, testSetCardType)
{
  card.setCardType(ONE);
  ASSERT_EQ(ONE, card.getCardType());
}

TEST_F(CardTest, testGetCardColor)
{
  ASSERT_EQ(BLUE, card.getCardColor());
}

TEST_F(CardTest, testSetCardColor)
{
  card.setCardColor(GREEN);
  ASSERT_EQ(GREEN, card.getCardColor());
}