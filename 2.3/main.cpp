/*

Z pliku "dane_a.txt" wczytaæ znaki do tablicy A[w][k] (w, k - sta³e), z pliku "dane_b.txt" wczytaæ znaki do tablicy B[w][k].
Utworzyæ tablice C i D zawieraj¹ce w kolejnych elementach:
C: element tablicy A, jeœli suma indeksów jest parzysta, element tablicy B,
 jeœli suma indeksów jest nieparzysta,
D: element tablicy B, jeœli suma indeksów jest parzysta, element tablicy A,
jeœli suma indeksów jest nieparzysta.

Wydrukowaæ wszystkie tablice. W programie wykorzystaæ nastêpuj¹ce podprogramy
(okreœlenie "jakiœ" oznacza parametr podprogramu):

    * Funkcjê wczytuj¹c¹ dane z pliku o jakiejœ nazwie do jakiejœ tablicy;
    * Funkcjê drukuj¹c¹ jak¹œ tablicê;
    * Funkcjê tworz¹c¹ jak¹œ tablicê Z z jakichœ tablic X i Y w sposób podany powy¿ej. */

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
