#include <iostream>

using namespace std;

int main()
{

    int tanggal, bulan;

    cout << "Masukan Tanggal: ";
    cin >> tanggal;
    cout << "Masukan Bulan: ";
    cin >> bulan;

    //kondisi dimana menginisialisasi untuk bulan yang memiliki 31 hari
    if ((tanggal > 0 && tanggal < 32) &&
        (bulan == 1 || bulan == 3 || bulan == 5 || bulan == 7 || bulan == 8 || bulan == 10 || bulan == 12))
    {
        cout << "Tanggal Valid";
    }

    //kondisi dimana menginisialisasi untuk bulan yang memiliki 30 hari
    else if ((tanggal >01 && tanggal < 31) &&
             (bulan == 9 || bulan == 4 || bulan == 6 || bulan == 11))
    {
        cout << "Tanggal Valid";
    }

    //kondisi dimana menginisialisasi untuk bulan khusus 29 hari yaitu februari
    else if (tanggal > 0 && tanggal < 30 && bulan == 2)
    {
        cout << "tanggal valid";
    }

    //selain dari kondisi atau syarat diatas maka hasilnya tidak valid
    else
    {
        cout << "Tanggal Tidak Valid";
    }

    return 0;
}
