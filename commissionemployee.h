#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H
#include <iostream>
#include <string>
using namespace std;

class CommissionEmployee : public Employee
{
private:
    double target;
    double rate;
public:
    CommissionEmployee()
    {
        target = 0;
        rate = 0;
        e_type = 'c';
    }

    void read()
    {
        Employee::read();
        cout << "Enter Target: ";
        cin >> target;
        cout << "Enter Rate: ";
        cin >> rate;
    }

    void setTarget(double target)
    {
        this ->target = target;
    }

    void setRate(double rate)
    {
        this ->rate = rate;
    }

    double getTarget()
    {
        return target;
    }

    double getRate()
    {
        return rate;
    }

    double getSalary()        //calculates the salary of this kind of employees and returns it for printing
    {
        if(benNum==0)
            return rate * target;
        if(benNum==1)
            return (rate * target)+(benefit->calculateBenefit());
    }

    void printMore()
    {
        cout << "Target -> " <<target << "\tRate -> " <<rate <<endl;
    }

    void print()
    {
        Employee::print();
        cout << "Target -> " <<target <<endl;
        cout << "Rate -> " <<rate <<endl;
        cout << "Total Cash To Earn -> " <<getSalary() <<endl;
    }
};

#endif // COMMISSIONEMPLOYEE_H
