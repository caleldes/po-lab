#ifndef UNTITLED5_ZAD7_H
#define UNTITLED5_ZAD7_H
#include <iostream>
#include "Zwierzeta.h"
#include "kot.h"
#include "pies.h"
using namespace std;

void mainZad7()
{
    Kot kot("Mruczek");
    Kot kot2(kot);
    Pies pies("Burek");
    Pies pies2(pies);
    cout << kot << endl;
    cout << kot2 << endl;
    cout << pies<< endl;
    cout << pies2<< endl;
    kot.dajGlos();
    kot2.dajGlos();
    pies.dajGlos();
    pies2.dajGlos();

    Zwierze * zwierzeta[10];
    for(int i =0 ; i < 10; i++){
        if(i % 2 == 0){
            zwierzeta[i] = new Kot("Kot");
        }
        else{
            zwierzeta[i] = new Pies("Pies");
        }
    }
    for(int i = 0; i< 10 ; i++){
        zwierzeta[i]->dajGlos();
    }
    for(int i = 0; i< 10 ; i++){
        zwierzeta[i]->wypisz();
    }
    for(int i = 0; i< 10; i++){
        delete zwierzeta[i];
    }

}
#endif //UNTITLED5_ZAD7_H
