#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include <iostream>
#include <string>
using namespace std;

class Department
{
private:
    string departID;
    string departName;
public:
    Department()
    {
        departName = "Unknown";
        departID = "Unknown";
    }

    void read()
    {
        cout << "Enter Department Name: ";
        getline(cin>>ws,departName);
        cout << "Enter Department ID: ";
        getline(cin>>ws,departID);
    }

    void setDepartmentName(string departName)
    {
        this ->departName = departName;
    }

    string getDepartmentName()
    {
        return departName;
    }

    void setDepartmentID(string departName)
    {
        this ->departID = departID;
    }

    string getDepartmentID()
    {
        return departID;
    }

    void print()
    {
        cout << "Department Name -> " <<departName << "\t\t" << "Department ID -> " <<departID <<endl;
    }

};

#endif // DEPARTMENT_H
