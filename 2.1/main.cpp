/*Napisa� program drukuj�cy sum� ca�kowit� wyraz�w, sum� wyraz�w ujemnych
oraz sum� wyraz�w dodatnich ci�gu geometrycznego zadanego przez wyraz pocz�tkowy a
i iloraz q (program ma zmusi� u�ytkownika, by poda� niezerowe warto�ci a i q).
Obliczane ma by� n pocz�tkowych wyraz�w, gdzie n jest r�wnie� wprowadzane przez u�ytkownika
(aby obliczy� kolejny wyraz ci�gu geometycznego, nale�y poprzedni pomno�y� przez q). */


#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    double a, q, suma, sumad, sumau;
    suma = sumad = sumau = 0;
    int n;
    cout << "Ciag geometryczny/n";

    do
    {
    cout << "Podaj pierwszy wyraz ciagu:";
    cin >> a;
    cout << "a= " << a << endl;

    cout << "Podaj iloraz ciagu";
    cin >> q;
    cout << "q= " << q << endl;

    cout << "podaj liczbe wyrazow ciagu";
    cin >> n;
    }
    while(q == 0 || n == 0 || a == 0);

    suma=a;
    if(a>0)
        sumad=a;
    else
        sumau=a;

    for(int i=0; i<n; i++)
    {
        a = q * a;
        suma = suma + a;
        if(a>0)
            sumad += a;
        else
            sumau += a;
        cout << a;
    }

    cout << "Suma wyrazow ciagu: " << suma << endl << "suma wyrazow dodatnich: " << sumad << endl << "suma wyrazow ujemnych" << sumau <<endl;
    return 0;
}
