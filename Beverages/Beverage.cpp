#include "Beverage.h"

Beverage::Beverage()
{
  description = "Unknown Beverage";
  size = GRANDE;
}

Beverage::~Beverage()
{
}

std::string Beverage::getDescription() const
{
  return description;
}

void Beverage::setSize(bevSize size)
{
  this->size = size;
}

bevSize Beverage::getSize() const
{
  return this->size;
}
