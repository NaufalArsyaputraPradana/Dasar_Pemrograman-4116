#include <iostream>

using namespace std;

int main()
{
    /**Looping**/

    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;
    }
    cout << endl;

    for (int i = 6; i >= 2; i--)
    {
        cout << i << endl;
    }
    cout << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << i << endl;
        }
    }
    cout << endl;

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            cout << i << endl;
        }
    }
    cout << endl;

    int j = 100 ;
    for (int i = 1; i <= 99; i++)
    {
        j--;
        cout << "i = " << i << " dan j = " << j << endl;
    }
    cout << endl;

    for (int i = 1 ; i <= 50 ; i++)
    {
        int hasil = i*2;
        cout << i << " -> " << hasil << endl;
    }



    return 0;
}
