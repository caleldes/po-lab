#ifndef UNTITLED5_4C_2_H
#define UNTITLED5_4C_2_H
#include <iostream>
using namespace std;

void moduloDlaDuzych()
{
    string liczba;
    int dzielnik;
    int wynik=0;
    cout << "liczba:";
    cin >> liczba;
    cout << "dzielnik:";
    cin >> dzielnik;
    for(int i=0; i<liczba.length(); i++)
    {
        wynik=wynik*10+liczba[i]-'0';
        wynik=wynik%dzielnik;
    }
    cout << liczba << "%" << dzielnik << "=" << wynik;
}
#endif //UNTITLED5_4C_2_H
