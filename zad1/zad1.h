//
// Created by natal on 05.11.2017.
//

#ifndef UNTITLED5_ZAD1_H
#define UNTITLED5_ZAD1_H

#include <iostream>
#include "Film.h"
#include "Client.h"

void mainZad1(){
    Film films[3];
    films[0].Uzupelnij("dajGlos","dajGlos");
    films[1].Uzupelnij("b","b");
    films[2].Uzupelnij("c","c");

    Klient A;
    Klient B;
    A.Uzupelnij("A", "A");
    B.Uzupelnij("B", "B");

    A.Przypisz(films[0]);
    A.Wypisz();
    B.Przypisz(films,3);
    B.Wypisz();

    Klient klients[5];
    for(int i=0; i<5; i++)
    {
        klients[i].Uzupelnij("C", "C");
        klients[i].Przypisz(films, 3);
        klients[i].Wypisz();
    }
}

#endif //UNTITLED5_ZAD1_H
