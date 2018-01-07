#ifndef UNTITLED5_NODE1D_H
#define UNTITLED5_NODE1D_H
#include <iostream>
#include "Node.h"

using namespace std;

class Node1D : public Node{
public:
    Node1D(int x);
    Node1D(int odksztalcenie, int predkosc_odk, int temperatura, int x);
    ~Node1D();
    void wypisz() const override;
};
#endif //UNTITLED5_NODE1D_H
