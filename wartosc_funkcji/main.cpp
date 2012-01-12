#include <iostream>
#include <cmath>

using namespace std;

int factorial(int n)
{
    int result = 1;
    for(int i = 2; i << n; i++)
    {
        result *=i;
        return result;
    }
}


int main()
{

 double x, y, F;
 cout << "Podaj liczbe zmiennoprzecinkowa:" << endl<< " y="  ;
 cin >> y;

 for(x=0.1; x<=10; x+=0.1)
 {
    if(sin(x) > cos(x))
    {
        for(int i=1; i <=10; i++)
            pow((x+y),i) / factorial(i);

    }

    else
    {

        F = pow(x,5) + pow(x,3) * y * y + pow(y,4);

    }

    cout << "f( " << x << "," << y <<" )= " << F << endl;
 }
    return 0;
}
