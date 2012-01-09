#include <iostream>
#include <cstdlib>
#include <cstring>

/*Napisaæ program wczytuj¹cy tablicê A[n][n] rekordów (n - sta³a)
zawieraj¹cych nazwê i liczbê rzeczywist¹. Nastêpnie w ka¿dym wierszu
tablicy znaleŸæ element o najwiêkszej wartoœci pola liczbowego i wstawiæ go
do wszystkich elementów danego wiersza. Wydrukowaæ tablicê kolumnami, tzn:

A[0,0], A[1,0], A[2,0] ... A[n-1,0], A[0,1], ... , A[n-1,n-1]. */

using namespace std;

struct Srekord
{
    string napis;
    double liczba;

};


int main()
{
    const int n=2;
    Srekord tablica[n][n];

    for(int i=0; i<n;i++)
        for(int j=0; j<n; j++)
            cin >> tablica[i][j].napis >> tablica[i][j].liczba;

    for(int i=0; i<n; i++)
    {
        int max= 0;
        for(int j = 1; j<n;j++)

        if(tablica[i][max].liczba < tablica[i][j].liczba)
        max=j;

   }
       for(int i=0; i<n; i++)
            for( int j=0; j< n; j++)
                cout << tablica[i][j].napis << tablica[i][j].liczba << endl;
    return 0;
}
