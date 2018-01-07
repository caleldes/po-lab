#ifndef UNTITLED5_4_8_H
#define UNTITLED5_4_8_H
#include <iostream>
using namespace std;

int partition_Lomuto (int tab[], int left , int right)
{
    int x=tab [right ]; // podział względem prawego elementu
    int i=left -1;
    for (int j= left;j < right;j ++)
        if(tab[j ]<x) {
            i ++;
            swap (tab[i ],tab[j ]) ;
        }
    swap (tab[ i +1] , tab[right ]) ;
    return i +1;
}
int partition_Hoare (int tab[] , int left, int right){
    int x=tab [left ]; // podział względem lewego elementu
    int i=left;
    int j= right +1;
    while ( true )
    {
        do{ i ++;} while (i <= right && tab [i]< x);
        do{ j --;} while (tab[ j]>x);
        if(i >j ) break;
        swap (tab[ i],tab[ j ]);
    }
    swap (tab[ j],tab[ left ]);
    return j;
}
void Quick_sort (int tab[], int left, int right)
{
    if(left >= right) return;
    int p= partition_Lomuto(tab ,left ,right); // Hoare ’s, Lomuto
    Quick_sort (tab ,left ,p -1);
    Quick_sort (tab ,p +1 , right);
}
#endif //UNTITLED5_4_8_H
