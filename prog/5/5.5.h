#ifndef UNTITLED5_5_5_H
#define UNTITLED5_5_5_H
struct Student1{
    string imie;
    string nazwisko;
    int rok;
    double ocena1;
    double ocena2;
    double ocena3;
    double srednia;
};

double Srednia(double ocena1,double ocena2,double ocena3)
{
    return (ocena1+ocena2+ocena3)/3;
}

void zad5_5()
{
    Student1 A;
    cin >> A.imie >> A.nazwisko >> A.rok >> A.ocena1 >> A.ocena2 >> A.ocena3;
    A.srednia=Srednia(A.ocena1, A.ocena2, A.ocena3);
    cout << "{" << A.imie << ", "<< A.nazwisko << ", " << A.rok << ", " << A.ocena1 << ", " << A.ocena2 << ", " << A.ocena3 << ", " << A.srednia << "}" << endl;

}
#endif //UNTITLED5_5_5_H
