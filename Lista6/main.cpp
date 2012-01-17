#include <iostream>
#include <cstdlib>


/*Dla listy zdefiniowanej następująco:

    struct SInt {
    int liczba;
    TInt* nast  }

struct TInt { int liczba; SInt* nast }; napisać funkcję, która zwraca sumę co drugiego elementu na liście,
poczynając od pierwszego. Parametrem funkcji jest adres początku listy.
Uwaga: Należy napisać tylko funkcję, a nie cały program.*/

using namespace std;

struct SInt
{
    int liczba;
    SInt *nast;
};

int suma_co_2(SInt *adres)
{
    int suma = adres -> liczba;;
    if(adres == NULL)
        return 0;
    while(adres -> nast != NULL && adres -> nast -> nast != NULL)
    {
        adres = adres-> nast -> nast;
        suma += adres-> liczba;
    }
    return suma;

}


int main(int argc, char *argv[])
{

  return 0;
}
