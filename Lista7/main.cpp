#include <iostream>
#include <cstdlib>
#include <cstring>

/*Napisaæ program umieszczaj¹cy na liœcie jednokierunkowej kolejne wprowadzane z klawiatury s³owa,
w kolejnoœci zgodnej z wczytywaniem (jeden element listy – jeden wiersz),
a¿ do momentu wprowadzenia samej kropki. Nastêpnie wyœwietliæ co drugi element listy,
zaczynaj¹c od pierwszego, usun¹æ pierwszy element oraz wyœwietliæ ca³¹ listê. */

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
