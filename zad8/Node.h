#ifndef UNTITLED5_NODE_H
#define UNTITLED5_NODE_H
#include <iostream>
using namespace std;

class Node{
protected:
    int id;
    static int licznik;
    int zmienne[3];
    double* wspolrzedne = nullptr;
public:
    Node();
    Node(int odksztalcenie, int predkosc_odk, int temperatura);
    virtual void wypisz() const = 0;
};
#endif //UNTITLED5_NODE_H
