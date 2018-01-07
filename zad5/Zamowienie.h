#ifndef UNTITLED5_ZAMOWIENIE_H
#define UNTITLED5_ZAMOWIENIE_H
#include <iostream>
#include "Produkt.h"
using namespace std;

class Zamowienie
{
    static int licznik;
    int id;
    int ilosc_produktow=0;
    int limit=5;
    Produkt* produkty;
public:
    Zamowienie();
    Zamowienie(int id);
    Zamowienie(const Zamowienie & A);
    ~Zamowienie();
    Zamowienie operator+=(Produkt& B);
    Zamowienie operator-=(Produkt& B);
    bool operator==(const Zamowienie &A) const;
    bool operator!=(const Zamowienie &A) const;
    friend ostream &operator<<(ostream &os, const Zamowienie &zamowienie);
    Zamowienie & operator++();
    Zamowienie operator++(int);
    Zamowienie & operator--();
    Zamowienie operator--(int);
    void * operator new(size_t rozmiar);
};
#endif //UNTITLED5_ZAMOWIENIE_H
