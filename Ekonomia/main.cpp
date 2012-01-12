#include <iostream>

using namespace std;

int main()
{
    double pkbU = 46000;
    double pkbCh = 3920;
    int ile = 2010;

    const double USA = 1.025;
    const double CHINY = 1.09;
    int k=100;


    while(pkbCh < pkbU)
    {
        if(ile % 5 ==0)
            cout << "w roku:" << ile << endl << "PKB w USA i Chinach wynosi odpowiednio:  " << endl << pkbU << pkbCh << endl;

        pkbU = pkbU * USA;
        pkbCh = pkbCh * CHINY;
        ile++;



    }

    cout << ile;




    return 0;
}
