#include <utility>

//
// Created by steve on 1/6/2019.
//

#include "Card.h"

Card::Card() = default;

Card::Card(CardType cardType, CardColor cardColor) : cardType(cardType),
                                                     cardColor(cardColor) {
  setNameAndValue();
}

CardType Card::getCardType() const {
  return cardType;
}

void Card::setCardType(CardType cardType) {
  Card::cardType = cardType;
}

CardColor Card::getCardColor() const {
  return cardColor;
}

void Card::setCardColor(CardColor cardColor) {
  Card::cardColor = cardColor;
}

int Card::getValue() const {
  return value;
}

void Card::setValue(int value) {
  Card::value = value;
}

const std::string &Card::getName() const {
  return name;
}

void Card::setName(std::string name) {
  Card::name = std::move(name);
}

void Card::setNameAndValue() {
  switch (cardType) {
    case ZERO:
      setValue(0);
      setName("Zero");
      break;
    case ONE:
      setValue(1);
      setName("One");
      break;
    case TWO:
      setValue(2);
      setName("Two");
      break;
    case THREE:
      setValue(3);
      setName("Three");
      break;
    case FOUR:
      setValue(4);
      setName("Four");
      break;
    case FIVE:
      setValue(5);
      setName("Five");
      break;
    case SIX:
      setValue(6);
      setName("Six");
      break;
    case SEVEN:
      setValue(7);
      setName("Seven");
      break;
    case EIGHT:
      setValue(8);
      setName("Eight");
      break;
    case NINE:
      setValue(9);
      setName("Nine");
      break;
    case DRAW_TWO:
      setValue(20);
      setName("Draw Two");
      break;
    case SKIP:
      setValue(20);
      setName("Skip");
      break;
    case REVERSE:
      setValue(20);
      setName("Reverse");
      break;
    case WILD:
      setValue(50);
      setName("Wild");
      break;
    case WILD_DRAW_FOUR:
      setValue(50);
      setName("Wild Draw Four");
      break;
  }
}