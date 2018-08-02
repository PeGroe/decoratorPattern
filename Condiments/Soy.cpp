#include "Soy.h"

Soy::Soy(Beverage* beverage)
{
  this->beverage = beverage;
}

Soy::~Soy()
{
}

std::string Soy::getDescription() const
{
  return (beverage->getDescription() + ", Soy");
}

double Soy::cost() const
{
  double condimentCosts = 0.0;

  switch (this->getSize())
  {
  case TALL:
    condimentCosts = 0.10;
    break;
  case GRANDE:
    condimentCosts = 0.15;
    break;
  case VENTI:
    condimentCosts = 0.20;
    break;
  }

  return (beverage->cost() + condimentCosts);
}
