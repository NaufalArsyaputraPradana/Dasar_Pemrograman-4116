#include <iostream>

using namespace std;

int main()
{
    int x;
    int i = 1;
    int sum = 0;

    cout << "Input Bil : ";
    cin >> x;

    while (x != 9999)
    {
        cout << x << endl;
        sum += x;
        i += 1;

        cout << "Input Bil : ";
        cin >> x;
    }

    cout << "Jumlah Angka = " << sum << endl;
    cout << "Jumlah Cacah Angka = " << i-1 << endl;

    return 0;
}
