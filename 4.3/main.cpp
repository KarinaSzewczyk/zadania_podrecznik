#include <iostream>
#include <cstring>
#include <cstdlib>
#include <fstream>

/*Z pliku 'a.pas' przepisa� do pliku 'b.pas' co najwy�ej 5 wierszy nie zawieraj�cych �adnej cyfry,
za� do pliku 'c.pas' - co najwy�ej 12 wierszy nie zawieraj�cych �adnej ma�ej litery.
W programie zadeklarowa� i wykorzysta� procedur�, kt�ra z pliku o jakiej� nazwie
przepisuje do pliku o jakiej� innej nazwie co najwy�ej jak�� ilo�� wierszy nie zawieraj�cych �adnego znaku zawartego p
omi�dzy dwoma jakimi� znakami ("co najwy�ej", bo w pliku mo�e by� mniej wierszy, ni� warto�� zadana).*/


using namespace std;

void przepisujaca(string nazwa, string nazwa2, int ile, char zn1, char zn2)
{
    ifstream plika(nazwa.c_str());
    ofstream plikb(nazwa2.c_str());

    string wiersz;
    if(!plika.good())
    {
            cout << "Blad otwarcia pliku";

    }

    else
    {
        while(!plika.eof())
    {
    getline(plika,wiersz);
    plikb.unsetf(ios_base::skipws);

    bool jest= false;
    for(int i = 0; i < wiersz.size(); i++)
        if(wiersz[i] >= zn1 && wiersz[i] <= zn2)
       {
            jest=true;

       }
        if(!jest)
         {

            plikb << wiersz << endl;
            ile--;
           }

    }
    plika.close();
    plikb.close();
    }
}

int main()
{

    przepisujaca("a.txt","b.txt", 5, '0', '9');
    przepisujaca("a.txt","c.txt", 12, 'a', 'z');



    return 0;
}
