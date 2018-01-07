#include "Student.10.h"

Student::Student() {

}

Student::Student(string imie, string nazwisko, string kierunek, int rok, Ocena ocena) {
    this->imie=imie;
    this->nazwisko=nazwisko;
    this->kierunek=kierunek;
    this->rok=rok;
    this->ocena=ocena;
}

// Operator wypisania obiektu Int do strumienia std::ostream (std::cout, std::cerr, itp)
ostream & operator <<( ostream & os, const Student & x )
{
    os << "{" << x.imie << ", " << x.nazwisko << ", " << x.kierunek
       << ", " << x.rok << ", " << x.ocena << "}";
    return os;
}
// Operator wczytania ze strumienia std::istream (std::cin, itp)
istream & operator >>( istream & is, Student & x )
{
    is >> x.imie >> x.nazwisko >> x.kierunek >> x.rok >> x.ocena;
    return is;
}

Student::~Student() {

}
