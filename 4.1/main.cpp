#include <iostream>
#include <cmath>


//Wczyta� ci�g warto�ci dodatnich zako�czony warto�ci� niedodatni�.
// Dla ka�dej dodatniej warto�ci x tego ci�gu drukowa� warto�� y wyznaczon� wed�ug zale�no�ci:

  //  * y=x^3+x-2 dla 0<x<5
  //  * y=(x-1)(x^2-sin(x)) dla 5<=x<10
  //  * y=|x-20-7 ln(x)| -3 dla x>=10

using namespace std;

int main()
{
    double x;
    double y;

    cin >> x;
    while(x > 0)
    {


        if(x > 0 && x < 5)
            y = pow(x,3) + x -2;

        else if(x >= 5 && x < 10)
            y = ( x - 1 ) * ( x * x - sin(x) );
        else if( x >= 10 )
            y = fabs( x - 20 - 7 * log(x))  - 3;

    cout << "y= " << y;
    cout << endl;
    cin >> x;
    }




    return 0;
}
