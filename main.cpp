/*
filename: main.cpp
Developer Name: ........
Date:
/


#include <iostream>
#include <iomanip>
#include "ProductionWorker.h"
using namespace std;
 
// Function prototype
void displayInfo(ProductionWorker);
 
int main()
{
    ProductionWorker pw("John Jones", "123", "1/1/2006", 2, 18.00);
    displayInfo(pw);
    return 0;
}
 
//******************************************************
// The displayInfo function displays a production      *
// worker's information.                    *
//******************************************************
void displayInfo(ProductionWorker e)
{
    cout << setprecision(2) << fixed << showpoint;
    cout << "Name: "
         << e.getName() << endl;
    cout << "Employee number: "
         << e.getNumber() << endl;
    cout << "Hire date: "
         << e.getHireDate() << endl;
    cout << "Shift: "
         << e.getShiftName() << endl;
    cout << "Shift number: "
         << e.getShiftNumber() << endl;
    cout << "Pay rate: "
         << e.getPayRate() << endl;
}