# HR Management System

This is a Human Resources Management System written in C++ that helps manage employee information, department details, benefits, and salary calculations. The system provides a user-friendly interface through the console, allowing users to perform various HR-related tasks efficiently.

## Table of Contents
- [Features](#features)
- [Usage](#usage)
- [Modules](#modules)
- [How to Run](#how-to-run)
- [Dependencies](#dependencies)
- [Contributing](#contributing)
- [License](#license)

## Features

1. **Employee Information Management**
   - Add new employees
   - Assign employees to departments
   - Assign benefits to employees
   - Delete and modify employee records
   - Search for employee details

2. **Department Management**
   - Add new departments
   - Delete and modify department details
   - Display all departments

3. **Benefits Management**
   - Add new benefits
   - Delete and modify benefit details
   - Display all benefits

4. **Salary Calculation**
   - Calculate individual employee salaries
   - Calculate the total salary expenditure

5. **Reporting**
   - Generate reports of employee information, benefits, and salaries

6. **Search**
   - Search for specific employees, departments, and benefits

## Usage

The system provides a menu-driven interface to perform various HR-related tasks. Users can navigate through different options to manage employee information, departments, benefits, and salary calculations. Reports can also be generated to get a summary of employee details.

## Modules

1. **employee.h**
   - Contains the base class `Employee` and derived classes (`HourlyEmployee`, `CommissionEmployee`, `SalariedEmployee`, `ManagerEmployee`) representing different types of employees.

2. **benefit.h**
   - Base class `Benefit` and derived classes (`HealthBenefit`, `DentalBenefit`) representing different types of benefits.

3. **department.h**
   - Class `Department` to manage department details.

4. **hrsystem.h**
   - Class `HRSystem` that integrates all functionalities and manages the overall HR system.

## How to Run

1. Clone the repository to your local machine.
2. Compile the code using a C++ compiler (e.g., g++).
3. Run the compiled executable.

```bash
g++ main.cpp -o hr_management_system
./hr_management_system
