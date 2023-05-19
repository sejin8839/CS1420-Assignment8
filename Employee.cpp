#include "Employee.h"

// Default constructor
Employee::Employee()
{
    employeeName = "";
    employeeNumber = "";
    hireDate = "";
}

// Parameterized constructor
Employee::Employee(std::string name, std::string number, std::string date)
{
    employeeName = name;
    employeeNumber = number;
    hireDate = date;
}

// Accessors
std::string Employee::getName() const
{
    return employeeName;
}

std::string Employee::getNumber() const
{
    return employeeNumber;
}

std::string Employee::getHireDate() const
{
    return hireDate;
}

// Mutators
void Employee::setName(std::string name)
{
    employeeName = name;
}

void Employee::setNumber(std::string number)
{
    employeeNumber = number;
}

void Employee::setHireDate(std::string date)
{
    hireDate = date;
}
