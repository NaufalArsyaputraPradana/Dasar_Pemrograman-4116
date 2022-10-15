#include <iostream>
using namespace std;

int main()
{
    int x, angka1 = 0, angka2 = 1, angka3 = 0;

    cout << "Berapa Deret Fibonacci Yang Kamu Inginkan: ";
    cin  >> x;

    for (int i = 1; x >= i; i++)
    {
        if(i == 1)
        {
            cout << " " << angka1 <<" ";
            continue;
        }

        if(i == 2)
        {
            cout << angka2 << " ";
            continue;
        }

        angka3 = angka1 + angka2;
        angka1 = angka2;
        angka2 = angka3;

        cout << angka3 << " ";
    }
    return 0;
}
