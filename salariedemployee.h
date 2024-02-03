#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H
#include <iostream>
#include <string>
using namespace std;

class SalariedEmployee : public Employee
{
protected:
    double salary;
public:
    SalariedEmployee()
    {
        salary = 0;
        e_type = 's';
    }

    virtual void read()
    {
        Employee::read();
        cout << "Enter Salary: ";
        cin >> salary;
    }

    virtual void setSalary(double salary)
    {
        this ->salary = salary;
    }

    virtual double printSalary()
    {
        return salary;
    }

    virtual double getSalary()                      //calculates the salary of this kind of employees and returns it for printing
    {
        if(benNum==0)
            return salary;
        if(benNum==1)
            return salary + (benefit->calculateBenefit());
    }

    void printMore()
    {
        cout << "Initial Salary -> " << salary <<endl;
    }

    virtual void print()
    {
        Employee::print();
        cout << "Salary -> " <<salary <<endl;
        cout << "Total Cash To Earn -> " <<getSalary() <<endl;
    }
};

#endif // SALARIEDEMPLOYEE_H
