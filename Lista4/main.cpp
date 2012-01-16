#include <iostream>
#include <cstdlib>

/*Utworzy� list� jednokierunkow� z�o�on� z n wczytanych liczb (n - sta�a) w kolejno�ci wczytywania,
po czym usun�� z niej k-ty element, gdzie k nale�y przedtem wczyta�. Drukowa� list� przed i po usuni�ciu elementu.*/
using namespace std;

const int n = 10;

struct Lista
{
    double dane;
    Lista *nast;

};

void drukuj(Lista *adres)
{
    while(adres != NULL)
        {
            cout << adres -> dane << endl;
            adres = adres -> nast;
        }
}




int main()
{
    Lista * glowa, *aktualny, *ogon ;
    int k;
    cout << "Wczytaj " << n << "  liczb do listy" << endl;

    glowa = new Lista;
    cin >> glowa -> dane;
    glowa -> nast = NULL;
    ogon = glowa ;

    for(int i = 1; i < n; i++)
    {
        aktualny = new Lista;
        cin >> aktualny -> dane;
        aktualny -> nast = NULL;
        ogon -> nast = aktualny;
        ogon = aktualny;

    }

    cout << "Zawartosc listy : " << endl;
    drukuj(glowa);

    cout << "Podaj ktory element listy chcesz usunac." << endl;
    cin >> k;

    if(k == 1)
    {
            aktualny = glowa;
            glowa= glowa -> nast;
            delete aktualny;
    }
    else
        {
            aktualny= glowa;
            for(int i = 1 ; i < k -1; i++ )
                aktualny = aktualny -> nast;
            ogon = aktualny -> nast;
            aktualny -> nast = ogon ->  nast;
            delete ogon;
        }

    cout << "Lista po usuniecie " << k << "-ego elementu" << endl;
        drukuj(glowa);

        // wg podrecznika po zakonczeniu pracy na liscie nalezy zwolnic pamiec.

    aktualny = glowa;
        while (aktualny)
    {
        glowa=aktualny;
        aktualny=aktualny->nast;
        cout << "Kasuje: " << glowa->dane << endl;
        delete glowa;
    }
        glowa = NULL;

    return 0;
}
