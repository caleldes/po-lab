#include "Kierownik.h"

Kierownik::Kierownik() : Pracownik() {
    cout << "konstruktor domyslego kierownika" << endl;
}

Kierownik::Kierownik(Kierownik &A) : Pracownik(A){
    cout << "konstruktor kopiujacego kierownika" << endl;
}

Kierownik::Kierownik(string imie, string nazwisko) : Pracownik(imie,nazwisko){
    cout << "konstruktor dowolnego kierownika" << endl;
}

int Kierownik::getStawka() const {
    return STAWKA*przelicznik;
}

Kierownik::~Kierownik() {
    cout << "dekonstruktor kierownika" << endl;
}
