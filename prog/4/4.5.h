#ifndef UNTITLED5_4_5_H
#define UNTITLED5_4_5_H
int potega(int x, int n)
{
    if(n==0)return 1;
    for(int i=1; i<n; i++)
    {
        x=x*x;
    }
    return x;
}

float wartoscWielomianu(int wartosc, int size)
{
    float w[size];
    float odp=0;
    int tmp=0;
    for(int i=0; i<size; i++)
    {
        cin >> w[i];
    }
    for(int j=size-1; j>=0; j--)
    {
        odp=odp+w[j]*potega(wartosc, tmp);
        cout << odp << endl;
        tmp++;

    }
    return odp;
}


#endif //UNTITLED5_4_5_H
