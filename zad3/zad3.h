#ifndef UNTITLED5_ZAD3_H
#define UNTITLED5_ZAD3_H
#include <iostream>
#include <math.h>
#include <time.h>
#include "odcinek.h"

using namespace std;

bool Przeciecie(Okrag& A, Okrag& B)
{
    Odcinek odcinek(A.srodek, B.srodek);
    double dlug = odcinek.dlugoscOdcinka();
    return abs(A.promien - B.promien) < dlug and dlug < A.promien + B.promien;
}

void Wypisz(Okrag& A)
{
    cout << "{ " << A.promien <<", {" << A.srodek.x << ", "  <<  A.srodek.y <<"} }";
}

void foo1(){
    Okrag A({0,0},5);
    Okrag B({3,4},5);
    cout << Przeciecie(A, B) << endl;
}

void foo2(){
    srand (time(NULL));
    Okrag tab1[100];
    Okrag tab2[100];
    bool brak = true;
    for(int i = 0; i < 100; i++){
        if(Przeciecie(tab1[i], tab2[i])){
            brak = false;
            Wypisz(tab1[i]);
            Wypisz(tab2[i]);
            cout << i << " " << endl;
        }
    }
    if(brak){
        cout << "Brak przeciec" << endl;
    }
    cout << Okrag::licznik << endl;
}

int mainZad3()
{
    foo1();
    foo2();
    cout << Okrag::licznik << endl;
    return 0;
}
#endif //UNTITLED5_ZAD3_H
