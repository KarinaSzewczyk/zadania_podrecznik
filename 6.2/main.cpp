#include <iostream>


//Wczyta� rekordy zawieraj�ce liczb� ca�kowit� oraz liczb� rzeczywist�
//do tablicy kwadratowej A[n][n] (n- sta�a). Wy�wietli� (jako par� liczb) te rekordy,
//kt�re le�� nad g��wn� przek�tn� tablicy i dla kt�rych liczba ca�kowita jest wi�ksza od rzeczywistej.

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
