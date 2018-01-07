#ifndef UNTITLED2_CLIENT_H
#define UNTITLED2_CLIENT_H

#include <iostream>
#include "Film.h"

using namespace std;

class Klient{
    string imie,nazwisko;
    int static ID;
    int iloscFilmow = 0;
    int const Limit = 5;
    Film *filmy = new Film[Limit];

public:
    void Uzupelnij(string imie, string nazwisko){
        this->imie = imie;
        this->nazwisko = nazwisko;
    }
    void Wypisz(){
        cout << "{" << imie << ", " << nazwisko << ", ";
        for(int i=0; i<iloscFilmow; i++)
        {
            filmy[i].Wypisz();
            cout << ", ";
        }
        cout << "}" << endl;
    }
    void Przypisz(Film film)
    {
        if(iloscFilmow < Limit) {
            filmy[iloscFilmow] = film;
            iloscFilmow++;
        }
    }
    void Przypisz(Film* film, int num)
    {
        for(int i = 0; i < num; i++) {
            if (iloscFilmow < Limit) {
                filmy[iloscFilmow] = film[i];
                iloscFilmow++;
            }
        }
    }
};

#endif// CLIENT