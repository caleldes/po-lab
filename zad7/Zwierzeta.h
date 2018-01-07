#ifndef UNTITLED5_ZWIERZETA_H
#define UNTITLED5_ZWIERZETA_H
#include <iostream>
using namespace std;

class Zwierze{
protected:
    static int id;
    static int licznik;
    int iid;
    string cecha_wspolna="zwierze domowe";
public:
    virtual void dajGlos()= 0;
    virtual void wypisz()= 0;
    virtual ~Zwierze();
};
#endif //UNTITLED5_ZWIERZETA_H
