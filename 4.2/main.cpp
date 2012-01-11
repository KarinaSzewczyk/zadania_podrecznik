#include <iostream>
#include <cstring>
#include <cstdlib>

/*Wczyta� tablic� A[1..w, 1..k] (w, k-sta�e) rekord�w zawieraj�cych imi�,
nazwisko i ocen�, po czym wydrukowa� numery tych kolumn w tablicy,
w kt�rych nie ma ani jednej osoby z ocen� mniejsz� od 3,
a tak�e wydrukowa� ��czn� ilo�� takich kolumn.*/

using namespace std;

struct Dane{
    string imie, nazwisko;
    double ocena;
};


int main()
{
    const int w = 5;
    const int k = 3;
    int liczba = 0;
    Dane array[w][k];

    for(int i = 0; i < w; i++)
            for(int j = 0; j < k; j++)
                cin >> array[i][j].imie >> array[i][j].nazwisko >> array[i][j].ocena;



       for(int i = 0; i < w; i++)
        {
            for(int j = 0; j < k; j++)
                cout << array[i][j].imie << ' ' << array[i][j].nazwisko << ' ' << array[i][j].ocena << ' ' << ' ';
            cout << endl;
        }

        for(int i = 0; i < w; i++)
        {
            for(int j = 0; j < k; j++)
                if(array[i][j].ocena >=3)
                    cout << "numery kolumn nie zawierajace oceny 3 :  " << j;
                    liczba++;
        }
        cout << endl;
        cout << "Liczba kolumn, gdzie nikt nie ma oceny mniejszej od 3 wynosi : " << liczba;

    return 0;
}
