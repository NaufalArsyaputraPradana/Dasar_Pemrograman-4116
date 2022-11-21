#include <iostream>
using namespace std;

int main()
{
    int x;
    int max = INT32_MIN;
    int min = INT32_MAX;
    bool berhenti = false;

    cout << "Program Ini Akan Berhenti Jika Anda Menginput Angka -99\n" << endl;

    while (berhenti == false)
    {
        cout << "Masukkan Nilai Anda : ";
        cin >> x;

        if (max < x && x != -99)
        {
            max = x;
        }

        if (min > x && x != -99)
        {
            min = x;
        }

        if (x == -99)
        {
            berhenti = true;
        }

        if (berhenti)
        {
            break;
        }
    }

    cout << "\nMax = " << max << endl;
    cout << "Min = " << min << endl;

    return 0;
}
