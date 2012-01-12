#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>


using namespace std;

// W poleceniu bylo podane, ze analizujemy DOWOLNY plik wybrany przez uzytkownika,
//wystarczy zamiast podawania nazwy pliku ze otwieraniu komende (nazwa.c_str())

int main()
{
string nazwa = "loool.txt";
string wiersz;
int l_wierszy = 0, l_znakow = 0;
double wielkosc_pliku;

ifstream plik("loool.txt");

ifstream plik2(nazwa.c_str());




if(!plik.good())
{
cout << "Blad otwarcia pliku";
return 1;
}
else
{
cout << "Plik otwarty poprawnie \n \n";
while(!plik.eof())
{
getline(plik, wiersz);
plik.unsetf(ios_base::skipws);
// cout << wiersz;
l_wierszy++;
l_znakow += wiersz.size();
}
}

cout << endl;

// plik tymczasowy - temp

wielkosc_pliku = l_znakow / 1024.0;
cout << "Liczba wierszy: " <<l_wierszy << endl;
cout <<"Liczba znakow " << l_znakow << endl;
cout << "wielkosc pliku: " << wielkosc_pliku << " kB" << endl;


ofstream wyniki;
wyniki.open("temp.txt");

wyniki << "Liczba wierszy: " <<l_wierszy;
wyniki << endl <<"Liczba znakow " << l_znakow;
wyniki << "wielkosc pliku: " << wielkosc_pliku << " kB" << endl;


while(!plik2.eof())
{
getline(plik2, wiersz);
plik.unsetf(ios_base::skipws);
wyniki << wiersz << endl;
}

wyniki << "Liczba wierszy: " <<l_wierszy << endl;
wyniki <<"Liczba znakow " << l_znakow << endl;;
wyniki << "wielkosc pliku: " << wielkosc_pliku << " kB" << endl;

//cout <<"Podaj nazwe analizowanego pliku";
//cin >> nazwa;
string wieersz;
ofstream pliik("loool.txt");
ifstream wyniiki("temp.txt");
while(!wyniiki.eof())
{
    getline(wyniiki, wieersz);
    pliik << wieersz << endl;
}
pliik.close();
plik.close();
wyniki.close();
wyniiki.close();
remove("temp.txt");
return 0;
}
