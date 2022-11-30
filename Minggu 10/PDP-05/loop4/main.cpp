#include <iostream>

using namespace std;

int main()
{
    int i,j;
    j=0;
    for (i = 1; i <= 20; i++)
    {
        cout << i << endl;
        if (i <= 20)
        {
            j+=i;
        }
    }
    cout << "\nJumlah = " << j << endl;
    int k;
    k=j/i;
    cout << "Rata - Rata = " << k << endl;
    return 0;
}
