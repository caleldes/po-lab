#include "kot.h"

void Kot::dajGlos() {
    cout << "miau" << endl;
}

Kot::Kot(string nazwaKota) : Kot(nazwaKota, id++){
    cout << "konstruktor sparametryzowanego kota" << endl;
}

Kot::Kot(Kot &A) : Kot(A.nazwaKota,A.iid){
    cout << "konstruktor kopi kota" << endl;

}

// Operator wypisania obiektu Int do strumienia std::ostream (std::cout, std::cerr, itp)
ostream & operator <<( ostream & os, const Kot & x )
{
    os << "{" << x.cecha_wspolna << ", " << x.nazwaKota << "}";
    return os;
}


Kot::Kot(string nazwaKota, int iid) {
    this->nazwaKota=nazwaKota;
    this->iid=iid;
    licznik++;
    cout << "konstruktor kota" << endl;
}

Kot::~Kot() {
    cout << "dekonstruktor kota" << endl;
}

void Kot::wypisz() {
    cout << "{" << this->cecha_wspolna << ", " << this->nazwaKota << "}"<< endl;

}
