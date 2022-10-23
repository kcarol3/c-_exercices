#ifndef DEVELOPER_H
#define DEVELOPER_H
#include "employee.h"
#include <iostream>
using namespace std;
class Developer: public Employee {
public:
    Developer(string newSurname, int newAge, int newExperience,int value);
    ~Developer(){};
    virtual float calculateBonus(int value) override;
    virtual void show() override;
};

#endif // DEVELOPER_H
