#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
#include "benefit.h"
#include "department.h"
using namespace std;

class Employee
{
protected:
    string name;
    string phone;
    string email;
    string employeeID;
    string jobTitle;
    Benefits* benefit;
    int benNum;
    Department* department;
    char e_type;
public:
    Employee()
    {
        name = "Unknown";
        phone = "Unknown";
        email = "Unknown";
        employeeID = "Unknown";
        jobTitle = "Unknown";
        benefit = new Benefits;
        benNum = 0;
        department = new Department;
        e_type = 'N';
    }

    virtual ~Employee()
    {
        delete benefit;
        delete department;
    }

    virtual void read()
    {
        cout << "Enter Name: ";
        getline(cin>>ws,name);
        cout << "Enter Phone: ";
        getline(cin>>ws,phone);
        cout << "Enter Email: ";
        getline(cin>>ws,email);
        cout << "Enter ID: ";
        getline(cin>>ws,employeeID);
        cout << "Enter Job Title: ";
        getline(cin>>ws,jobTitle);
    }

    void setName(string name)
    {
        this ->name = name;
    }

    void setPhone(string phone)
    {
        this ->phone = phone;
    }

    void setEmail(string email)
    {
        this ->email = email;
    }

    void setEmployeeID(string employeeID)
    {
        this ->employeeID = employeeID;
    }

    void setJobTitle(string jobTitle)
    {
        this ->jobTitle = jobTitle;
    }

    string getName()
    {
        return name;
    }

    string getPhone()
    {
        return phone;
    }

    string getEmail()
    {
        return email;
    }

    string getEmployeeID()
    {
        return employeeID;
    }

    string getJobTitle()
    {
        return jobTitle;
    }

    char getType()
    {
        return e_type;
    }

    virtual void setDepart(Department* & a)
    {
        department = a;
    }

    virtual void getDepart()
    {
        department->print();
    }

    virtual void setBenefit(Benefits* & a)
    {
        benefit = a;
        benNum = 1;
    }

    virtual double getSalary()
    {

    }

    virtual void getBenefit()
    {
        cout << "Benefit Information :- " <<endl;
        if(benNum==0)
            cout << "No Benefits" <<endl;
        if(benNum==1)
            benefit->print();
    }

    virtual void printMore()
    {

    }

    virtual void print()
    {
        cout << "Employee Name -> " <<name <<endl;
        cout << "Phone -> " <<phone <<endl;
        cout << "Email -> " <<email <<endl;
        cout << "ID -> " <<employeeID <<endl;
        cout << "Job Title -> " <<jobTitle <<endl;
        getDepart();
        getBenefit();
    }

};

#endif // EMPLOYEE_H
