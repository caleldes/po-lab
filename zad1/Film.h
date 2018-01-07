#ifndef UNTITLED2_FILM_H
#define UNTITLED2_FILM_H

#include <iostream>
using namespace std;

struct Film
{
    string tytul;
    string rezyser;
    void Wypisz()
    {
        cout << "{" << tytul << "," << rezyser << "}";
    }
    void Uzupelnij(string tytul, string rezyser)
    {
        this->rezyser = rezyser;
        this->tytul = tytul;
//        rezyser = _rezyser;
//        tytul = _tytul;
    }
};

void Wypisz(Film film);

//void Wypisz(Film film){
//    cout << film.tytul << " " << film.rezyser << endl;
//}
//
//void Uzupelnij(Film& film, string tytul, string rezyser){
//    film.rezyser = rezyser;
//    film.tytul = tytul;
//}
//
//void Uzupelnij(Film* _this, string tytul, string rezyser){
//    _this->rezyser = rezyser;
//    _this->tytul = tytul;
//}

#endif //UNTITLED2_FILM_H
