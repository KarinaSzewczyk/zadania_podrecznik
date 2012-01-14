#include <iostream>


//Wczytaæ rekordy zawieraj¹ce liczbê ca³kowit¹ oraz liczbê rzeczywist¹
//do tablicy kwadratowej A[n][n] (n- sta³a). Wyœwietliæ (jako parê liczb) te rekordy,
//które le¿¹ nad g³ówn¹ przek¹tn¹ tablicy i dla których liczba ca³kowita jest wiêksza od rzeczywistej.

struct Liczby
{
    int x;
    double y;
};


using namespace std;

int main()
{
    const int n = 3;
    Liczby A[n][n];
     cout << " Podaj" << n << "liczb calkowitych oraz zmiennoprzecikowych" << endl;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> A[i][j].x >> A[i][j].y;



   for(int i = 0; i < n; i++ )
    {
        for(int j= 0; j < n; j++)
            cout << A[i][j].x << " " << A[i][j].y << " " << " ";
        cout << endl;
    }


    for(int i = 0; i < n ; i++ )
        for(int j= i + 1; j < n; j++)
        {
            if( A[i][j].x > A[i][j].y)
                cout << A[i][j].x << " , " << A[i][j].y << endl;
        }

    return 0;
}
