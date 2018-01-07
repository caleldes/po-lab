#ifndef UNTITLED5_4B_1_H
#define UNTITLED5_4B_1_H
bool niePowtarza(int tab[], int liczba, int size)
{
    for(int i=0; i<size; i++)
    {
        if(tab[i]==liczba)return false;
    }
    return true;
}

void posortowany(int jakaLiczba[], int ileRazy[], int size)
{
    int k=1;
    int koniec=1;
    while(koniec!=size)
    {
        for(int i=0; i<size; i++)
        {
            if(jakaLiczba[i]==k)
            {
                for(int j=0; j<ileRazy[i]; j++)
                {
                    cout << jakaLiczba[i];
                }
                koniec++;
            }
        }
        k++;
    }
}

void counting_sort(int tab[], int size)
{
    int jakaLiczba[size];
    int ileRazy[size];
    int size2=1;
    for(int i=0; i<size; i++)
    {
        if(niePowtarza(jakaLiczba,tab[i], size))
        {
            jakaLiczba[i]=tab[i];
            ileRazy[i]=0;
            for(int j=0; j<size; j++)
            {
                if(tab[i]==tab[j])
                    ileRazy[i]++;
            }
            size2++;
        }
    }
    posortowany(jakaLiczba, ileRazy, size2);
}
#endif //UNTITLED5_4B_1_H
