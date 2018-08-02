#pragma once

#include "iCondiments.h"

class Soy : public iCondiments
{
public:
  Soy(Beverage* beverage);
  virtual ~Soy();

  std::string getDescription() const override;
  double cost() const override;
};
