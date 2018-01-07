#ifndef UNTITLED5_4_7_H
#define UNTITLED5_4_7_H
#include <iostream>
using namespace std;

int bubble_sort(int tab[], int N)
{
    bool if_swap;
    int result = 0;
    int posortowane=0;
    do
    {
        if_swap = false;
        for(int i=1; i<N-posortowane; i++)
        {
            result++;
            if(tab[i-1] > tab[i])
            {
                swap(tab[i-1], tab[i]);
                if_swap = true;
            }
        }
        posortowane++;
    }
    while(if_swap);
    return result;
}
#endif //UNTITLED5_4_7_H
