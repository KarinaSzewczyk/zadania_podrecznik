#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    string nazwa;
    string wiersz;
    cout << "Podaj nazwe pliku" << endl;
    cin >> nazwa;

    ofstream plik(nazwa.c_str());

    if(!plik.good())
        {
            cout << "Blad pliku";
            return 1;
        }
    const int n = 5;
    cout << "Wczytaj " << n << " wierszy tekstu" << endl;;
    getline(cin, wiersz);
    for(int i = 0; i < n ; i++)
        {

            //plik.unsetf(ios_base::skipws);
            getline(cin, wiersz);
            plik << wiersz << endl;
        }

    plik.close();
    cout << "Podaj ponownie nazwe pliku z ktorego korzystasz" << endl;
    cin >> nazwa;

    ifstream plika(nazwa.c_str());

     if(!plika.good())
        {
            cout << "Blad pliku";
            return 1;
        }

    ofstream plik2("results.txt");

    if(!plik2.good())
        {
            cout << "Blad pliku";
            return 1;
        }




        while(!plika.eof())
        {
                getline(plika,wiersz);
                if( (wiersz[0] >= 'A' && wiersz[0] <= 'Z') & wiersz.length() <= 10)
                {
                    plik2 << wiersz << endl;
                    cout << "Zawartosc pliku results.txt: ";
                    cout << wiersz;
                }
        }


plika.close();
plik2.close();

    return 0;
}
