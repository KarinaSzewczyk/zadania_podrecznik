/*Wczytaæ dane do tablicy A[n] (n- sta³a) zawieraj¹cej napisy.
Tablicê posortowaæ wed³ug d³ugoœci napisów (od najkrótszego do najd³u¿szego)
i wyœwietliæ poczynaj¹c od ostatniego elementu. */

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{
    const int n = 4;
    string array[n];
    string temp;

    for(int i = 0; i < n; i++)
        cin >> array[i];

    for(int i = 0; i < n-1; i++)
    {
        int i_min = i;
        for(int j =i + 1; j < n; j++)
            if(array[j].size() < array[i_min].size())
        i_min=j;

        temp = array[i];
        array[i] = array[i_min];
        array[i_min] = temp;

    }

    for(int i = n-1; i >= 0; i--)
        cout << array[i] << endl;






    return 0;
}
