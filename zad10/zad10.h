#ifndef UNTITLED5_ZAD10_H
#define UNTITLED5_ZAD10_H
#include <iostream>
#include <algorithm>
#include "Student.10.h"
#include <string>
#include "Error.h"
#include <fstream>

using namespace std;

bool isWhitespace(char c){
    return c == ' ';
}

void ltrim(string &s) {
    for(int i = 0; i < s.length() ; i++){
        if(!isWhitespace(s[i])){
            s.erase(s.begin(),s.begin()+i);
            return;
        }
    }
}


void rtrim(string &s) {
    for(int i = s.length()-1; i >= 0 ; i--){
        if(!isWhitespace(s[i])){
            s.erase(s.begin()+i+1,s.end());
            return;
        }
    }
}

void trim(string &s) {
    ltrim(s);
    rtrim(s);
}


int wczytajRok(){
    cout << "Podaj Rok: " << endl;
    int rok;
    cin >> rok;
    cin.ignore();
    if(cin.fail()){
        throw new Error("blad wczytania liczby");
    }
    if(rok<2000){
        throw new Error("Rok musi byc wiekszt od 2000");
    }
    return rok;
}

void checkName(string &s){
    if(s.length() < 1){
        throw new Error("Imie nie moze byc puste");
    }
    if(s[0] < 'A' || s[0] > 'Z'){
        throw new Error("Imie musi zaczynac sie duza litera");
    }
    for(int i = 1; i < s.length(); i++){
        if(s[i] < 'a' || s[i] > 'z'){
            throw new Error("Znalezionio niepoprawny znak w imieniu");
        }
    }
}

void checkLastName(string &s){
    if(s.length() < 1){
        throw new Error("Nazwisko nie moze byc puste");
    }
    if(s[0] < 'A' || s[0] > 'Z'){
        throw new Error("Nazwisko musi zaczynac sie duza litera");
    }
    for(int i = 1; i < s.length(); i++){
        if((s[i] < 'a' || s[i] > 'z') && s[i] != '-'){
            throw new Error("Znalezionio niepoprawny znak w nazwisku");
        }
    }
}

void checkKierunek(string &s){
    if(s.length() < 1){
        throw new Error("Kieruenk nie moze byc puste");
    }
    if(s[0] < 'A' || s[0] > 'Z'){
        throw new Error("Kierunek musi zaczynac sie duza litera");
    }
    for(int i = 1; i < s.length(); i++){
        if((s[i] < 'a' || s[i] > 'z') && s[i] != '-' && s[i] != ' '){
            throw new Error("Znalezionio niepoprawny znak w kierunku");
        }
    }
}

string wczytajImie(){
    cout << "Podaj Imiona: " << endl;
    string name;
    getline(cin,name);
    trim(name);
    for(int i = 0; i < name.length(); i++) {
        char a = name[i];
        if (a == ' ') {
            string firstName = name.substr(0, i);
            string secondName = name.substr(i);
            trim(firstName);
            checkName(firstName);
            trim(secondName);
            checkName(secondName);
            return firstName + ' ' + secondName;
        }
    }
    checkName(name);
    return name;
}

string wczytajNazwisko(){
    cout << "Podaj Nazwisko: " << endl;
    string name;
    getline(cin,name);
    trim(name);
    checkLastName(name);
    return name;
}

bool doubleCheck(double a, double b){
    return abs(a-b) < 0.0000001;
}

double wczytajOcene(){
    cout << "Podaj Ocene: " << endl;
    double ocena;
    cin >> ocena;
    cin.ignore();
    if(cin.fail()) {
        throw new Error("Blad wczytania double");
    }
    if(doubleCheck(ocena,2.0) || doubleCheck(ocena,3.0) || doubleCheck(ocena, 3.5) || doubleCheck(ocena,4.0) || doubleCheck(ocena, 4.5) || doubleCheck(ocena,5.0)){
        return ocena;
    }
    throw new Error("Ocena nie w skali");
}

string wczytajKierunek(){
    cout << "Podaj Kierunek: " << endl;
    string name;
    getline(cin,name);
    trim(name);
    checkKierunek(name);
    return name;
}



void Uzupelnij(Student &a)
{
    do{
        try{
            a.imie = wczytajImie();
            break;
        }
        catch(Error* x){
            cerr << "Error: " << x->what() << endl;
            cin.clear();
            cin.sync();
        }
    }while(true);
    do{
        try{
            a.nazwisko = wczytajNazwisko();
            break;
        }
        catch(Error* x){
            cerr << "Error: " << x->what() << endl;
            cin.clear();
            cin.sync();
        }
    }while(true);
    do{
        try{
            a.kierunek = wczytajKierunek();
            break;
        }
        catch(Error* x){
            cerr << "Error: " << x->what() << endl;
            cin.clear();
            cin.sync();
        }
    }while(true);
    do{
        try{
            a.rok = wczytajRok();
            break;
        }
        catch(Error* x){
            cerr << "Error: " << x->what() << endl;
            cin.clear();
            cin.sync();
        }
    }while(true);
    do{
        try{
            a.ocena = wczytajOcene();
            break;
        }
        catch(Error* x){
            cerr << "Error: " << x->what() << endl;
            cin.clear();
            cin.sync();
        }
    }while(true);


}


void a(){
    Student a;
    Uzupelnij(a);
    cout << a;
}

void b(){
    string outputFileName = "test.txt";
    Student tab[3];
    for(int i = 0; i < 3; i++) {
        tab[i].imie = "przykladowe imie";
        tab[i].nazwisko = "przykladowe nazwisko";
        tab[i].ocena = 2 + i;
        tab[i].rok = 2020;
        tab[i].kierunek = "IO";
    }



    std::ofstream writeFile;
    writeFile.exceptions (ifstream::failbit | ifstream::badbit);
    try {
        writeFile.open(outputFileName);
        for(int i = 0; i < 3; i++){
            writeFile << tab[i];
        }
        writeFile.close();

    }
    catch (exception const& e) {
        cerr << "Exception: " << e.what() << endl;
    }
}

void c(){

    string inputFileName = "test.txt";
    ifstream readFile;
    readFile.exceptions (ifstream::failbit | ifstream::badbit);

    try{
        readFile.open(inputFileName);
        char c;
        while (readFile.get(c))          // loop getting single characters
            std::cout << c;

        readFile.close();
    }
    catch (exception const& e) {
        cerr << "Exception: " << e.what() << endl;
    }
}


void mainZad10()
{

//    a();

    b();

    c();



}
#endif //UNTITLED5_ZAD10_H
