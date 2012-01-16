#include <iostream>
#include <cstdlib>



/*Utworzyæ, w kolejnoœci odwrotnej do wczytywania, listê jednokierunkow¹ z³o¿on¹ z liczb ca³kowitych,
wczytywanych a¿ do napotkania zera, po czym wydrukowaæ j¹,
a nastêpnie usun¹æ pierwszy element z tej listy i ponownie j¹ wydrukowaæ.*/


using namespace std;


struct Lista
{
    int dane;
    Lista * nastepny;
};

void drukujaca(Lista * adres)
{
    cout << "Zawartosc listy: ";
    while(adres != NULL)
    {
        cout << adres -> dane << " ";
        adres = adres -> nastepny;
    }

}

int main()
{
    int x;
    Lista *glowa, *aktualny;
    cout << "Wczytaj dane tablicy, az do momentu wczytania zera" << endl;
    cin >> x;
    glowa = NULL;

        while(x != 0 )
    {



        aktualny= new Lista;
        aktualny -> dane = x;
        aktualny -> nastepny = glowa;
        glowa = aktualny;
        cout << "Wczytaj liczbe calkowita" << " " ;
        cin >> x;

    }

    drukujaca(glowa);

    aktualny = glowa;
    if(glowa != NULL)
    {
        glowa = glowa -> nastepny;
        delete aktualny;
        drukujaca(glowa);
    }


    return 0;
}
