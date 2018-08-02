#include "Mocha.h"

Mocha::Mocha( Beverage* beverage )
{
  this->beverage = beverage;
}

Mocha::~Mocha()
{
}

std::string Mocha::getDescription() const
{
  return (beverage->getDescription() + ", Mocha");
}

double Mocha::cost() const
{
  double condimentCosts = 0.0;

  switch (this->getSize())
  {
  case TALL:
    condimentCosts = 0.15;
    break;
  case GRANDE:
    condimentCosts = 0.20;
    break;
  case VENTI:
    condimentCosts = 0.25;
    break;
  }

  return (beverage->cost() + condimentCosts);
}
