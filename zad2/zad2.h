#ifndef UNTITLED5_ZAD2_H
#define UNTITLED5_ZAD2_H
#include <iostream>
using namespace std;

void mainZad2() {
    class Car {
        int a, b;
        const int size = 5;
        int *tab = new int[size];

    public:
        Car(int a, int b) {
            this->a = a;
            this->b = b;
            for (int i = 0; i < size; i++) {
                this->tab[i] = a;
            }
        }

        Car(const Car &other) {
            this->a = other.a;
            this->b = other.b;
            for (int i = 0; i < other.size; i++) {
                tab[i] = other.tab[i];
            }
        }

        void Wypisz() {
            cout << "{" << a << ", " << b << ", ";
            for (int i = 0; i < size; i++) {
                cout << tab[i] << ", ";
            }
            cout << "}" << endl;
        }

        int getA() const {
            return a;
        }

        void setA(int a) {
            this->a = a;
            for (int i = 0; i < size; i++) {
                tab[i] = a;
            }
        }

        int getB() const {
            return b;
        }

        void setB(int b) {
            this->b = b;
        }

        ~Car() {
            cout << "niszczenie -_-" << endl;
        }
    };

//void foo(){
//    cout << "foo" << endl;
//    Car misio(2,3);
//    Car bla(3,3);
//    misio.Wypisz();
//    bla.Wypisz();
//    cout << "..." << endl;
//}
//
//Car foo2(){
//    cout << "foo2" << endl;
//    Car misio(1,1);
//    return misio;
//}
//
//void foo3(){
//    Car* p = new Car(4,4);
//    p->Wypisz();
//    //delete p;
//    cout << "...";
//}

//    foo3();
//
//    Car kicia(1,2);
//    Car c = foo2();
//    foo();
//
//    kicia.Wypisz();
//    c.Wypisz();

        Car kicia(1, 2);
        Car misio(kicia);
        kicia.setA(5);
        kicia.Wypisz();
        misio.Wypisz();
    }

#endif //UNTITLED5_ZAD2_H
