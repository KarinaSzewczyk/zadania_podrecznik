#include <iostream>
#include <cstdlib>
#include <cstring>

/*Napisa� program umieszczaj�cy na li�cie jednokierunkowej kolejne wprowadzane z klawiatury s�owa,
w kolejno�ci zgodnej z wczytywaniem (jeden element listy � jeden wiersz),
a� do momentu wprowadzenia samej kropki. Nast�pnie wy�wietli� co drugi element listy,
zaczynaj�c od pierwszego, usun�� pierwszy element oraz wy�wietli� ca�� list�. */

using namespace std;

struct Lista
{
    string slowo;
    Lista *nast;
};


void drukuj( Lista *adres)
{
    while(adres !=  NULL)
    {
        cout << adres -> slowo << " ";
        adres = adres -> nast;
    }
}

int main()
{
    Lista *glowa, *ogon, *aktualny, *poprzedni;
    string dana;
    aktualny = NULL;
    poprzedni = NULL;
    glowa = poprzedni;
    cout << "Wczytuj wyrazy az do momento wprowadzania samej kropki" << endl;
    cin >> dana;
    while(dana != ".")
    {
        poprzedni = aktualny;
        aktualny = new Lista;
        aktualny -> slowo = dana;
        aktualny ->nast = NULL;
        if(poprzedni != NULL)
            poprzedni -> nast = aktualny;
        else
            glowa = aktualny;
        cout << "Podaj napis do wczytania" << endl;
        cin >> dana;
    }

    cout << endl;
    drukuj(glowa);

    cout << endl;



    aktualny = glowa;
    cout << "Lista - co drugi element listy, zaczynajac od pierwszego" << endl;
    while(aktualny != NULL)
    {
        cout << aktualny -> slowo << " ";
        aktualny = aktualny -> nast;
        if(aktualny != NULL)
            aktualny = aktualny -> nast;
    }

    aktualny = glowa;
    glowa = glowa -> nast;
    delete aktualny;
    cout << "Lista po usunieciu pierwszego elementu" << endl;
    drukuj(glowa);
    return 0;
}
