#include <iostream>

using namespace std;

int main()
{
    int data [5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Masukkan Data Pada Elemen Ke " << i << " = ";
        cin >> data[i];
    }

    cout << endl;

    for ( int i = 0; i < 5; i++)
    {
    cout << "Data Baris Ke - " << i << " = " << data[i] << endl;
    }

    return 0;
}
