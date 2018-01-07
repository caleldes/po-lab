#include "Node3D.h"
Node3D::Node3D(int x, int y, int z) : Node() {
    wspolrzedne = new double[3];
    wspolrzedne[0] = x;
    wspolrzedne[1] = y;
    wspolrzedne[2] = z;
}

void Node3D::wypisz() const {
    cout << "{id:" << this->id << ", odksztalcenie:" << this->zmienne[0]
         << ", predkosc odksztalcenia:" << this->zmienne[1]
         << ", temperatura:" << this->zmienne[2] << ", wartosc srednia:"
         << (this->zmienne[0]+this->zmienne[1]+this->zmienne[2])/3
         << ", x:" << this->wspolrzedne[0] << ", y:" << this->wspolrzedne[1]
         << ", z:" << this->wspolrzedne[2] << ", licznik:" << licznik << "}" << endl;
}

Node3D::~Node3D() {
    delete wspolrzedne;
}

Node3D::Node3D(int odksztalcenie, int predkosc_odk, int temperatura, int x, int y, int z)
        : Node(odksztalcenie,predkosc_odk,temperatura) {
    wspolrzedne = new double[3];
    wspolrzedne[0] = x;
    wspolrzedne[1] = y;
    wspolrzedne[2] = z;
}
