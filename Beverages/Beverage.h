#pragma once

#include <string>

enum bevSize
{
  TALL = 0,
  GRANDE,
  VENTI
};

class Beverage
{
public:
  Beverage();
  virtual ~Beverage();

  virtual std::string getDescription() const;
  virtual void setSize(bevSize size);
  virtual bevSize getSize() const;

  virtual double cost() const = 0;

protected:
  std::string description;

private:
  bevSize size;
};