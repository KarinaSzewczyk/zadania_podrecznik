/*

Z pliku "dane_a.txt" wczyta� znaki do tablicy A[w][k] (w, k - sta�e), z pliku "dane_b.txt" wczyta� znaki do tablicy B[w][k].
Utworzy� tablice C i D zawieraj�ce w kolejnych elementach:
C: element tablicy A, je�li suma indeks�w jest parzysta, element tablicy B,
 je�li suma indeks�w jest nieparzysta,
D: element tablicy B, je�li suma indeks�w jest parzysta, element tablicy A,
je�li suma indeks�w jest nieparzysta.

Wydrukowa� wszystkie tablice. W programie wykorzysta� nast�puj�ce podprogramy
(okre�lenie "jaki�" oznacza parametr podprogramu):

    * Funkcj� wczytuj�c� dane z pliku o jakiej� nazwie do jakiej� tablicy;
    * Funkcj� drukuj�c� jak�� tablic�;
    * Funkcj� tworz�c� jak�� tablic� Z z jakich� tablic X i Y w spos�b podany powy�ej. */

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstring>

using namespace std;

    const int w = 5;
    const int k = 3;



void czytaj(char array[][k], string nazwa)
{
    //cout << "Podaj nazwe pliku" << endl;
    //cin >> nazwa;
    ifstream plik(nazwa.c_str());

    if(!plik.good())
        cout << "Blad otworzenia pliku \n";

        for(int i = 0; i < w; i++)
            for( int j = 0; j < k; j++)
               plik >> array[i][j];

    plik.close();

}

void drukuj(char array[][k])
{
    for(int i=0; i<w; i++)
    {
            for(int j=0; j<k; j++)
                cout << array[i][j] << "\t";
        cout << endl;
        cout << endl;
    }
}



void tworz_tablice(char arrayw[][k], char array[][k],char array2[][k])
{
    for(int i = 0; i < w; i++)
        for(int j = 0; j < k; j++)
            if((i + j) % 2 == 0)
                arrayw[i][j] = array[i][j];
            else
                arrayw[i][j] = array2 [i][j];


}



int main()
{
    char A[w][k], B[w][k], C[w][k], D[w][k];

    czytaj(A, "plik_a.txt");
    czytaj(B, "plik_b.txt");

    tworz_tablice(C, A, B);
    tworz_tablice(D, B, A);

    cout << "Tablica A " << endl;
    drukuj(A);
    cout << "Tablica B:" << endl;
    drukuj(B);
    cout << "Tablica C:" << endl;
    drukuj(C);
    cout << "Tablica D:" << endl;
    drukuj(D);


    return 0;
}
