#ifndef UNTITLED5_ZAD4_H
#define UNTITLED5_ZAD4_H

#include <iostream>
#include <complex.h>

using namespace std;

class LiczbaZespolona{
    int czRzeczywista;
    int czUrojona;
    friend LiczbaZespolona operator+(LiczbaZespolona&, LiczbaZespolona&);
    friend LiczbaZespolona operator*(LiczbaZespolona&, LiczbaZespolona&);
    friend LiczbaZespolona operator/(LiczbaZespolona&, LiczbaZespolona&);
    friend LiczbaZespolona operator-(LiczbaZespolona&, LiczbaZespolona&);
    friend void Wypisz1(LiczbaZespolona);
public:
    LiczbaZespolona(int czRz, int czU)
    {
        this->czRzeczywista = czRz;
        this->czUrojona = czU;
    }
    ~LiczbaZespolona() {
    }
    // Operator wypisania obiektu Int do strumienia std::ostream (std::cout, std::cerr, itp)
    friend ostream & operator <<( ostream & os, const LiczbaZespolona & x )
    {
        os << x.czRzeczywista << " + " << x.czUrojona << "i";
        return os;
    }

    // Operator wczytania ze strumienia std::istream (std::cin, itp)
    friend istream & operator >>( istream & is, LiczbaZespolona & x )
    {
        is >> x.czRzeczywista >> x.czUrojona;
        return is;
    }
};

//Lzesp&operator=(const Lzesp&, const Lzesp&)
LiczbaZespolona operator+(LiczbaZespolona& A, LiczbaZespolona& B)
{
    return LiczbaZespolona(A.czRzeczywista+B.czRzeczywista,A.czUrojona+B.czUrojona);
}

LiczbaZespolona operator*(LiczbaZespolona& A, LiczbaZespolona& B) {
    return LiczbaZespolona(A.czRzeczywista*B.czRzeczywista-A.czUrojona*B.czUrojona,A.czRzeczywista*A.czUrojona+B.czRzeczywista*B.czUrojona );
}

LiczbaZespolona operator/(LiczbaZespolona & A, LiczbaZespolona & B) {
    if(B.czUrojona!=0 and B.czRzeczywista!=0)
        return LiczbaZespolona((A.czRzeczywista*B.czRzeczywista+A.czUrojona*B.czUrojona)/(B.czRzeczywista*B.czRzeczywista+B.czUrojona*B.czUrojona),(A.czUrojona*B.czRzeczywista-A.czRzeczywista*B.czUrojona)/(B.czRzeczywista*B.czRzeczywista+B.czUrojona*B.czUrojona));
}

LiczbaZespolona operator-(LiczbaZespolona & A, LiczbaZespolona & B) {
    return LiczbaZespolona(0, 0);
}

void Wypisz1(LiczbaZespolona x)
{
    cout<<x.czRzeczywista<<", "<<x.czUrojona<<endl;
}

void mainZad4()
{
    LiczbaZespolona A(3,4);
    LiczbaZespolona B(1,7);
    complex<int> a(1,2);
    LiczbaZespolona C = A+B;
    cin >> C;
    cout << C << endl;
    Wypisz1(C+A);
    A*B;
    A/B;
    A-B;
}

#endif //UNTITLED5_ZAD4_H

// Porównaj wyniki z typem <complex>
// #include<complex>
// complex<double> dajGlos(1,7);