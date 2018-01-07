#ifndef UNTITLED5_ELEMENT_H
#define UNTITLED5_ELEMENT_H
#include <iostream>
using namespace std;

template<int _ilosc, class typ>
class Element{
    int id;
    static int licznik;
    typ* node= nullptr;
    int ilosc=_ilosc;
public:
    Element(typ *tab);
    ~Element();
    void wypisz();
};

template<int ilosc, class typ>
Element<ilosc,typ>::Element(typ *tab) {
    this->node = tab;
}

template<int ilosc, class typ>
Element<ilosc,typ>::~Element() {
    delete node;
}

template<int ilosc, class typ>
void Element<ilosc,typ>::wypisz() {
    for(int i=0; i<ilosc; i++)
    {
        this->node[i].wypisz();
    }
}


#endif //UNTITLED5_ELEMENT_H
