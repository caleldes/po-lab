#ifndef UNTITLED5_4_4_H
#define UNTITLED5_4_4_H
#include <iostream>
#include <math.h>
using namespace std;

void miejscaZerowe(float x2, float x1, float x0)
{
    float delta;
    float X1, X2;
    delta=x1*x1-4*x2*x0;
    if(delta>0)
    {
        X1=(-x1+sqrt(delta))/2*x2;
        X2=(-x1-sqrt(delta))/2*x2;
        cout << "x1=" << X1 << ", x2=" << X2;
    }
    else if(delta==0)
    {
        X1=-x1/2*x2;
        cout << "x0=" << X1;
    }
    else
    {
        cout << "brak";
    }
}
#endif //UNTITLED5_4_4_H
