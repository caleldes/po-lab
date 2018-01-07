#ifndef UNTITLED5_5_H
#define UNTITLED5_5_H
#include <iostream>
#include <math.h>
#include "5.5.h"
using namespace std;

int Potega2(int liczba)
{
    return liczba*liczba;
}

float CircleArea(float promien)
{
    return M_PI*promien*promien;
}

float Max(float x1, float x2, float x3)
{
    if(x1>=x2 and x1>=x3) return x1;
    if(x2>=x1 and x2>=x3) return x2;
    return x3;
}

float MaxTab(float tab[], int sizeTab)
{
    float max=tab[0];
    for(int i=1; i<sizeTab; i++)
    {
        if(tab[i]>max) max=tab[i];
    }
    return max;
}

int IsPrime(int liczba)
{
    if(liczba<2) return 0;
    for(int i=2; i<liczba; i++)
    {
        if(liczba%i==0) return 0;
    }
    return 1;
}

void main5()
{
    float tab[5]={4, 2, 7, 8, 1};
    cout << Potega2(4) << endl;
    cout << CircleArea(2.5) << endl;
    cout << Max(4.1, 5.2, 5.1) << endl;
    cout << MaxTab(tab, 5) << endl;
    cout << IsPrime(1) << endl;
    cout << IsPrime(7) << endl;
    cout << IsPrime(12) << endl;
    zad5_5();
}
#endif //UNTITLED5_5_H
