#include <iostream>
#include <cmath>
using namespace std;

struct  Spunkt
{
    int x;
    int y;
};

Spunkt array[3];

double odcinek(Spunkt a, Spunkt b)
{
    int delta_x = b.x - a.x;
    int delta_y = b.y - a.y;

    double m = sqrt(delta_x * delta_x + delta_y * delta_y);

    return m;
}

double pole(double a, double b, double c )
{
    double p = (a + b +c)/2;
    double wynik = sqrt(p * (p - a) * (p - b) * (p - c));

    return wynik;

}

        bool spr( double k, double m, double n)
        {
            if(k +m > n && k + n > m && m + n >k)
                return true;

            return false;
        }

int main()
{

    for(int i = 0; i < 3; i++)
        cin >> array[i].x >> array[i].y;

    if( spr(odcinek(array[0], array [1]), odcinek(array[1], array[2]), odcinek( array[2], array[0])))
        {
            cout << "z odcinkow: " << odcinek(array[0], array[1] ) << " " << odcinek(array[1], array[2]) << " " << odcinek( array[2], array[0]) << "nie da sie zbudowac trojka! ;>" << endl;
            cout << pole(odcinek(array[0], array [1]), odcinek(array[1], array[2]), odcinek( array[2], array[0]));
        }

    else
        cout << "z odcinkow: " << odcinek(array[0], array[1] ) << " " << odcinek(array[1], array[2]) << " " << odcinek( array[2], array[0]) << " nie da sie zbudowac trojka! ;>" << endl;


    return 0;
}
