#include <ctime>
#include "Node.h"
int Node::licznik = 0;

Node::Node(int odksztalcenie, int predkosc_odk, int temperatura) {
    this->id=licznik++;
    this->zmienne[0] = odksztalcenie;
    this->zmienne[1] = predkosc_odk;
    this->zmienne[2] = temperatura;
}

Node::Node() : Node(rand()%2,rand()%11,rand()%600 + 600) {
}
