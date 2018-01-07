#ifndef UNTITLED5_ZAD10_H
#define UNTITLED5_ZAD10_H
#include <iostream>
#include "Student.10.h"
#include "Error.h"

using namespace std;


int wczytajRok(){
    cout << "Podaj Rok: " << endl;
    int rok;
    cin >> rok;
    cin.ignore();
    if(cin.fail()){
        throw new Error("blad wczytania liczby");
    }
    if(rok<2000){
        throw new Error("Rok musi byc wiekszt od 2000");
    }
    return rok;
}

Ocena wczytajOcena(){
    return Dwa;
}

void Uzupelnij(Student &a)
{
    do{
        try{
            int rok = wczytajRok();
            a.rok = rok;
            break;
        }
        catch(Error* x){
            cerr << "Error2: " << x->what() << endl;
            cin.clear();
            cin.sync();
        }
    }while(true);
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
