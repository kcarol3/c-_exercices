#ifndef TEAMLEADER_H
#define TEAMLEADER_H
#include "employee.h"
#include <iostream>

class TeamLeader: public Employee {
public:
    TeamLeader(){};
    TeamLeader(string newSurname, int newAge, int newExperience,int value);
    ~TeamLeader(){};
    virtual float calculateBonus(int value) override;
    virtual void show() override;
};

#endif // TEAMLEADER_H
