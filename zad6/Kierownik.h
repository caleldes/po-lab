#ifndef UNTITLED5_KIEROWNIK_H
#define UNTITLED5_KIEROWNIK_H
#include <iostream>
#include "Pracownik.h"
using namespace std;

class Kierownik : public Pracownik{
public:
    const double przelicznik=5;
    Kierownik();
    Kierownik(string imie, string nazwisko);
    Kierownik(Kierownik& A);
    int getStawka() const;
    ~Kierownik();

};
#endif //UNTITLED5_KIEROWNIK_H
