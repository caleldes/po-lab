#include "Node1D.h"

Node1D::Node1D(int x) : Node() {
    wspolrzedne = new double[1];
    wspolrzedne[0] = x;
}


void Node1D::wypisz() const {
    cout << "{id:" << this->id << ", odksztalcenie:" << this->zmienne[0]
         << ", predkosc odksztalcenia:" << this->zmienne[1]
         << ", temperatura:" << this->zmienne[2] << ", wartosc srednia:"
         << (this->zmienne[0]+this->zmienne[1]+this->zmienne[2])/3
         << ", x:" << this->wspolrzedne[0] << ", licznik:" << licznik <<"}" << endl;
}

Node1D::~Node1D() {
    delete wspolrzedne;
}

Node1D::Node1D(int odksztalcenie, int predkosc_odk, int temperatura, int x)
        : Node(odksztalcenie,predkosc_odk,temperatura) {
    wspolrzedne = new double[1];
    wspolrzedne[0] = x;
}
