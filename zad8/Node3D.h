#ifndef UNTITLED5_NODE3D_H
#define UNTITLED5_NODE3D_H
#include <iostream>
#include "Node.h"

using namespace std;

class Node3D : public Node{
public:
    Node3D(int x, int y, int z);
    Node3D(int odksztalcenie, int predkosc_odk, int temperatura, int x, int y, int z);
    ~Node3D();
    void wypisz() const override;
};
#endif //UNTITLED5_NODE3D_H
