#include <iostream>

using namespace std;

int main()
{
    while (true)
    {
        int hari, bulan;
        int hariMaksimal;

        cout << "Masukkan Hari: ";
        cin >> hari;
        cout << "Masukkan Bulan: ";
        cin >> bulan;

        bool bulanGanjil = bulan % 2 == 1;

        // Jika Februari
        if (bulan == 2)
        {hariMaksimal = 29;}

        //bulan ganjil kurang dari 7 (31 hari)
        else if (bulan <= 7)
        {
            if (bulanGanjil)
            {hariMaksimal = 31;}
            else
            {hariMaksimal = 30;}
        }

        //bulan ganjil lebih dari 7 (30 hari)
        else
        {
            if (bulanGanjil)
            {hariMaksimal = 30;}
            else
            {hariMaksimal = 31;}
        }

        //action hasil dari inisialisasi yang telah di setting di atas
        if (hari < 1 || hari > hariMaksimal || bulan < 1 || bulan > 12)
        {
            cout << "Tanggal Tidak Valid\n" << endl;
        }
        else
        {
            cout << "Tanggal Valid\n" << endl;
        }
    }

    return 0;
}
