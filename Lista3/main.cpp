#include <iostream>
#include <cstdlib>
#include <cstring>

/* Utworzyæ listê jednokierunkow¹ z³o¿on¹ z n wczytanych napisów w kolejnoœci odwrotnej do wczytywania,
 gdzie n nale¿y najpierw wczytaæ. Wydrukowaæ listê, po czym do³o¿yæ do niej na drugiej pozycji
 wczytany dodatkowy napis i ponownie wydrukowaæ. */
using namespace std;

struct Lista
{
    string napis;
    Lista *nast;
};


void drukujaca(Lista *adres)
{
    cout << "Zawartosc listy: " << endl;
    while(adres != NULL)
    {
        cout << adres -> napis << " ";
        adres = adres -> nast;
    }



}


int main()
{
    int n;
    string x;
    Lista *aktualny, *glowa;
    cout << "Podaj ilosc elementow listy";
    cin >> n;
    glowa = NULL;
    cout << "Podaj " << n  <<" napisow" << endl;
    cin.ignore();

    for(int i = 0; i < n ; i++)
    {
        getline(cin,x);
        aktualny = new Lista;
        aktualny -> napis = x;
        aktualny -> nast = glowa;
        glowa = aktualny;
    }

    drukujaca(glowa);
    string napiss;
    cout << "Podaj napis, ktory zostanie dodany do tablicy: " ;
    getline(cin, napiss);
    aktualny = new Lista;
    aktualny -> napis = napiss;
    aktualny -> nast = glowa -> nast;
    glowa->nast = aktualny;
    cout <<"Nowa lista : ";

   drukujaca(glowa);
    return 0;
}
