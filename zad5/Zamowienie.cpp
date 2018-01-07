#include "Zamowienie.h"

int Zamowienie::licznik = 0;

Zamowienie::Zamowienie(int id)
{
    this->id=id;
    licznik++;
    produkty = new Produkt[limit];
}

Zamowienie::Zamowienie(const Zamowienie & A)
{
    id=A.id;
    ilosc_produktow = A.ilosc_produktow;
    limit = A.limit;
    produkty = new Produkt[limit];
    for(int i=0; i<ilosc_produktow; i++)
    {
        produkty[i]=Produkt(A.produkty[i]);
    }
    licznik++;
}

Zamowienie::~Zamowienie(){
    licznik--;
    delete produkty;
};

Zamowienie Zamowienie::operator+=(Produkt& B) {
    if(ilosc_produktow < limit){
        produkty[ilosc_produktow]= Produkt(B);
        ilosc_produktow++;
    }
    return *this;
}

Zamowienie Zamowienie::operator-=(Produkt& B) {
    for(int i=0; i<ilosc_produktow; i++)
    {
        if(produkty[i] == B) {
            for(int j = i+1; j < ilosc_produktow; j++){
                produkty[j-1] = produkty[j];
            }
            produkty[ilosc_produktow-1] = Produkt();
            ilosc_produktow--;
            break;//bez break usuwa wszystkie
        }
    }
    return *this;
}

bool Zamowienie::operator==(const Zamowienie &A) const {
    if(limit != A.limit) return false;
    if(ilosc_produktow != A.ilosc_produktow) return false;
    for(int i=0; i<ilosc_produktow; i++)
    {
        if(produkty[i] != A.produkty[i])
            return false;
    }
    return true;
}

bool Zamowienie::operator!=(const Zamowienie &A) const {
    return !(A == *this);
}

ostream &operator <<(ostream &os, const Zamowienie &zamowienie) {
    os << "{id: " << zamowienie.id << ", "
       << "ilosc_produktow: " << zamowienie.ilosc_produktow << ", "
       << "limit: " << zamowienie.limit << ", "
       << "produkty: ";
    for(int i = 0; i < zamowienie.limit; i++){
        os << zamowienie.produkty[i] << ", ";
    }
    os << "}";
    return os;
}

Zamowienie& Zamowienie::operator++() {
    limit++;
    Produkt* tmp = produkty;
    produkty = new Produkt[limit];
    for(int i = 0; i < limit-1; i++){
        produkty[i] = tmp[i];
    }
    delete tmp;
    return *this;
}

Zamowienie Zamowienie::operator++(int) {
    Zamowienie tmp(*this);
    ++(*this);
    return tmp;
}

Zamowienie & Zamowienie::operator--() {
    limit--;
    Produkt* tmp = produkty;
    produkty = new Produkt[limit];
    for(int i = 0; i < limit; i++){
        produkty[i] = tmp[i];
    }
    delete tmp;
    return *this;
}

Zamowienie Zamowienie::operator--(int) {
    Zamowienie tmp(*this);
    --(*this);
    return tmp;
}

void *Zamowienie::operator new(size_t rozmiar) {
    return malloc(rozmiar);
}

Zamowienie::Zamowienie(){
    Zamowienie(0);
};
