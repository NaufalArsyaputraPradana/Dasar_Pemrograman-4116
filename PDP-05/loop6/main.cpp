#include <iostream>
using namespace std;

int main()
{
    int x, max, min;

    cout << "Program Ini Akan Berhenti Jika Anda Menginput Angka -99\n" << endl;

    while (true)
    {
        cout << "Masukkan Nilai Anda : ";
        cin >> x;

         if (x == -99)
        {
            break;
        }

        if (x != -99)
        {
            if (max < x)
            {
                max = x;
            }
            if (min > x)
            {
                min = x;
            }
        }
    }

    cout << "\nMax = " << max << endl;
    cout << "Min = " << min << endl;

    return 0;
}
