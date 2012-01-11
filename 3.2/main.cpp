#include <iostream>
#include <cstring>
#include <cstdlib>


/*Wczytaæ dane o towarach postaci (nazwa, cena) do tablicy rekordów A[n][n] (n-sta³a),
po czym zamieniæ miejscami towar najdro¿szy z najtañszym na g³ównej przek¹tnej tablicy
i wydrukowaæ wierszami tablicê wynikow¹.*/

using namespace std;

struct Dane
{
    string nazwa;
    double cena;
};

int main()
{
    const int n = 3;

    Dane array[n][n];

    for(int i = 0; i < n; i++ )
        for(int j = 0; j < n; j++ )
            cin >> array[i][j].nazwa >> array[i][j].cena;

        int i_min = 0, i_max = 0;

        for(int i= 1; i < n; i++)

            {if(array[i][i].cena < array[i_min][i_min].cena)
                 i_min = i;
            else if(array[i][i].cena > array[i_max][i_max].cena)
                i_max = i;
            }


        Dane t = array[i_min][i_min];
        array[i_min][i_min]=array[i_max][i_max];
        array[i_max][i_max]=t;


     for(int i = 0; i < n; i++ )
       {
            for(int j = 0; j < n; j++ )
            cout << array[i][j].nazwa<< ' ' << array[i][j].cena << ' ';
            cout << endl;
       }


    return 0;
}
