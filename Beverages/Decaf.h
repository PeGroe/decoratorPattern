#pragma once

#include "Beverage.h"

class Decaf : public Beverage
{
public:
  Decaf();
  virtual ~Decaf();

  double cost() const override;
};
