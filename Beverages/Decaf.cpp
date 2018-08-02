#include "Decaf.h"

Decaf::Decaf()
{
  description = "Decaffeinated Coffee";
}

Decaf::~Decaf()
{
}

double Decaf::cost() const
{
  return 1.05;
}
