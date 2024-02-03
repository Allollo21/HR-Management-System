#ifndef DENTALBENEFIT_H
#define DENTALBENEFIT_H
#include <iostream>
#include <string>
using namespace std;

class DentalBenefit : public Benefits
{
public:

    void read()
    {
        Benefits::read();
    }

    double calculateBenefit()
    {
        return 0.1 * amount;
    }

    void print()
    {
        Benefits::print();
    }
};

#endif // DENTALBENEFIT_H
