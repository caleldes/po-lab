#ifndef UNTITLED5_STUDENT_10_H
#define UNTITLED5_STUDENT_10_H
#include <iostream>
using namespace std;

class Student{
public:
    string imie, nazwisko, kierunek;
    int rok;
    double ocena;
    Student();
    Student(string imie, string nazwisko, string kierunek, int rok, double ocena);
    friend ostream & operator <<( ostream & os, const Student & x );
    friend istream & operator >>( istream & is, Student & x );
    ~Student();
};
#endif //UNTITLED5_STUDENT_10_H
