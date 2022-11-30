#include <iostream>

using namespace std;

int main()
{
    int x;
    int i = 0;

    cout << "Input Bil : ";
    cin >> x;

    while (x != 9999)
    {
        cout << x << endl;
        i = i+1;

        cout << "Input Bil : ";
        cin >> x;
    }

    cout << "Jumlah Angka = " << i;

    return 0;
}
