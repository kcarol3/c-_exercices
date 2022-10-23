#include "teamLeader.h"


TeamLeader::TeamLeader(string newSurname, int newAge, int newExperience, int value): Employee(newSurname,newAge,newExperience, value)
{

}


float TeamLeader::calculateBonus(int value)
{
    return value*(1+getExperience()+getSalary());
}

void TeamLeader::show()
{
    cout<<"Jestem Team Leader z "<<getExperience()<<" letnim doswiadczeniem"<<endl;
    cout<<"Imie: "<<getSurname()<<endl;
    cout<<"Wiek: "<<getAge()<<endl;
    cout<<"Doswiadczenie: "<<getExperience()<<endl;
    cout<<"Wyplata: "<<getSalary()<<endl;
    cout<<"Zaczal prace w wieku "<< ageEmployment()<<endl;
    cout<<"Dostanie bonus: "<<calculateBonus(1)<<endl;

}
