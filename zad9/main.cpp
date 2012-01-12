#include <iostream>

using namespace std;

int main()
{

    double x;

    cout << "Podaj liczbe rzeczywista x." << endl << "x= ";
    cin >> x;
    if(x == 0)
    {
        cout << "Nie mozna dzielic przez zero!";
        return 1;
    }
    else
        cout <<"f(x)=1/x= " << 1/x << endl;


    return 0;
}
