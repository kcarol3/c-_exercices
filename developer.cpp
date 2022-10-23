#include "developer.h"



void Developer::show()
{
    cout<<"Imie: "<<getSurname()<<endl;
    cout<<"Wiek: "<<getAge()<<endl;
    cout<<"Doswiadczenie: "<<getExperience()<<endl;
    cout<<"Wyplata: "<<getSalary()<<endl;
    cout<<"Zaczal prace w wieku "<< ageEmployment()<<" lat."<<endl;
    cout<<"Dostanie bonus: "<<calculateBonus(1)<<endl;
}

Developer::Developer(string newSurname, int newAge, int newExperience, int value): Employee(newSurname,newAge,newExperience, value){

}

float Developer::calculateBonus(int value)
{
    return value+0.2*value*(getSalary()+getExperience());
}
