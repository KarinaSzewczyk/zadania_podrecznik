#include <iostream>

using namespace std;

int main()
{
    const int k = 5;
    double array[k][k];
    int n = 0;
    double suma1 = 0, suma2 = 0;
    for(int i = 0; i < k; i++)


       for(int j = 0; j <k ; j++)
            {array[i][j] = double(5*n) / (n + 1);
                n++;}

    for(int i = 0; i < k; i++)
        {
            for(int j = 0; j <k; j++)
                cout << array[i][j] << " ";
            cout << endl;
        }

                // Podpunkt 1.

    for(int i = 0; i < k; i++)
        suma1 += array[i][i];
    for(int i =0; i < k; i++)
        suma2 += array[i][k - i - 1];

    cout << "Suma wartosci z glownej przekatnej wynosi: " << suma1 << " a suma wartosci z drugiej przekatnej wynosi "
    << suma2 << endl << "Suma wszystkich wartosci na przekatnych wynosi : " << suma1 + suma2 << endl;


                // Podpunkt 2.


for (int i=0; i<k/2 ; i++)
    {
        double temp = 0;
        temp = array[i][i];
        array[i][i]=array[k-1-i][k-1-i];
        array[k-1-i][k-1-i] = temp;

        temp = 0;
        temp = array[k-1-i][i];
        array[k-1-i][i] = array[i][k-1-i];
        array[i][k-1-i] = temp;
    }

        for(int i = 0; i < k; i++)
        {
            for(int j = 0; j <k; j++)
                cout << array[i][j] << " ";
            cout << endl;
        }

                // Podpunkt 3.

        double a, b;
        cout << "Podaj granice liczbowe przedzialu [a,b] " << endl;
        cin >> a >> b;
        int liczba = 0;

        for(int i = 0; i < k / 2; i++)
            for(int j = i + 1; j < k - i - 1; j++ )
            if( array[i][j] > a && array[i][j] < b)
                liczba++;

        cout << "Elementow nad obiema przekatnymi z przedzialu  [ " << a << ", " << b << " ] jest " << liczba;


    return 0;
}
