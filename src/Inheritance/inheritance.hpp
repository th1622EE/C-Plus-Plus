#ifndef inheritance_hpp
#define inheritance_hpp


class Base
{
    public:

        double x_, y_;

        Base();

        Base(double, double);

        double calcMag();

};

class Derived : public Base
{
    public:

        Derived();

        Derived(double, double);

};


#endif // End of inheritance.hpp interface
