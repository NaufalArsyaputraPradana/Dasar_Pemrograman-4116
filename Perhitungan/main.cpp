#include <iostream>

using namespace std;

int main()
{
    /*
    //deklarasi
    int a, b, c, hasil;

    //assignment
    //hard code = memasukkan nilai secara manual
    a = 5;
    b = 7;

    //int 7/3 = 2
    //float 7/3 = 2,3
    //7&3 = 1 (karena 7 dibagi 2 adalah 6 dan sisa 1)
    // modulus (%) sisa hasil bagi

    //perumusan
    hasil = a + b;

    //hasil perhitungan
    cout << hasil;
    //atau cout << a+b;
    */

    /*
    float a,b,c;

    cout << "Masukkan Angka Untuk Nilai A : ";
    cin >> a;
    cout << "Masukkan Angka Untuk Nilai B : ";
    cin >> b;
    cout << "Masukkan Angka Untuk Nilai C : ";
    cin >> c;

    cout << "Hasil Dari Nilai A x B : C = " << a*b/c;
    */


    //5 < 11 --> less than
    //6 > 4 greater
    //9 == 9 equal
    //9 <= 9 equal or less than
    //11 >= 10 equal or greater
    //1 != 2 not equal
    //jika jawaban 1 = true
    //jika jawaban 0 = false

    int a, b;
    bool x;
    a = 6;
    b = 7;
    x = ( a < b ) && ( b > a ) && ( b >= 7 );
    //&& semua harus benar, jika ada satu yang salah maka semua di anggap salah
    cout << x;


    cout << endl << "\nMatematika Mudah dan Menyenangkan";
    return 0;
}
