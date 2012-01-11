#include <iostream>
#include <cstring>
#include <cstdlib>
#include <fstream>

/*Z pliku 'a.pas' przepisaæ do pliku 'b.pas' co najwy¿ej 5 wierszy nie zawieraj¹cych ¿adnej cyfry,
zaœ do pliku 'c.pas' - co najwy¿ej 12 wierszy nie zawieraj¹cych ¿adnej ma³ej litery.
W programie zadeklarowaæ i wykorzystaæ procedurê, która z pliku o jakiejœ nazwie
przepisuje do pliku o jakiejœ innej nazwie co najwy¿ej jak¹œ iloœæ wierszy nie zawieraj¹cych ¿adnego znaku zawartego p
omiêdzy dwoma jakimiœ znakami ("co najwy¿ej", bo w pliku mo¿e byæ mniej wierszy, ni¿ wartoœæ zadana).*/


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
