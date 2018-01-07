#ifndef UNTITLED5_STUDENT_10_H
#define UNTITLED5_STUDENT_10_H
#include <iostream>
using namespace std;

enum Ocena{
    Dwa,Trzy,TrzyPlus,Cztery,CzteryPlus,Piec
};

class Student{
public:
    string imie, nazwisko, kierunek;
    int rok;
    Ocena ocena;
    Student();
    Student(string imie, string nazwisko, string kierunek, int rok, Ocena ocena);
    friend ostream & operator <<( ostream & os, const Student & x );
    friend istream & operator >>( istream & is, Student & x );
    ~Student();
};


#endif //UNTITLED5_STUDENT_10_H
