#include "employee.h"


int Employee::getAge() const
{
    return age;
}

int Employee::getExperience() const
{
    return experience;
}
int Employee::getSalary() const
{
    return salary;
}


void Employee::setSalary(int newSalary)
{
    salary = newSalary;
}

void Employee::whoWorksMoreThan5Years(Employee **tab, int tabSize)
{
    for (int i=0;i<tabSize;i++) {
        if (tab[i]->getExperience() > 5) {
            tab[i]->show();
            cout<<endl;
        }
    }
}

int Employee::howManyEarnLessThanMeanBonus(Employee **tab, int tabSize)
{
    float sum=0;
    int l=0;

    for (int i=0;i<tabSize;i++) {
        sum+=tab[i]->salary;
    }
    float sr = sum/(float)tabSize;

    for(int i=0;i<tabSize;i++) {
        if(sr>tab[i]->salary) l++;
    }

    return l;
}

Employee::Employee(string newSurname, int newAge, int newExperience, int value)
{
    age=newAge;
    surname=newSurname;
    experience = newExperience;
    salary=value;
}

Employee::~Employee()
{

}

int Employee::ageEmployment()
{
    return age-experience;
}
const string &Employee::getSurname() const
{
    return surname;
}
