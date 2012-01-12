#include <iostream>

using namespace std;


double absolute(double x)
{
    if(x >= 0)
        return x;

    else
        return -x;
}

double fahrenheitToCelsius(double temp)
{
    return (temp - 32) * 5/9;
}

double power( double x, int y)
{
    double z = 1;
    for(int i = 0; i < y; i++)
        z = z * x;
    return z;

}

void printPiramid(int h)
{
    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < h -i - 1 ; j ++)
            cout << " ";

        for(int j = 0; j < 2* i - 1; j++)
            cout << "*";
        cout << endl;
    }

}

int main()
{

double a = absolute(3);
cout << a << endl;



double b = fahrenheitToCelsius(32);
cout << b << " stopni Fahrenheita" << endl;

double c = power(2, 3) ;
cout << c<< endl;

printPiramid(6);

    return 0;
}
