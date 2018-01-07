#include "Produkt.h"

Produkt::Produkt(string nazwa, int cena)
{
    this->nazwa=nazwa;
    this->cena=cena;
}

Produkt::Produkt(Produkt& A)
{
    this->nazwa=A.nazwa;
    this->cena=A.cena;
}

Produkt::Produkt()
{
    this->nazwa="";
    this->cena=0;
}

// Operator wypisania obiektu Int do strumienia std::ostream (std::cout, std::cerr, itp)
ostream & operator <<( ostream & os, const Produkt & x )
{
    os << "{" << x.nazwa << ", " << x.cena << "}";
    return os;
}
// Operator wczytania ze strumienia std::istream (std::cin, itp)
istream & operator >>( istream & is, Produkt & x )
{
    is >> x.nazwa >> x.cena;
    return is;
}

bool Produkt::operator==(const Produkt &A) const {
    return nazwa == A.nazwa &&
           cena == A.cena;
}

bool Produkt::operator!=(const Produkt &A) const {
    return !(A == *this);
}