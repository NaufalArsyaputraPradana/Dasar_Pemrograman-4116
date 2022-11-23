#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int x;

    cout << "Input Bil : ";
    cin >> x;

    while (x != 9999)
    {
        cout << x;
        sum = sum + x;

        cout << "\nInput Bil : ";
        cin >> x;
    }
    cout << "Jumlah Angka = " << sum;
    return 0;
}
