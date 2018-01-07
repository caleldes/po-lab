#ifndef UNTITLED5_4B_H
#define UNTITLED5_4B_H
#include <iostream>
#include "4b.1.h"
#include "4b.2.h"
using namespace std;

void showProg4b(int tab[], int size)
{
    cout << "{" << tab[0];
    for(int i=1; i<size; i++)
    {
        cout << ", " << tab[i];
    }
    cout << "}";
}

void main4b()
{
    int size=8;
    int tab[size]={3,6,3,2,7,1,7,1};
    //merge_sort(tab,size); //4b.1
    //showProg4b(tab,size);
    //counting_sort(tab,size); // 4b.2

}
#endif //UNTITLED5_4B_H
