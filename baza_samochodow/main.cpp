#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;


struct Auto{

    string marka;
    double cena;
    int rocznik;


};

int main()
{
   const int n = 3;
   Auto autoo[n];
   int j, x;
   cout << "Podaj marke cene, i rocznik   " << n << "   samochodow" << endl;

for(int i = 0; i < n ; i++)
        cin >> autoo[i].marka >> autoo[i].cena >> autoo[i].rocznik;

    cout << "Posortuj wg 1- cen, 2- rocznika" << endl;;
    cin >> x;
   switch(x)
   {
        case 1:
        {

            for(int i = 0; i < n - 1; i++)
            {
               int i_min = i;
                for(int j = i +1; j < n; j++)
                {
                    if(autoo[j].cena < autoo[i_min].cena)
                       i_min = j;
                        Auto temp;
                        temp = autoo[i];
                        autoo[i] = autoo[i_min];
                        autoo[i_min] = temp;


                }
            }
        cout << "Posortowano wg ceny rosnaco" << endl;;
        break;

        }
        case 2:
        {
            for(int i = n -1; i >0; i--)
                for(int j = 0; j < i; j++)
                    if (autoo[j].rocznik > autoo[j + 1].rocznik)
                    {
                        Auto temp;
                        temp = autoo[j];
                        autoo[j] = autoo[j + 1];
                        autoo [ j + 1] = temp;
                    }



         cout << "Posortowano wg rocznika rosnaco" << endl;
         break;
        }
   }


    for(int i = 0; i < n; i++)
        cout << autoo[i].marka << ' ' << autoo[i].cena << ' ' << autoo[i].rocznik << endl;

    return 0;
}
