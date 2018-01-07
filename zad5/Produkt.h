#ifndef UNTITLED5_PRODUKT_H
#define UNTITLED5_PRODUKT_H
#include <iostream>
using namespace std;

class Produkt{
    friend class Zamowienie;
    string nazwa;
    int cena;
public:
    Produkt(string nazwa, int cena);
    Produkt(Produkt& A);
    Produkt();
    ~Produkt(){};
    friend ostream & operator <<( ostream & os, const Produkt & x );
    friend istream & operator >>( istream & is, Produkt & x );
    bool operator==(const Produkt &A) const;
    bool operator!=(const Produkt &A) const;
};
#endif //UNTITLED5_PRODUKT_H
