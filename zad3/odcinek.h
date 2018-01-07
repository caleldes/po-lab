#ifndef UNTITLED5_ODCINEK_H
#define UNTITLED5_ODCINEK_H

#include "okrag.h"

class Odcinek{

    Punkt poczatek, koniec;

    Odcinek(Punkt poczatek, Punkt koniec){
        this->poczatek = poczatek;
        this->koniec = koniec;
    }

    ~Odcinek(){
    }

    friend bool Przeciecie(Okrag&, Okrag&);

    double dlugoscOdcinka()
    {
        int a = koniec.x - poczatek.x;
        int b = koniec.y-poczatek.y;
        return sqrt(a*a+b*b);
    }
};
#endif //UNTITLED5_ODCINEK_H
