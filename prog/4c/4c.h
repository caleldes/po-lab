#ifndef UNTITLED5_4C_H
#define UNTITLED5_4C_H
#include <iostream>
#include "4c.1.h"
#include "4c.2.h"
using namespace std;

void showProg4c(int tab[], int size)
{
    cout << "{" << tab[0];
    for(int i=1; i<size; i++)
    {
        cout << ", " << tab[i];
    }
    cout << "}";
}

void main4c()
{
    int size=8;
    int tab[size]={3,6,3,2,7,1,7,1};
    //select_sort(tab,8); //
    //showProg4c(tab, size);
    moduloDlaDuzych();
}
#endif //UNTITLED5_4C_H
