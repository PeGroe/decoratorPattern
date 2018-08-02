#pragma once

#include "iCondiments.h"

class Whip : public iCondiments
{
public:
  Whip(Beverage* beverage);
  virtual ~Whip();

  std::string getDescription() const override;
  double cost() const override;
};
