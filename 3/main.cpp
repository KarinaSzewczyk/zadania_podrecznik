
/*Napisaæ funkcjê sprawdzaj¹c¹, czy w jakimœ napisie wystêpuje jakiœ znak
(okreœlenie "jakiœ" oznacza parametr funkcji). Funkcja ma zwracaæ wartoœæ true,
jeœli znak wystêpuje, false w przeciwnym wypadku. Napisaæ funkcjê przepisuj¹c¹ na ekran,
 z pliku o jakiejœ nazwie, linijki nie zawieraj¹ce jakiegoœ znaku. Funkcja ma wykorzystywaæ wczeœniej
 opisan¹ funkcjê (okreœlenie "jakiœ" oznacza parametr funcji). Napisaæ program wyœwietlaj¹cy na ekranie te
 linijki z pliku o nazwie podawanej przez u¿ytkownika, które nie zawieraj¹ litery 'a'.
 Program ma wykorzystywaæ powy¿sz¹ funkcjê. */


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
