#include <iostream>
#include <fstream>
#include <cstring>


/*Napisaæ funkcjê zwracaj¹c¹ liczbê wyst¹pieñ jakiegoœ znaku w jakimœ napisie.
Wykorzystuj¹c tê funkcjê napisaæ funkcjê wczytuj¹c¹ z pliku ’dane.txt’ do jakiejœ jednowymiarowej,
n-elementowej tablicy wiersze, które zawieraj¹ mniej ni¿ jak¹œ iloœæ wyst¹pieñ jakiegoœ znaku
(tzn. funkcja ma wczytywaæ kolejne wiersze z pliku, sprawdzaæ je
i ewentualnie wpisywaæ do tablicy – a¿ do zape³nienia ca³ej tablicy).
Korzystaj¹c z tej funkcji napisaæ program, który z pliku ‘dane.txt’ przepisze do tablicy A wiersze
zawieraj¹ce mniej ni¿ dwie litery ‘a’, do tablicy B- z tego samego pliku, zaczynaj¹c od pocz¹tku -
wiersze zawieraj¹ce mniej ni¿ 10 liter ‘b’.
Dla uproszczenia przyj¹æ, ¿e w pliku jest dostateczna liczba wierszy. */

using namespace std;
const int n = 7;

int znak_w_napisie(string napis, char zn)
{
    int m = 0;
    for(unsigned int i = 0; i < napis.size(); i++)
        if(napis[i] == zn)
            m++;
  return m;
}

void wczytujaca( string array[n], char zn, int k)
{
    ifstream plik("dane.txt");
    string wiersz;

    if(!plik.good())
        cout << "Blad pliku";

    int i = 0;
    while(!plik.eof() && i < n)
    {       getline(plik, wiersz);
            if(znak_w_napisie(wiersz, zn) < k)
                    {
                        array[i] = wiersz ;
                        i++;
                    }


    }

    plik.close();

}


int main()
{
    string A[n], B[n];
    wczytujaca(A, 'a', 2);
    wczytujaca(B, 'b', 10);

    for(int i = 0; i < n; i++)
        cout << A[i] << endl;
    cout << endl<< "Tablica B: " << endl;

    for(int i = 0; i < n; i++)
        cout << B[i] << endl;
    return 0;
}
