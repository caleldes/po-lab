#ifndef UNTITLED5_PIES_H
#define UNTITLED5_PIES_H
#include <iostream>
#include "Zwierzeta.h"

using namespace std;

class Pies : public Zwierze{
public:
    string nazwaPiesa;
    Pies(string nazwaPiesa);
    Pies(string nazwaPiesa, int iid);
    Pies(Pies& A);
    void dajGlos() override;
    void wypisz() override;
    friend ostream & operator <<( ostream & os, const Pies & x );
    ~Pies();

};
#endif //UNTITLED5_PIES_H
