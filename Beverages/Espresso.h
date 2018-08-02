#pragma once

#include "Beverage.h"

class Espresso : public Beverage
{
public:
  Espresso();
  virtual ~Espresso();

  double cost() const override;
};
