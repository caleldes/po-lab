#include "Pracownik.h"

int Pracownik::licznik = 0;
int Pracownik::id = 0;

Pracownik::Pracownik() : Pracownik("Jan", "Kowalski"){
    cout << "konstruktor domylego pracownika" << endl;
}

Pracownik::Pracownik(string imie, string nazwisko) : Pracownik(imie, nazwisko, id++){
    cout << "konstruktor dowolnego pracownika" << endl;
}

Pracownik::Pracownik(Pracownik &other) : Pracownik(other.imie, other.nazwisko, other.iid){
    cout << "konstruktor kopiujacego pracownika" << endl;
}

Pracownik::Pracownik(string imie, string nazwisko, int iid) {
    this->imie=imie;
    this->nazwisko=nazwisko;
    this->iid=iid;
    licznik++;
    cout << "konstruktor pracownika" << endl;
}

Pracownik::~Pracownik() {
    licznik--;
    cout << "dekonstruktor pracownika" << endl;
}

int Pracownik::getStawka() const{
    return STAWKA;
}

// Operator wypisania obiektu Int do strumienia std::ostream (std::cout, std::cerr, itp)
ostream & operator <<( ostream & os, const Pracownik & x )
{
    os << "{" << x.iid << ", " << x.imie << ", " << x.nazwisko << ", " << x.getStawka() << "}";
    return os;
}
// Operator wczytania ze strumienia std::istream (std::cin, itp)
istream & operator >>( istream & is, Pracownik & x )
{
    is >> x.imie >> x.nazwisko;
    return is;
}
