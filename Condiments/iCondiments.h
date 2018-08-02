// This is the pure virtual interface class for all Decorators (iCondiments) of the pattern.
//

#pragma once

#include "../Beverages/Beverage.h"

class iCondiments : public Beverage
{
public:
  std::string getDescription() const override = 0;
protected:
  Beverage* beverage;
};