#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main()
{

    int array[2000];
    srand(time(0));
    int suma = 0, suma1 = 0, suma2 = 0;
    int l_dod = 0;
    int l = 0;


    for(int i = 0; i < 2000; i++)
        {
            array[i] = rand() % 6001 - 3000 ;
            suma += array[i] ;


            if(array[i] > 0)
                l_dod++;
            else if (array[i] < - 1000)
                l++;

            if(i < 1000)
                suma1 += array[i];
            else
                suma2 += array[i];


        }
    for(int i = 0; i < 2000; i++)
        cout << array[i] << " ";

    cout << endl;

    cout << "SUMA wszystkich elementow tablicy :  " << suma << endl;
    cout << "Liczba wszystkich elementow wiekszych od zera: " << l_dod << endl ;
    cout << "Liczba wszystkich elementow mniejszych od -1000: " << l << endl ;
    cout << "Wartosc srednia liczb wpisanych do tablicy" << suma/ 2000. << endl;

    if(suma1 / 1000 > suma2 / 1000)
        cout << "Wartosc srednia elementow tablicy o indeksach od 0 do 999 jest \nwieksza od wartosci sredniej elementow tablicy o indeksach 1000 do 1999";
    else if( suma1 / 1000  == suma2 / 1000)
        cout << "Wartosc srednia elementow tablicy o indeksach od 0 do 999 jest \n rowna wartosci sredniej elementow tablicy o indeksach 1000 do 1999";
    else
        cout << "Wartosc srednia elementow tablicy o indeksach od 0 do 999 jest \n mniejsza od wartosci sredniej elementow tablicy o indeksach 1000 do 1999";

    return 0;
}
