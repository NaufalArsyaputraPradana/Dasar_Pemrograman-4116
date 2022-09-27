/*
    Nama        : Naufal Arsyaputra Pradana
    NIM         : A11.2022.14606
    Kelompok    : A11.4116
    Tugas       : Menghitung Luas Permukaan Balok
*/

#include <iostream>

using namespace std;

int main()
{
    //tipe data float agar bisa aritmatika untuk angka desimal
    //variable untuk panjang, lebar, tinggi, dan rumus luas permukaan balok
    float p,l,t,rumus;

    //Judul
    cout << "Menghitung Luas Permukaan Balok\n" << endl;

    //input-output
    cout << "Masukkan Nilai Untuk Panjang Sisi Permukaan Balok : ";
    cin >> p;
    cout << "Masukkan Nilai Untuk Lebar Sisi Permukaan Balok : ";
    cin >> l;
    cout << "Masukkan Nilai Untuk Tinggi Sisi Permukaan Balok : ";
    cin >> t;

    //deklarasi untuk rumus luas permukaan balok
    rumus = 2*((p*l) + (p*t) + (l*t));

    //hasil perhitungan rumus luas permukaan balok sesuai nilai yang di masukkan
    cout << "\nHasil Menghitung Luas Permukaan Balok dari : " << "\nPanjang : " << p << "\nLebar : " << l << "\nDan Tinggi : " << t << "\nAdalah = " << rumus;


    return 0;
}
