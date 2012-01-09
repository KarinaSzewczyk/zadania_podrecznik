
/*Napisa� funkcj� sprawdzaj�c�, czy w jakim� napisie wyst�puje jaki� znak
(okre�lenie "jaki�" oznacza parametr funkcji). Funkcja ma zwraca� warto�� true,
je�li znak wyst�puje, false w przeciwnym wypadku. Napisa� funkcj� przepisuj�c� na ekran,
 z pliku o jakiej� nazwie, linijki nie zawieraj�ce jakiego� znaku. Funkcja ma wykorzystywa� wcze�niej
 opisan� funkcj� (okre�lenie "jaki�" oznacza parametr funcji). Napisa� program wy�wietlaj�cy na ekranie te
 linijki z pliku o nazwie podawanej przez u�ytkownika, kt�re nie zawieraj� litery 'a'.
 Program ma wykorzystywa� powy�sz� funkcj�. */


#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>

using namespace std;



bool sprawdzenie(string napis, char zn)
{
    for(int i=0; i< napis.length(); i++)
        if(napis[i] == zn)
            return true;
        return false;
}


void przepisz(string nazwa, char zn)
{
    ifstream plik(nazwa.c_str());
    //plik.unsetf(ios_base::skipws);
    string wiersz;

    while(!plik.eof())
    {
        getline(plik,wiersz);
        if(!sprawdzenie(wiersz, zn))
            cout << wiersz << endl;

    }

}

int main()
{
    string nazwa;
    cout << "podaj nazwe pliku do otwarcia \n";
    cin >> nazwa;

    ifstream plik(nazwa.c_str());
    if(!plik.good())
    {
        cout << "blad otwarcia pliku";
        return 1;
    }

    przepisz(nazwa, 'a');


    return 0;
}
