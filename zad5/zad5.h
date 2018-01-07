#ifndef UNTITLED5_ZAD5_H
#define UNTITLED5_ZAD5_H
#include <iostream>
#include "Produkt.h"
#include "Zamowienie.h"
using namespace std;

void mainZad5() {
    Produkt A("dajGlos", 1);
    Produkt B[3];
    B[0] = Produkt("b1", 1);
    B[1] = Produkt("b2", 2);
    B[2] = Produkt("b3", 3);
    Zamowienie C(1);
    C += A;
    C += A;
    C += B[2];
    Zamowienie D(C);
    cout << C << endl;
    cout << D << endl;
    cout << (C==D) << endl;
    C -= A;
    cout << C << endl;
    cout << D << endl;
    cout << (C==D) << endl;
    Zamowienie* zamowienie = new Zamowienie(5);
    cout << *zamowienie;
    delete zamowienie;
}
#endif //UNTITLED5_ZAD5_H
