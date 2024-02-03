#ifndef HRSYSTEM_H
#define HRSYSTEM_H
#include <iostream>
#include <string>
#include "employee.h"
#include "hourlyemployee.h"
#include "commissionemployee.h"
#include "salariedemployee.h"
#include "manageremployee.h"
#include "benefit.h"
#include "healthbenefit.h"
#include "dentalbenefit.h"
using namespace std;

class HRSystem
{
private:
    Employee** employeeList;
    int e_capacity;
    int e_size;
    Department** departList;
    Benefits** benefitList;
    int d_size;
    int b_size;
public:
    HRSystem()
    {
        employeeList = new Employee*[10];
        e_capacity = 10;
        e_size = 0;
        departList = new Department*[6];
        d_size = 0;
        benefitList = new Benefits*[6];
        b_size = 0;
    }

    ~HRSystem()
    {
        for(int i=0; i<e_size; i++)
            delete employeeList[i];
        delete [] employeeList;
        for(int i=0; i<d_size; i++)
            delete departList[i];
        delete [] departList;
        for(int i=0; i<b_size; i++)
            delete benefitList[i];
        delete [] benefitList;
    }

    void addDepart()
    {
        system("cls");
        system("color 7");

        if(d_size < 6)
        {
            departList[d_size] = new Department;
            departList[d_size]->read();
            d_size++;
        }

        else
            cout << "No more rooms for Departments !" <<endl;

        system("pause");
        system("cls");
    }

    int departSearchHelper()
    {
        string search;
        bool found = false;

        cout << "Enter Depart Name or ID: ";
        getline(cin >> ws, search);

        for (int i=0; i < d_size; i++)
        {
            if(departList[i]->getDepartmentName() == search  || departList[i]->getDepartmentID() == search)
            {
                found = true;
                cout << "\t\tDepartment Found!" <<endl;
                return i;
                break;
            }
        }

        if(!found)
        {
            cout << "Department Was Not Found!" <<endl;
            return -1;
        }
    }


    void deleteDepart()
    {
        system("cls");
        system("color 7");
        int index = departSearchHelper();
        if(index!=-1)
        {
            for(int j=index+1; j<d_size; j++)
            {
                departList[j-1] = departList[j];
            }

            d_size--;
            cout << "\t\tDepartment Deleted Successfully.\n\n" <<endl;
        }

        system("pause");
        system("cls");
    }

    void modifyDepart()
    {
        system("cls");
        system("color 7");

        int index = departSearchHelper();

        if(index!=-1)
        {
            cout << "\t\tEnter New Informations:-" <<endl;
            departList[index]->read();
            cout << "Department Updated Successfully!" <<endl;
        }

        system("pause");
        system("cls");
    }

    void searchDepart()
    {
        system("cls");
        system("color 7");

        int index = departSearchHelper();

        if(index!=-1)
        {
            departList[index]->print();
        }

        system("pause");
        system("cls");
    }

    void showDepart()
    {
        system("cls");
        system("color 7");

        if(d_size==0)
        {
            cout << "No Departments Signed!" <<endl;
        }

        else
        {
            cout <<"[ Departments ] :- " <<endl;
            for(int i=0; i < d_size; i++)
            {
                cout << i+1 <<". ";
                departList[i]->print();
                cout << "-----------------------" <<endl;
            }
        }

        system("pause");
        system("cls");
    }

    int benefitSearchHelper()
    {
        string search;
        bool found = false;

        cout << "Enter ID Of The benefit (if you don't know it go back and print) : ";
        getline(cin>>ws,search);

        for(int i=0; i<b_size; i++)
        {
            if(benefitList[i]->getBenefitId() == search)
            {
                found = true;
                cout << "\t\tBenefit System Found!" <<endl;
                return i;
                break;
            }
        }

        if(!found)
        {
            cout << "\t\tBenefit System Not Found!" <<endl;
            return -1;
        }
    }

    void addBenefit()
    {
        system("cls");
        system("color 7");

        int type;
        bool flag = true;          //flag to check the validation of the input

        if(b_size < 6)
        {
            cout << "Enter Benefit Type ([1] Health ,[2] Dental) : ";
            cin >> type;
            switch(type)
            {
            case 1:
                benefitList[b_size] = new HealthBenefit;
                break;

            case 2:
                benefitList[b_size] = new DentalBenefit;
                break;

            default:
                cout << "Invalid Input , Try Again!" <<endl;
                flag = false;
                break;
            }

            if(flag)
            {
                benefitList[b_size]->read();
                b_size ++;
                cout << "Benefit Saved Successfully!"<<endl;
            }

        }
        else
            cout << "No More Rooms For Benefits!" <<endl;

        system("pause");
        system("cls");
    }

    void deleteBenefit()
    {
        system("cls");
        system("color 7");

        int index = benefitSearchHelper();

        if(index!=-1)
        {
            for(int j=index+1; j<b_size; j++)
            {
                benefitList[j-1] = benefitList[j];
            }

            b_size--;
            cout << "\t\tBenefit Deleted Successfully!" <<endl;
        }

        system("pause");
        system("cls");
    }

    void modifyBenefit()
    {
        system("cls");
        system("color 7");

        int index = benefitSearchHelper();

        if(index!=-1)
        {
            cout << "\t\tEnter New Informations :-" <<endl;
            benefitList[index]->read();
            cout << "\t\tBenefit Edited Successfully!" <<endl;
        }

        system("pause");
        system("cls");
    }

    void searchBenefit()
    {
        system("cls");
        system("color 7");

        int index = benefitSearchHelper();

        if(index!=-1)
        {
            benefitList[index]->print();
        }

        system("pause");
        system("cls");
    }

    void showBenefits()
    {
        system("cls");
        system("color 7");

        if(b_size==0)
        {
            cout << "No Benefits Signed!" <<endl;
        }

        else
        {
            cout <<"[ Benefits ] :- " <<endl;
            for(int i=0; i < b_size; i++)
            {
                cout << i+1 <<". ";
                benefitList[i]->print();
                cout << "-----------------------" <<endl;
            }
        }

        system("pause");
        system("cls");
    }

    int employeeSearchHelper()
    {
        string search;
        bool found = false;

        cout << "Enter Employee's Name , Phone , Email OR ID : ";
        getline(cin>>ws,search);

        for(int i=0; i<e_size; i++)
        {
            if(employeeList[i]->getName() == search || employeeList[i]->getPhone() == search || employeeList[i]->getEmail() == search || employeeList[i]->getEmployeeID() == search)
            {
                found = true;
                cout << "\t\t\nEmployee Found!" <<endl;
                return i;
                break;
            }
        }

        if(!found)
        {
            cout << "\t\t\nEmployee Was Not Found!" <<endl;
            return -1;
        }

    }

    void resize ()
    {
        e_capacity *= 2;
        Employee** temp = new Employee*[e_capacity];
        for(int i=0; i<e_size; i++)
        {
            temp[i] = employeeList[i];
        }
        delete [] employeeList;
        employeeList = temp;
    }

    void addEmployee()
    {
        system("cls");
        system("color 7");
        if(e_size == e_capacity)
        {
            resize();
        }
        int type;
        bool flag = true;          //flag to check the validation of the input
        cout << "Enter Employee Type ([1] Hourly ,[2] Commission ,[3] Salaried ,[4] Manager) : ";
        cin >> type;
        switch(type)
        {
        case 1:
            employeeList[e_size] = new HourlyEmployee;
            break;
        case 2:
            employeeList[e_size] = new CommissionEmployee;
            break;
        case 3:
            employeeList[e_size] = new SalariedEmployee;
            break;
        case 4:
            employeeList[e_size] = new ManagerEmployee;
            break;
        default:
            flag = false;
            cout << "Invalid Input , Try Again!" <<endl;
            break;
        }
        if(flag)
        {
            employeeList[e_size]->read();
            e_size++;
            cout << "Employee Saved Successfully!"<<endl;
        }
        system("pause");
        system("cls");
    }

    void assignDepart()
    {
        system("cls");
        system("color 7");

        int employeeIndex = employeeSearchHelper();
        if(employeeIndex!=-1)
        {
            cout << "\nList Of Departments :-\n" <<endl;
            for(int i=0; i<d_size; i++)
            {
                cout << "[" << i+1 << "]. ";
                departList[i]->print();
                cout << "\n";
            }

            int departIndex = departSearchHelper();

            if(departIndex!=-1)
            {
                Department *temp = departList[departIndex];
                employeeList[employeeIndex]->setDepart(temp);
                cout << "Department Assigned Successfully!"<<endl;
            }
        }

        system("pause");
        system("cls");
    }

    void assignBenefit()
    {
        system("cls");
        system("color 7");

        int employeeIndex = employeeSearchHelper();

        if(employeeIndex!=-1)
        {
            cout << "List Of Benefits :-" <<endl;
            for(int i=0; i<b_size; i++)
            {
                cout << "[" << i+1 << "]. ";
                benefitList[i]->print();
                cout << "\n";
            }

            int benefitIndex = benefitSearchHelper();

            if(benefitIndex!=-1)
            {
                Benefits *temp = benefitList[benefitIndex];
                employeeList[employeeIndex]->setBenefit(temp);
                cout << "Benefit Assigned Successfully!"<<endl;
            }
        }

        system("pause");
        system("cls");
    }

    void deleteEmployee()
    {
        system("cls");
        system("color 7");

        int index = employeeSearchHelper();

        if(index!=-1)
        {
            for(int j=index+1; j<e_size; j++)
            {
                employeeList[j-1] = employeeList[j];
            }

            e_size--;
            cout << "\t\t\nEmployee deleted successfully.\n\n" << endl;
        }

        system("pause");
        system("cls");
    }

    void modifyEmployee()
    {
        system("cls");
        system("color 7");

        int index = employeeSearchHelper();
        if(index!=-1)
        {
            cout << "Enter New Employee Information:- " <<endl;
            employeeList[index]->read();
            cout << "\t\t\nEmployee Updated Successfully!\n\n" << endl;
        }

        system("pause");
        system("cls");
    }

    void searchEmployee()
    {
        system("cls");
        system("color 7");

        int index = employeeSearchHelper();

        if(index!=-1)
        {
            employeeList[index]->print();
        }

        system("pause");
        system("cls");
    }

    void employeeSalary()
    {
        system("cls");
        system("color 7");

        int index = employeeSearchHelper();
        if(index!=-1)
        {
            cout << employeeList[index]->getName() << " Has a " << employeeList[index]->getSalary() << " $ as a salary." <<endl;
        }

        system("pause");
        system("cls");
    }

    void totalSalary()
    {
        system("cls");
        system("color 7");

        double sum = 0;
        for(int i=0; i < e_size; i++)
        {
            sum += employeeList[i]->getSalary();
        }
        cout << "The Total Salary Of All Employees Is -> " <<sum << " $" <<endl;

        system("pause");
        system("cls");
    }

    void employeeReporting()
    {
        system("cls");
        system("color 7");

        int index = employeeSearchHelper();

        if(index!=-1)
        {
            cout << "\t\t\nEmployee Found!\n" <<endl;
            cout << "Our loyal Employee " << employeeList[index]->getName() <<endl;
            cout << employeeList[index]->getName() << "'s Number is " << employeeList[index]->getPhone() <<endl;
            cout << ", His/Her Email is " << employeeList[index]->getEmail() <<endl;
            cout << ", Has an The ID of " << employeeList[index]->getEmployeeID() <<endl;
            cout << ", Called as " << employeeList[index]->getJobTitle() <<endl;
            cout << ", Belongs To Department Which is " ;
            employeeList[index]->getDepart();
            cout << "\n, Has a Benefit System Which is ";
            employeeList[index]->getBenefit();
            cout << "\n, Has Total Cash To Earn Equal " << employeeList[index]->getSalary() << " $ as a salary." <<endl;

            if(employeeList[index]->getType() == 'h')
            {
                cout << "And As He/She is Hourly Employee , He Has :- " <<endl;
                employeeList[index]->printMore();
            }
            else if (employeeList[index]->getType() == 'c')
            {
                cout << "And As He/She is Commission Employee , He Has :- " <<endl;
                employeeList[index]->printMore();
            }
            else if(employeeList[index]->getType() == 's')
            {
                cout << "And As He/She is Salaried Employee , He Has :- " <<endl;
                employeeList[index]->printMore();
            }
            else if(employeeList[index]->getType() == 'm')
            {
                cout << "And As He/She is Manager Employee , He Has :- " <<endl;
                employeeList[index]->printMore();
            }
        }


        system("pause");
        system("cls");
    }

};

#endif // HRSYSTEM_H
