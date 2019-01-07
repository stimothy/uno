//
// Created by steve on 1/6/2019.
//

#ifndef UNO_CARD_H
#define UNO_CARD_H


#include <string>
#include "card-constants.h"

class Card {
private:
  int value;
  std::string name;
  CardType cardType;
  CardColor cardColor;

  void setNameAndValue();

  void setValue(int value);

  void setName(std::string name);
public:
  Card();

  Card(CardType cardType, CardColor cardColor);

  CardType getCardType() const;

  void setCardType(CardType cardType);

  CardColor getCardColor() const;

  void setCardColor(CardColor cardColor);

  int getValue() const;

  const std::string &getName() const;
};


#endif //UNO_CARD_H
