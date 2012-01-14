#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int array[10];
bool gra();
void menu()
{
    int x;
    cout << "Menu: \t"  << "Nowa gra- wybierz 1 \nWyjdz- wybierz 2 \n";
    cin >> x;
     switch(x)
    {
       case 1:
            if (gra() == false)
            {
                cout << "Niestety. Tym razem sie nie udalo. Sprobuj ponownie" << endl;
                menu();
            }
            else
                cout << "Brawo wygrales!!!";
        break;
       case 2:
        cout << "Koniec gry.";
        break;

    }

}

bool gra()
{
    int y;
    cout <<"Zgadnij liczbe znajdujaca sie w tablicy! Masz trzy proby!" << endl;
    cout << "Podaj liczbe: " << endl;
    int n= 0;

    while(n < 3)
    {

        cin >> y;
        for(int i = 0; i < 10; i++)
        if(y == array[i] )
            return true;


        if( n < 2 ) cout << "Podaj liczbe jeszzcze raz" << endl;
        n++;
      }

    return false;
}

int main()
{
    srand(time(0));


    for(int i = 0; i < 10; i++)
        array[i] = rand() % 21;


    menu();

    return 0;
}
