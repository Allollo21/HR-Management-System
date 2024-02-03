#ifndef MANAGEREMPLOYEE_H
#define MANAGEREMPLOYEE_H
#include <iostream>
#include <string>
using namespace std;

class ManagerEmployee : public SalariedEmployee
{
private:
    double bonus;
public:
    ManagerEmployee()
    {
        bonus = 0;
        e_type = 'm';
    }

    void read()
    {
        SalariedEmployee::read();
        cout << "Enter Bonus: ";
        cin >> bonus;
    }

    void setBonus(double bonus)
    {
        this ->bonus = bonus;
    }

    double getBonus()
    {
        return bonus;
    }

    double getSalary()        //calculates the salary of this kind of employees and returns it for printing
    {
        if(benNum==0)
            return (salary + bonus);
        if(benNum==1)
            return (salary + bonus)+(benefit->calculateBenefit());
    }

    void printMore()
    {
        cout << "Bonus -> " <<bonus <<endl;
    }

    void print()
    {
        SalariedEmployee::print();
        cout << "Bonus -> " <<bonus <<endl;
        cout << "Total Cash To Earn -> " <<getSalary() <<endl;
    }
};

#endif // MANAGEREMPLOYEE_H
