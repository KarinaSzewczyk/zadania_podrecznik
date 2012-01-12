#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

using namespace std;


void Menu()
{

    cout << "Menu: " << endl << "Wczytaj nowy plik - 1" << endl << " Zakoncz - 2 " << endl;




}

void drukujaca(string nazwa, char zn)
{



    cout << "Podaj nazwe pliku" << endl;
    cin >> nazwa;
    ifstream plik(nazwa.c_str());
    if(!plik.good())
       {
           cout << "Blad otworzenia pliku.";

       }
    else
    {
        while(!plik.eof())
        {
            plik.get(zn);
           // plik.unsetf(ios_base::skipws);
            cout << zn;


        }

    }




}
int main()
{
    Menu();
    int wybor;
    cin >> wybor;
    switch(wybor)
    {
    case 1:
        {
            string nazwa;
            char zn;
            drukujaca(nazwa,zn);
        }
        break;
    case 2 :
        cout << "Koniec";
        break;
    }
    return 0;
}
