#ifndef UNTITLED5_ZAD8_H
#define UNTITLED5_ZAD8_H
#include <iostream>
#include "Node1D.h"
#include "Element.h"
#include "Node2D.h"
#include "Node3D.h"

using namespace std;
typedef Element<3, Node2D> Element2dTri;
typedef Element<8, Node3D> Element3dOct;

void mainZad8()
{
    srand(time(NULL));
    Node2D a2D(2,1);
    Node2D b2D(2,2);
    Node2D c2D(2,3);
    Node2D tab2D[] = {a2D,b2D,c2D};
    Element2dTri node2D(tab2D);
    node2D.wypisz();

    Node3D a3D(3,1,1);
    Node3D b3D(3,1,2);
    Node3D c3D(3,1,3);
    Node3D d3D(3,2,1);
    Node3D e3D(3,2,2);
    Node3D f3D(3,2,3);
    Node3D g3D(3,3,1);
    Node3D h3D(3,3,2);
    Node3D tab3D[] = {a3D,b3D,c3D,d3D,e3D,f3D,g3D,h3D};
    Element3dOct node3D(tab3D);
    node3D.wypisz();
//    cout << (double)rand()/RAND_MAX * (b-a) + a // a <= x < b;
}
#endif //UNTITLED5_ZAD8_H
