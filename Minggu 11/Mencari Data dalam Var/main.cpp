#include <iostream>

using namespace std;

int main()
{
    int A [10] = {5, 12, 24, 53, 26, 17, 62, 36, 68};
    int cari;

    for (int i = 0; i < 10; i++)
    {
        cout << "Data Baris Ke - " << "= " << A[i] << endl;
    }

    cout << "\nMasukkan Data Yang Dicari : ";
    cin >> cari;
    cout << endl;

    for (int j = 0; j < 10; j++)
    {
        if (A[j] == cari)
        {
            cout << "\nNilai Yang Dicari Berada Pada Indeks Ke - " << j << endl << endl;
        }
        else
        {
            cout << "Data Yang Dicari Tidak Ditemukan" << endl;
        }
    }
    return 0;
}
