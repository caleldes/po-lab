#ifndef UNTITLED5_KOT_H
#define UNTITLED5_KOT_H
#include <iostream>
#include "Zwierzeta.h"

using namespace std;

class Kot : public Zwierze{
public:
    string nazwaKota;
    Kot(string nazwaKota);
    Kot(string nazwaKota, int iid);
    Kot(Kot& A);
    void dajGlos() override;
    void wypisz() override;
    friend ostream & operator <<( ostream & os, const Kot & x );
    ~Kot();
};
#endif //UNTITLED5_KOT_H
