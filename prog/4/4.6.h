#ifndef UNTITLED5_4_6_H
#define UNTITLED5_4_6_H
void iloczynSkalarny(int size)
{
    float v1[size];
    float v2[size];
    float v3[size];
    cout << "podaj wektor1:";
    for(int i=0; i<size; i++)
    {
        cin >> v1[i];
    }
    cout << "podaj wektor2:";
    for(int j=0; j<size; j++)
    {
        cin >> v2[j];
    }
    for(int k=0; k<size; k++)
    {
        v3[k]=v1[k]*v2[k];
        cout << v3[k] << ", ";
    }
}
#endif //UNTITLED5_4_6_H
