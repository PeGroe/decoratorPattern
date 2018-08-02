#pragma once

#include "iCondiments.h"

class Mocha : public iCondiments
{
public:
  Mocha( Beverage* beverage );
  virtual ~Mocha();

  std::string getDescription() const override;
  double cost() const override;
};
