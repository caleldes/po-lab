#ifndef UNTITLED5_4C_1_H
#define UNTITLED5_4C_1_H
#include <iostream>
using namespace std;
int select_sort(int tab[], int N)
{
    int ilosc_porownan = 0;
    for(int i=0; i<N; i++)
    {
        int min=i;
        for(int j=i+1; j<N; j++)
        {
            if(tab[j] < tab[min]) min=j;
            ilosc_porownan++;
        }
        swap(tab[i], tab[min]);
    }
    return ilosc_porownan;
}
#endif //UNTITLED5_4C_1_H
