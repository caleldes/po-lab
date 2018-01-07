#ifndef UNTITLED5_4_2_H
#define UNTITLED5_4_2_H
int max3(int tab[], int size)
{
    int max=tab[0];
    for(int i=1; i<size; i++)
    {
        if(tab[i]>max)
        {
            max=tab[i];
        }
    }
    return max;
}
#endif //UNTITLED5_4_2_H
