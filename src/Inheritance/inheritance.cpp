#include "inheritance.hpp"

#include <iostream>
#include <cmath>

Base::Base()
  : x_ (0)
  , y_ (0)
  {}

Base::Base(double x, double y)
{
    x_ = x;
    y_ = y;
}

double Base::calcMag()
{
    double result = std::sqrt(std::pow(x_, 2) + std::pow(y_, 2));
    return result;
}

Derived::Derived()
{
    x_ = 0;
    y_ = 0;
}

Derived::Derived(double x, double y)
{
    x_ = x;
    y_ = y;
}


int main()
{
    
    Base b1(3.0, 4.0);
    std::cout << "\nThe magnitude of 3.0, 4.0: " << b1.calcMag() << std::endl;

    Derived d1(4.0, 5.0);
    std::cout << "\nThe magnitude of 4.0, 5.0: " << d1.calcMag() << "\n" << std::endl;

    return 0;

}