#include <iostream>

using namespace std;

int main()
{
    int n;
    double x, max1, max2;
    cout << " Podaj liczbe calkowita wieksza od 1" << endl <<"n= ";

    cin >> n;
    if(n>1)
    {

    cout << "Wpisz " << n << " liczb zmiennoprzecinkowych" << endl;

    cin >> x;
    max1=x;
    cin >> x;
    if(x<= max1)
        max2=x;
    else
        {
            max2=max1;
            max1=x;
        }


    for(int i = 0; i < n - 1 ; i++)
    {
        cout << "wczytaj liczbe " << endl;
        cin  >> x;
        if(x > max1)
            {
                max2 = max1;
                max1 = x;
            }
        else if( x > max2)
            max2 = x;
    }
    cout << "Najwieksze liczby to " <<max1 << "oraz "<< max2 << endl;
        if(max1 == max2)
            cout << "dwie najwieksze liczby sa takie same";
    }
    else
        cout << "Podales zla liczbe";
    return 0;
}
