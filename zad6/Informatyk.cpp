#include "Informatyk.h"

Informatyk::Informatyk() : Pracownik() {
    cout << "konstruktor domyslego informatyka" << endl;
}

Informatyk::Informatyk(Informatyk &A) : Pracownik(A){
    cout << "konstruktor kopiujacego informatyka" << endl;
}

Informatyk::Informatyk(string imie, string nazwisko) : Pracownik(imie,nazwisko){
    cout << "konstruktor dowolnego informatyka" << endl;
}

int Informatyk::getStawka() const {
    return STAWKA*przelicznik;
}

Informatyk::~Informatyk() {
    cout << "dekonstruktor informatyka" << endl;

}
