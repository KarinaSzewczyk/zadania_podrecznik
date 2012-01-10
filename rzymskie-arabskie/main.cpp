#include <iostream>

using namespace std;

int main()
{
    string rzymska[] = {  "M", "CM", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    const int   arabska[] = { 1000,  900, 400, 100,   90,  50,   40,  10,    9,   5,    4,  1 };

    int liczba;
    cout << "Wpisz liczbe arabska, a ja Ci ja zamienie na rzymska: " << endl;
    cin >> liczba;

    for(int i = 0; liczba; )
    {
        if(liczba >= arabska[i])
        {
            liczba -= arabska[i];
            cout << rzymska[i];
        }
        else
          i++;
    }
    return 0;
}
