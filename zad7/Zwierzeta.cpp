#include "Zwierzeta.h"

int Zwierze::licznik = 0;
int Zwierze::id = 0;

Zwierze::~Zwierze() {
    licznik--;
    cout << "dekonstruktor zwierza" << endl;
}

