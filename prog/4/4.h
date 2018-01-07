#ifndef UNTITLED5_4_H
#define UNTITLED5_4_H
#include <iostream>
#include "4.1.h"
#include "4.2.h"
#include "4.3.h"
#include "4.4.h"
#include "4.5.h"
#include "4.6.h"
#include "4.7.h"
#include "4.8.h"
using namespace std;

void showProg4(int tab[], int size)
{
    cout << "{" << tab[0];
    for(int i=1; i<size; i++)
    {
        cout << ", " << tab[i];
    }
    cout << "}";
}

void main4()
{
    int size=3;
    int tab[size]={2,8,4};
    //cout << fib(12); //4.1
    //cout << max3(tab, size); //4.2
    //sort3(tab, size); //4.3
    //miejscaZerowe(-1, 3, 4); //4.4
    //cout << wartoscWielomianu(2,3); //4.5
    //iloczynSkalarny(size); //4.6
    //bubble_sort(tab, size); //4.7
    //Quick_sort(tab, 0, size-1); //4.8
    //showProg4(tab, size);

}
#endif //UNTITLED5_4_H
