#ifndef UNTITLED5_ZAD10_H
#define UNTITLED5_ZAD10_H
#include <iostream>
#include "Student.10.h"
#include "Error.h"

using namespace std;

void Uzupelnij(Student &a)
{
    int rok;
    do{
        cin >> rok; //>> a.nazwisko >> a.kierunek >> a.rok >> a.ocena;
        cin.ignore();
        a.rok=!cin.fail()? rok : throw new Error("blad");
        if(rok<2000){
            throw new Error("blad");
        }
    } while(true);
}

void mainZad10()
{
    Student a;
    try{
        Uzupelnij(a);
    }
    catch(Error* x){
        cerr << "Error: " << x->what() << endl;
    }
    cout << a;
}
#endif //UNTITLED5_ZAD10_H
