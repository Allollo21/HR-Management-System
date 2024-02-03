#include <iostream>
#include <unistd.h>
#include "employee.h"
#include "hourlyemployee.h"
#include "commissionemployee.h"
#include "salariedemployee.h"
#include "manageremployee.h"
#include "benefit.h"
#include "healthbenefit.h"
#include "dentalbenefit.h"
#include "department.h"
#include "hrsystem.h"
using namespace std;

HRSystem* hr = new HRSystem;

void employeeHandle()
{

    int ch;
    do
    {
        system("cls");
        system("color 0A");
        cout << "\t\t\t------------------------------------"<<endl;
        cout << "\t\t\t|--  EMPLOYEE INFO. MANAGEMENT ----|"<<endl;
        cout << "\t\t\t------------------------------------"<<endl;
        cout << "\t\t\t[1] Add An Employee"<<endl;
        cout << "\t\t\t[2] Assign Employee To A Department"<<endl;
        cout << "\t\t\t[3] Assign Employee To A Benefit"<<endl;
        cout << "\t\t\t[4] Delete An Employee"<<endl;
        cout << "\t\t\t[5] Modify An Employee"<<endl;
        cout << "\t\t\t[6] Search For An Employee"<<endl;
        cout << "\t\t\t[0] Return To Main Menu"<<endl;
        cout << "Enter Your Choice: ";
        cin >> ch;
        switch(ch)
        {
        case 1:
            hr->addEmployee();
            break;

        case 2:
            hr->assignDepart();
            break;

        case 3:
            hr->assignBenefit();
            break;

        case 4:
            hr->deleteEmployee();
            break;

        case 5:
            hr->modifyEmployee();
            break;

        case 6:
            hr->searchEmployee();
            break;

        case 0:
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
            sleep(3);
        }
    }
    while(ch!=0);
}

void departHandle()
{

    int ch2;
    do
    {
        system("cls");
        system("color 0A");
        cout << "\t\t\t------------------------------------"<<endl;
        cout << "\t\t\t|--EMPLOYEE DEPARTMENT MANAGEMENT--|"<<endl;
        cout << "\t\t\t------------------------------------"<<endl;
        cout << "\t\t\t[1] Add A Department"<<endl;
        cout << "\t\t\t[2] Delete A Department"<<endl;
        cout << "\t\t\t[3] Modify A Department"<<endl;
        cout << "\t\t\t[4] Show Departments"<<endl;
        cout << "\t\t\t[0] Return To Main menu"<<endl;
        cin >> ch2;
        switch(ch2)
        {
        case 1:
            hr->addDepart();
            break;

        case 2:
            hr->deleteDepart();
            break;

        case 3:
            hr->modifyDepart();
            break;

        case 4:
            hr->showDepart();
            break;

        case 0:
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
            sleep(3);
        }
    }
    while(ch2!=0);
}

void benefitsHandle()
{
    int ch;
    do
    {
        system("cls");
        system("color 0A");
        cout << "\t\t\t------------------------------------"<<endl;
        cout << "\t\t\t|-- EMPLOYEE BENEFITS MANAGEMENT --|"<<endl;
        cout << "\t\t\t------------------------------------"<<endl;
        cout << "\t\t\t[1] Add A Benefit"<<endl;
        cout << "\t\t\t[2] Delete A Benefit"<<endl;
        cout << "\t\t\t[3] Modify A Benefit"<<endl;
        cout << "\t\t\t[4] Show Benefits"<<endl;
        cout << "\t\t\t[0] Return To Main menu"<<endl;
        cin >> ch;
        switch(ch)
        {
        case 1:
            hr->addBenefit();
            break;

        case 2:
            hr->deleteBenefit();
            break;

        case 3:
            hr->modifyBenefit();
            break;

        case 4:
            hr->showBenefits();
            break;

        case 0:
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
            sleep(3);
        }
    }
    while(ch!=0);
}

void salaryHandle()
{
    int ch;
    do
    {
        system("cls");
        system("color 0A");
        cout << "\t\t\t------------------------------------"<<endl;
        cout << "\t\t\t|--       Salary MANAGEMENT      --|"<<endl;
        cout << "\t\t\t------------------------------------"<<endl;
        cout << "\t\t\t[1] Employee Salary"<<endl;
        cout << "\t\t\t[2] Total Salary"<<endl;
        cout << "\t\t\t[0] Return To Main menu"<<endl;
        cin >> ch;
        switch(ch)
        {
        case 1:
            hr->employeeSalary();
            break;

        case 2:
            hr->totalSalary();
            break;

        case 0:
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
            sleep(3);
        }
    }
    while(ch!=0);

}

void searchHandle ()
{
    int ch;
    do
    {
        system("cls");
        system("color 0A");
        cout << "\t\t\t------------------------------------"<<endl;
        cout << "\t\t\t|--  SEARCH SECTION MANAGEMENT   --|"<<endl;
        cout << "\t\t\t------------------------------------"<<endl;
        cout << "\t\t\t[1] Search For An Employee"<<endl;
        cout << "\t\t\t[2] Search For A department"<<endl;
        cout << "\t\t\t[3] Search For A Benefit System"<<endl;
        cout << "\t\t\t[0] Return To Main menu"<<endl;
        cin >> ch;
        switch(ch)
        {
        case 1:
            hr->searchEmployee();
            break;

        case 2:
            hr->searchDepart();
            break;

        case 3:
            hr->searchBenefit();
            break;

        case 0:
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
            sleep(3);
        }
    }
    while(ch!=0);
    }

int main()
{
    int choice;
    do
    {
        system("cls");
        system("color 0A");
        cout << "\t\t\t------------------------------------"<<endl;
        cout << "\t\t\t|--    HR MANAGEMENT SYSTEM    ----|"<<endl;
        cout << "\t\t\t------------------------------------"<<endl;
        cout << "\t\t\t[1] Employee Information Management"<<endl;      //manages employees infos.
        cout << "\t\t\t[2] Benefits Management"<<endl;                  //manages benefits of employees
        cout << "\t\t\t[3] Department Management"<<endl;                //manages departments
        cout << "\t\t\t[4] Salary Calculation"<<endl;                   //calculates all money spent on employees salaries and wahtever
        cout << "\t\t\t[5] Reporting"<<endl;                            //generates a report of all employees infos and benefits and salaries and whatever
        cout << "\t\t\t[6] Search"<<endl;                               //searches for a specific employee and finds it and prints a report about him
        cout << "\t\t\t[0] Exit"<<endl;                                 //exits the program
        cout << "Enter Your Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:         //employee information
            employeeHandle();
            break;

        case 2:         //benefits information
            benefitsHandle();
            break;

        case 3:         //department information
            departHandle();
            break;

        case 4:         //salary calculations.
            salaryHandle();
            break;

        case 5:         //reporting
            hr->employeeReporting();
            break;

        case 6:         //searching
            searchHandle();
            break;

        case 0:         //exit
            cout << "Thank you for using HR Management System. Goodbye!" << endl;
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    }while (choice != 0);    // Repeat until the user chooses to exit

    delete hr;
    return 0;
}
