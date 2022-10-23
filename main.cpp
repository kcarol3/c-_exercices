#include <iostream>
#include "employee.h"
#include "developer.h"
#include "teamLeader.h"
#define n 4
using namespace std;

int main()
{
    Employee *tab[n];
    tab[0] = new TeamLeader("Kurowski",23,6,3000);
    tab[1] = new Developer("Kramek",34,2,2700);
    tab[2] = new Developer("Zdzichu",51,10,3400);
    tab[3] = new TeamLeader("Samson",48,14,4000);

    for (int i=0;i<4;i++) {
        tab[i]->show();
        cout<<endl;
    }
    cout<<endl;
    cout<<"Pracownicy pracujacy powyzej 5 lat:"<<endl<<endl;
    Employee::whoWorksMoreThan5Years(tab,n);

    cout<<endl;
    cout<<"Ilosc pracownikow ktorzy maja bonus ponizej sredniej: ";
    cout<<Employee::howManyEarnLessThanMeanBonus(tab,n)<<endl;

    for (int i=0;i<4;i++) {
        delete tab[i];
    }

    return 0;
}
