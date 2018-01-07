#include "Node2D.h"
Node2D::Node2D(int x, int y) : Node() {
    wspolrzedne = new double[2];
    wspolrzedne[0] = x;
    wspolrzedne[1] = y;
}

void Node2D::wypisz() const {
    cout << "{id:" << this->id << ", odksztalcenie:" << this->zmienne[0]
         << ", predkosc odksztalcenia:" << this->zmienne[1]
         << ", temperatura:" << this->zmienne[2] << ", wartosc srednia:"
         << (this->zmienne[0]+this->zmienne[1]+this->zmienne[2])/3
         << ", x:" << this->wspolrzedne[0] << ", y:" << this->wspolrzedne[1] << ", licznik:" << licznik << "}" << endl;
}

Node2D::~Node2D() {
    delete wspolrzedne;
}

Node2D::Node2D(int odksztalcenie, int predkosc_odk, int temperatura, int x, int y)
        : Node(odksztalcenie,predkosc_odk,temperatura) {
    wspolrzedne = new double[2];
    wspolrzedne[0] = x;
    wspolrzedne[1] = y;
}
