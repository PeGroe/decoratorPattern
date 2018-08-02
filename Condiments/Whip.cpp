#include "Whip.h"

Whip::Whip(Beverage* beverage)
{
  this->beverage = beverage;
}

Whip::~Whip()
{
}

std::string Whip::getDescription() const
{
  return (beverage->getDescription() + ", Whipped Cream");
}

double Whip::cost() const
{
  double condimentCosts = 0.0;

  switch (this->getSize())
  {
  case TALL:
    condimentCosts = 0.05;
    break;
  case GRANDE:
    condimentCosts = 0.10;
    break;
  case VENTI:
    condimentCosts = 0.15;
    break;
  }

  return (beverage->cost() + condimentCosts);
}
