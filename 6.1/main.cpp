#include <iostream>


/*Napisa� program, kt�ry oblicza i wy�wietla warto�� pr�dko�ci cia�a v w ruchu jednostajnie przyspieszonym,
w kolejnych chwilach czasowych t=0, t=1, t=2 ....
Pr�dko�� pocz�tkowa v0 i przyspieszenie a >0 jest wprowadzane przez u�ytkownika (
program ma wymusi� na u�ytkowniku podanie warto�ci a>0).
Drukowanie zako�czy� po przekroczeniu pr�dko�ci 10 razy wi�kszej od pr�dko�ci pocz�tkowej.
Wz�r na pr�dko�� w ruchu jednostajnie przyspieszonym: v = v0+a*t (mo�na wykorzysta� wersj� przyrostow�: dv=a*dt). */



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
