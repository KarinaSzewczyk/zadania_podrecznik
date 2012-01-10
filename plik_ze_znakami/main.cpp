/*Dany jest plik “chars.txt” (nalezy go utworzyc samemu), zawierajacy ciag znaków. Wydrukowac:
liczbe wszystkich znaków,
 liczbe liter (ma³ych, duzych),
 liczbe cyfr,
oraz liczbe znaków operacji arytmetycznych.*/

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    int ile, litery, cyfry, operatory;
    ile = 0, litery = 0, cyfry = 0, operatory = 0;
    ifstream plik;
    string wiersz;
   plik.open("chars.txt");

   if(!plik.good())
    cout << "Blad pliku";

   else
   {
       cout << "Plik otwarty poprawnie\n";
       while(!plik.eof())
        {
        char k;
        plik >> k;
        ile++;


        if((k >= 'a' && k <= 'z') || (k >= 'A' && k <= 'Z'))
            litery++;
        else if(k >= '0' && k <= '9')
            cyfry++;
        else if(k == '+' || k == '-' || k == '/' || k == '*')
            operatory++;

        }

   }
    plik.close();
    cout << "Liczba wszystkich znakow:" << ile << "liczba liter: " << litery << "liczba cyfr: " << cyfry <<endl;
    cout << "liczba znakow aryt: " << operatory;

    return 0;
}
