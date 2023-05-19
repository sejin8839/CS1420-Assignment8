#include "ProductionWorker.h"

// Default constructor
ProductionWorker::ProductionWorker()
{
    shift = 0;
    hourlyPayRate = 0.0;
}

// Parameterized constructor
ProductionWorker::ProductionWorker(std::string name, std::string number, std::string date, int shift, double payRate)
    : Employee(name, number, date)
{
    this->shift = shift;
    hourlyPayRate = payRate;
}

// Accessors
int ProductionWorker::getShift() const
{
    return shift;
}

std::string ProductionWorker::getShiftName() const
{
    if (shift == 1)
        return "Day Shift";
    else if (shift == 2)
        return "Night Shift";
    else
        return "Invalid Shift";
}

double ProductionWorker::getPayRate() const
{
    return hourlyPayRate;
}

// Mutators
void ProductionWorker::setShift(int shift)
{
    this->shift = shift;
}

void ProductionWorker::setPayRate(double payRate)
{
    hourlyPayRate = payRate;
}
