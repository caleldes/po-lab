#ifndef UNTITLED5_PRACOWNIK_H
#define UNTITLED5_PRACOWNIK_H
#include <iostream>
using namespace std;

class Pracownik{
protected:

    string imie, nazwisko;
    static int id;
    int iid;
    static int licznik;
    const int STAWKA=10;
public:
    Pracownik();
    Pracownik(string imie, string nazwisko);
    Pracownik(string imie, string nazwisko, int iid);
    Pracownik(Pracownik &other);
    virtual ~Pracownik();
    virtual int getStawka()const;
    friend ostream & operator <<( ostream & os, const Pracownik & x );
    friend istream & operator >>( istream & is, Pracownik & x );

};
#endif //UNTITLED5_PRACOWNIK_H
