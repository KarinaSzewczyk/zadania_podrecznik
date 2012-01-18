#include <iostream>
#include <fstream>
#include <cstring>


/*Napisa� funkcj� zwracaj�c� liczb� wyst�pie� jakiego� znaku w jakim� napisie.
Wykorzystuj�c t� funkcj� napisa� funkcj� wczytuj�c� z pliku �dane.txt� do jakiej� jednowymiarowej,
n-elementowej tablicy wiersze, kt�re zawieraj� mniej ni� jak�� ilo�� wyst�pie� jakiego� znaku
(tzn. funkcja ma wczytywa� kolejne wiersze z pliku, sprawdza� je
i ewentualnie wpisywa� do tablicy � a� do zape�nienia ca�ej tablicy).
Korzystaj�c z tej funkcji napisa� program, kt�ry z pliku �dane.txt� przepisze do tablicy A wiersze
zawieraj�ce mniej ni� dwie litery �a�, do tablicy B- z tego samego pliku, zaczynaj�c od pocz�tku -
wiersze zawieraj�ce mniej ni� 10 liter �b�.
Dla uproszczenia przyj��, �e w pliku jest dostateczna liczba wierszy. */

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
