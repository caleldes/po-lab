#ifndef UNTITLED5_ZAD6_H
#define UNTITLED5_ZAD6_H
#include <iostream>
#include "Pracownik.h"
#include "Kierownik.h"
#include "Informatyk.h"
using namespace std;

void mainZad6()
{
    string imie, nazwisko;
    cin >> imie >> nazwisko;
    Pracownik A("dajGlos", "b");
    Pracownik B;
    Pracownik C(imie, nazwisko);
    cout << A << endl;
    cout << B << endl;
    cout << C << endl;
    Informatyk D;
    cout << D << endl;
    Kierownik E;
    cout << E << endl;
    Kierownik a;
    Informatyk b;
    Pracownik c;
    Pracownik zespol[3]= {a,b,c};
    cout << zespol[0] << endl;
    cout << zespol[1] << endl;
    cout << zespol[2] << endl;

}
#endif //UNTITLED5_ZAD6_H
