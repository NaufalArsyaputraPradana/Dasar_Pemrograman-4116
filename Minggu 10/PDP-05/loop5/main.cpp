#include <iostream>

using namespace std;

int main()
{
    cout << "Program Ini Akan Berhenti Jika Anda Menginput Angka -99\n" << endl;
    while (true)
    {
        cout << "Masukkan Nilai Anda : ";
        int x;
        cin >> x;
        if (x == -99)
        {
            cout << "\nKeluar Karena Break" << endl;
            break;
        }
    }

    return 0;
}
