#include <iostream>


/*Napisaæ program, który oblicza i wyœwietla wartoœæ prêdkoœci cia³a v w ruchu jednostajnie przyspieszonym,
w kolejnych chwilach czasowych t=0, t=1, t=2 ....
Prêdkoœæ pocz¹tkowa v0 i przyspieszenie a >0 jest wprowadzane przez u¿ytkownika (
program ma wymusiæ na u¿ytkowniku podanie wartoœci a>0).
Drukowanie zakoñczyæ po przekroczeniu prêdkoœci 10 razy wiêkszej od prêdkoœci pocz¹tkowej.
Wzór na prêdkoœæ w ruchu jednostajnie przyspieszonym: v = v0+a*t (mo¿na wykorzystaæ wersjê przyrostow¹: dv=a*dt). */



using namespace std;

int main()
{
    double a, v0;
    double v = v0;;
    cout << "Podaj predkosc poczatkowa \nv0= ";
    cin >> v0;
    int t = 1;

    do
    {
        cout << "Podaj przyspieszenie(wieksze od zera)\na= ";
        cin >> a;
    }while(a <= 0);
    cout << "v0 = " << v0 << endl;
    while(v < 10 * v0)
    {
                v += a;
                cout <<"v"<< t <<" = " << v << endl;
                t++;

    }



    return 0;
}
