#include <iostream>
using namespace std;

int main()
{
    int x, max, min; //kamus

    cout << "Program Ini Akan Berhenti Jika Anda Menginput Angka -99\n" << endl; //petunjuk

    while (true)//looping
    {
        //input
        cout << "Masukkan Nilai Anda : ";
        cin >> x;

        //proses looping akan berhenti ketika x = -99
         if (x == -99)
        {
            break;
        }

        if (x != -99)//-99 tidak terhitung dalam operasi mencari max - min
        {
            if (max < x)//mencari nilai max
            {
                max = x;
            }
            if (min > x)//mencari nilai min
            {
                min = x;
            }
        }
    }

    //output
    cout << "\nMax = " << max << endl;
    cout << "Min = " << min << endl;

    return 0;
}
