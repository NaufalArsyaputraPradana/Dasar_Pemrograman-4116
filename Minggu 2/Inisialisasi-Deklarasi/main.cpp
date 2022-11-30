#include <iostream>

using namespace std;

int main()
{
    int b=45;
    //Inisialisasi
    //int untuk menyimpan nilai angka, tapi tidak bisa untuk angka desimal

    float t;
    t=165.2;
    //Deklarasi
    //float dapat menyimpan nilai angka desimal

    char ub = 'L';
    //char untuk menyimpan Nilai 1 Huruf saja

    string ubs = "XL";
    //string dapat menyimpan nilai lebih dari 1 huruf

    cout << "\nBerat Badanmu adalah " << b << "kg\n";
    cout << "Tinggi Badanmu adalah " << t << "cm\n";
    cout << "Ukuran Bajumu adalah " << ub;
    cout << "\nJika Aku memakai ukuran " << ubs << " Maka Bajuku Kebesaran\n\n";

    return 0;
}
