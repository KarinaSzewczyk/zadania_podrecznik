#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
  char zn, azn, bzn;
  int licznik = 0;

  do {
    bzn = azn;
    azn = zn;
    cin >> zn;
    if (zn >= '0' && zn <= '9')
      licznik++;
  } while (bzn != 'e' || azn != 'n' || zn != 'd');

  cout << "Ilosc wczytanych cyfr: " << licznik << endl;


  return 0;
}
