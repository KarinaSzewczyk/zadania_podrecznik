#include <iostream>

/*Napisa� program umieszczaj�cy na li�cie jednokierunkowej (w kolejno�ci oblicze�) warto�ci funkcji:
y = (x+2)(x-1)-1 dla x <-5, 5> z krokiem 1.
Wy�wietli� otrzyman� list�, usun�� z niej dwa pierwsze elementy i jeszcze raz wy�wietli�. */

using namespace std;


struct Elementy
{
    int dane;
    Elementy *nast;

};

int y(int x)
{
   return (x + 2)* (x - 1 ) -1;

}

void drukuj( Elementy * adres)
{
    cout << " Zawartosc listy: " << endl;
    while(adres != NULL)
    {
        cout << adres -> dane << endl;
        adres = adres -> nast;
    }
}


int main()
{
    Elementy *glowa, *aktualny, *ogon;

    glowa = new Elementy;
    glowa -> dane = y(-5);
    glowa -> nast = NULL;
    ogon = glowa;

   for(int x = -4; x <= 5; x++)
   {
       aktualny = new Elementy;
       aktualny -> dane = y(x);
       aktualny -> nast = NULL;
       ogon -> nast = aktualny;
       ogon = aktualny;
   }

   drukuj(glowa);

   for(int i = 0; i < 2; i++)
   {
       aktualny = glowa;
       glowa = glowa-> nast;
       delete aktualny;


   }
   drukuj(glowa);
    return 0;
}
