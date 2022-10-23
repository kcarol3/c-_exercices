#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee {
    private:
        string surname;
        int age;
        int experience;
        int salary;
    public:
        Employee(string newSurname, int newAge, int newExperience,int value);
        Employee();

        virtual ~Employee();

        virtual void show(){};
        virtual float calculateBonus(int value)=0;

        int ageEmployment();

        const string &getSurname() const;

        int getAge() const;

        int getExperience() const;

        int getSalary() const;

        void setSalary(int newSalary);

        static void whoWorksMoreThan5Years(Employee **tab, int tabSize);
        static int howManyEarnLessThanMeanBonus(Employee **tab, int tabSize);
};

#endif // EMPLOYEE_H
