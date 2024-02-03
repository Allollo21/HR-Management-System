#ifndef HEALTHBENEFIT_H
#define HEALTHBENEFIT_H
#include <iostream>
#include <string>
using namespace std;

class HealthBenefit : public Benefits
{
private:
    string coverage;
public:
    HealthBenefit()
    {
        coverage = "Unknown";
    }

    void read()
    {
        Benefits::read();
        cout << "Enter Coverage: ";
        getline(cin>>ws,coverage);
    }

    void setCoverage(string coverage)
    {
        this ->coverage = coverage;
    }

    string getCoverage()
    {
        return coverage;
    }

    double calculateBenefit()
    {
        return 0.2 * amount;
    }

    void print()
    {
        Benefits::print();
        cout << "\t\tCoverage -> " <<coverage <<endl;
    }

};

#endif // HEALTHBENEFIT_H
