#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "Employee.h"

class ProductionWorker : public Employee
{
private:
    int shift;
    double hourlyPayRate;

public:
    // Constructors
    ProductionWorker();
    ProductionWorker(std::string name, std::string number, std::string date, int shift, double payRate);

    // Accessors
    int getShift() const;
    std::string getShiftName() const;
    double getPayRate() const;

    // Mutators
    void setShift(int shift);
    void setPayRate(double payRate);
};

#endif
