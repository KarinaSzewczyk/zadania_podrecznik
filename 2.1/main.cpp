/*Napisaæ program drukuj¹cy sumê ca³kowit¹ wyrazów, sumê wyrazów ujemnych
oraz sumê wyrazów dodatnich ci¹gu geometrycznego zadanego przez wyraz pocz¹tkowy a
i iloraz q (program ma zmusiæ u¿ytkownika, by poda³ niezerowe wartoœci a i q).
Obliczane ma byæ n pocz¹tkowych wyrazów, gdzie n jest równie¿ wprowadzane przez u¿ytkownika
(aby obliczyæ kolejny wyraz ci¹gu geometycznego, nale¿y poprzedni pomno¿yæ przez q). */


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
