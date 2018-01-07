#ifndef UNTITLED5_NODE2D_H
#define UNTITLED5_NODE2D_H
#include <iostream>
#include "Node.h"

using namespace std;

class Node2D : public Node{
public:
    Node2D(int x, int y);
    Node2D(int odksztalcenie, int predkosc_odk, int temperatura, int x, int y);
    ~Node2D();
    void wypisz() const override;
};
#endif //UNTITLED5_NODE2D_H
