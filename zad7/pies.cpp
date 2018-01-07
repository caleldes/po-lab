#include "pies.h"

void Pies::dajGlos() {
    cout << "hau" << endl;
}

Pies::Pies(string nazwaPiesa) : Pies(nazwaPiesa, id++){
    cout << "konstruktor sparametryzowanego piesa" << endl;
}

Pies::Pies(Pies &A) : Pies(A.nazwaPiesa,A.iid){
    cout << "konstruktor kopi piesa" << endl;

}

// Operator wypisania obiektu Int do strumienia std::ostream (std::cout, std::cerr, itp)
ostream & operator <<( ostream & os, const Pies & x )
{
    os << "{" << x.cecha_wspolna << ", " << x.nazwaPiesa << "}";
    return os;
}

Pies::Pies(string nazwaPiesa, int iid) {
    this->nazwaPiesa=nazwaPiesa;
    this->iid=iid;
    licznik++;
    cout << "konstruktor piesa" << endl;
}

Pies::~Pies() {
    cout << "dekonstruktor piesa" << endl;
}

void Pies::wypisz() {
    cout << "{" << this->cecha_wspolna << ", " << this->nazwaPiesa << "}" << endl;
}
