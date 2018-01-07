//#ifndef UNTITLED5_6_H
//#define UNTITLED5_6_H
//#include <iostream>
//using namespace std;
//
//struct Punkt6{
//    double px, py;
//    Punkt6(){
//        this->px=0;
//        this->py=0;
//    }
//    Punkt6(int px, int py) {
//        this->px=px;
//        this->py=py;
//    }
//    Punkt6(char tabP[])
//    {
//        char* pEnd;
//        double px, py, pz;
//        px = strtod(tabP, &pEnd);
//        if(*pEnd==NULL) cout << "bledna ilosc parametrow" << endl;
//        py = strtod(pEnd, &pEnd);
//        if(*pEnd==NULL)
//        {
//            this->px=px;
//            this->py=py;
//        }
//        else cout << "bledna ilosc parametrow" << endl;
//    }
//    void showP()
//    {
//        cout << "{" << this->px << ", " << this->py << "}" << endl;
//    }
//};
//struct Wektor2D{
//    double Ax, Ay;
//    double Bx, By;
//    Wektor2D(){
//        this->Ax=0;
//        this->Ay=0;
//        this->Bx=0;
//        this->By=0;
//    }
//    Wektor2D(int Ax, int Ay,int Bx, int By) {
//        this->Ax=Ax;
//        this->Ay=Ay;
//        this->Bx=Bx;
//        this->By=By;
//    }
//    Wektor2D(char tabW[])
//    {
//        char* wEnd;
//        double tab[4];
//        tab[0]=strtod(tabW, &wEnd);
//        for(int i=1; i<4; i++)
//        {
//            if(*wEnd==NULL)
//            {
//                cout << "bledna ilosc parametrow" << endl;
//                break;
//            }
//            else
//            {
//                tab[i] = strtod(wEnd, &wEnd);
//            }
//        }
//        if(*wEnd==NULL)
//        {
//            this->Ax=tab[0];
//            this->Ay=tab[1];
//            this->Bx=tab[2];
//            this->By=tab[3];
//        }
//        else cout << "bledna ilosc parametrow" << endl;
//    }
//    void showW()
//    {
//        cout << "{" << this->Ax << ", " << this->Ay << "}" << ", " << "{" << this->Bx << ", " << this->By << "}" << endl;
//    }
//};
//
////Wektor2D wektorMiedzyPunktami(Punkt6 a, Punkt6 b)
////{
////
////}
//Wektor2D wektoryDodawanie(Wektor2D a, Wektor2D b)
//{
//    Wektor2D c(a.Ax+b.Ax, a.Ay+b.Ay, a.Bx+b.Bx, a.By+b.By);
//    return c;
//}
//Wektor2D wektoryOdejmowanie(Wektor2D a, Wektor2D b)
//{
//    Wektor2D c(a.Ax-b.Ax, a.Ay-b.Ay, a.Bx-b.Bx, a.By-b.By);
//    return c;
//}
//
//void main6(){
//    char tabP[]="1.1";
//    char tabW[]="3.3 4.4";
//    Punkt6 a(tabP);
//    Wektor2D b(tabW);
//    a.showP();
//    b.showW();
//}
//#endif //UNTITLED5_6_H
