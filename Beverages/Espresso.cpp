#include "Espresso.h"

Espresso::Espresso()
{
  description = "Espresso";
}

Espresso::~Espresso()
{
}

double Espresso::cost() const
{
  return 1.99;
}
