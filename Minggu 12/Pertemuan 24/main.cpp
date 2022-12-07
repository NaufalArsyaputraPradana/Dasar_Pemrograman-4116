#include <iostream>

using namespace std;

int main()
{
    /*
    int x;
    float y;
    char angka;

    int a[5] = {1,2,4,6,8};
    int b[3];
    b[0] = 7;
    b[1] = 8;
    */

    /*
    int c[50];

    for (int i = 0; i < 50; i++)
    {
        c[i] = i+1; //elemen pertama agar nilainya satu
        cout << c[i] << endl;
    }
    */

    /*
    int c[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> c[i];
    }
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;

    for (int i = 4; i >= 0; i--)
    {
        cout << c[i] << " ";
    }
    */

    /*
    //Input Jumlah Array
    int jumlah;
    cout << "Masukkan Jumlah Array = ";
    cin >> jumlah;
    cout << endl;

    //Input Nilai Array
    int c[jumlah];
    for (int i = 0; i < jumlah; i++)
    {
        cout << "Masukkan Nilai Untuk Index [" << i << "] = ";
        cin >> c[i];
    }
    cout << endl;

    //output nilai array dan total nilai array
    int nomor = 0;
    float total = 0;
    for (int i = 0; i < jumlah; i++)
    {
        nomor++;
        cout << nomor << ". Index Ke- ";
        cout << "[" << i << "] = " << c[i] << endl;
        total += c[i];
    }
    cout << endl << "Total Nilai = " << total;

    //output rata-rata
    float rata;
    rata = total/jumlah;
    cout << endl << "Rata - Rata Nilai = " << rata;

    //output nilai array tertinggi dan terendah
    int tertinggi = c[0];
    int terendah = c[0];
    for (int i = 0; i < jumlah; i++)
    {
        if (c[i] > tertinggi)
        {
            tertinggi = c[i];
        }
        if(c[i] < terendah)
        {
            terendah = c[i];
        }
    }
    cout << endl << "Nilai Tertinggi = " << tertinggi;
    cout << endl << "Nilai Terendah = " << terendah;
    cout << endl;
    */

    char huruf [5] = {'A','B','C','D','E'};
    char cari;
    bool dapet = true;

    while (true)
    {
        cout << "Masukkan Yang Di Cari : ";
        cin >> cari;

        for (int i = 0; i < 5; i++)
        {
            if (cari == huruf[i])
            {
                dapet = true;
                break;
            }
            else
            {
                dapet = false;
            }
        }

        if (dapet)
        {
            cout << "true" << endl;
        }
        else
        {
            cout << "false" << endl;
        }
    }

    return 0;
}
