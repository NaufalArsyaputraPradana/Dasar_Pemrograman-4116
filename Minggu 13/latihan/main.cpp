#include <iostream>

using namespace std;

int main()
{
    /**
    Misalkan Input Yang dimasukkan adalah 7896 detik, maka output yang di inginkan adalah
    -> Jam : 2
    -> Menit : 11
    -> Detik : 38
    **/

    int konversi, detik, sisa, menit ,jam;

    cout << "Konversi Detik ke - Jam : ";
    cin >> konversi;

    jam = konversi / 3600; // 7898/3600 = 2
    sisa = konversi % 3600; // (7200) -> 698
    menit = sisa / 60; //698/60 = 11
    detik = sisa % 60; //(660) -> 38

    cout << "Jam : " << jam << endl << "Menit : " << menit << endl << "Detik : " << detik << endl;

    return 0;
}
