#ifndef UNTITLED5_OKRAG_H
#define UNTITLED5_OKRAG_H

#include <cmath>
#include <iostream>
#include "punkt.h"

class Okrag{

    Punkt srodek;
    int promien;

    //friend double Odcinek::dlugoscOdcinka();
    friend bool Przeciecie(Okrag&, Okrag&);
    friend void Wypisz(Okrag&);

public:
    static int licznik;

    Okrag(Punkt srodek, int promien){
        this->srodek = srodek;
        this->promien = promien;
        licznik++;
    };

    Okrag(){
        this->srodek = {rand()%21 - 10, rand()%21 - 10};
        this->promien = rand()%20+1;
        licznik++;
    }

    ~Okrag(){
        licznik--;
    }
};

int Okrag::licznik = 0;
#endif //UNTITLED5_OKRAG_H
