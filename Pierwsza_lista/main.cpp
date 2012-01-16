#include <iostream>
#include <cstdlib>


//Utworzy� list� jednokierunkow� z 4 wczytanych liczb, w kolejno�ci odwrotnej do wczytywania,
//po czym znale�� najwi�kszy co do warto�ci pola liczbowego element na tej li�cie.


using namespace std;

struct Lista
{
    int dane;
    Lista *wsk_nast;
};


void drukujaca(Lista *adres)
{
    cout << "Zawartosc listy: " << endl;
    while(adres != NULL)
    {
        cout << adres -> dane << " ";
        adres = adres -> wsk_nast;

    }
}

int main()
{
    Lista *aktualny, *glowa;
    int x;
    int max;
    glowa = NULL;
    for(int i = 0; i < 4; i ++ )
        {
            cout << "Podaj liczbe do wstawienia ";
            cin >> x;

            aktualny = new Lista;
            aktualny->dane = x;
            aktualny->wsk_nast = glowa;
            glowa = aktualny;

        }
    drukujaca(glowa);

    aktualny = glowa;
    max = glowa -> dane;
    for(int i = 1; i < 4; i++)
        {
            aktualny = aktualny -> wsk_nast;
            if(aktualny -> dane > max)
                max = aktualny-> dane;
        }

        cout << "Najwiekszy element na liscie to: " << max << endl;

        //Zwalnianie pamieci!!
    aktualny = glowa;
    while(aktualny != NULL)
    {
        glowa = aktualny;
        aktualny = aktualny -> wsk_nast;
        cout << "Kasuje:" << glowa -> dane << endl;
        delete glowa;
    }
    glowa = NULL;

    return 0;
}
