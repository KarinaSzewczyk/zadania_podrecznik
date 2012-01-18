#include <iostream>

using namespace std;


/*Znaki w tablicy
Wczytywac z klawiatury znaki do tablicy (char a[n], gdzie n - jest sta³a const np. 10 )
umieszczajac litery na poczatku, a pozosta³e znaki na koncu tablicy. Wypisz:
1. ile wczytano ma³ych liter,
2. ile wczytano duzych liter,
3. ile wczytano cyfr,
4. ile wczytano pozosta³ych znaków.*/

int main()
{
    const int n = 10;
    char a[n];
    char zn;
    int l_malych = 0;
    int l_duzych = 0;
    int l_cyfr = 0;
    int l_reszty = 0;
    int poczatek = 0;
    int koniec = 0;

    while(koniec + poczatek < n)
    {
        cin >> zn;
        if(zn >= 'a' && zn <= 'z' || zn >= 'A' && zn <= 'Z')
            a[poczatek++ ] = zn;
        else
            a[ n - 1 - koniec++ ] = zn;
    }

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    for(int i = 0; i < n; i++)
    {
        if(a[i] >= 'a' && a[i] <= 'z')
            l_malych ++;
        else if(a[i] >= 'A' && a[i]<= 'Z')
            l_duzych ++;
        else if(a[i] >= '0' && a[i] <= '9')
            l_cyfr++;
        else
            l_reszty++;
    }


    cout << "Wczytano: " << endl << l_malych << " malych liter" << endl << l_duzych << " duzych liter" << endl << l_cyfr << " cyfr"
    << endl << l_reszty  <<" pozostalych znakow" << endl;
    return 0;
}
