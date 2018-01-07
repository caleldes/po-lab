#ifndef UNTITLED5_INFORMATYK_H
#define UNTITLED5_INFORMATYK_H
#include <iostream>
#include "Pracownik.h"
using namespace std;

class Informatyk : public Pracownik{
public:
    const double przelicznik=3.5;
    Informatyk();
    Informatyk(string imie, string nazwisko);
    Informatyk(Informatyk& A);
    int getStawka() const;
    ~Informatyk();

};
#endif //UNTITLED5_INFORMATYK_H
