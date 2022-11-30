#include <iostream>

using namespace std;

int main()
{
    /*Variabel adalah sebuah nama lokasi penyimpanan di dalam memori (nama,nim,progdi,fakultas).
    Sementara tipe data adalah jenis data yang akan disimpan di dalam variabel(string)*/
    string nama, nim, progdi, fakultas;

    //Proses Input Output
    //output menggunakan (cout <<)
    cout << "Masukkan Nama Anda : ";
    //input menggunakan (cin >>)
    //kenapa pakai getline(cin,nama)?
    //karena jika menggunakan cin >> maka anda tidak bisa menginput mengguakan spasi,
    //jika anda menggunakan spasi maka program tidak akan berjalan dengan baik
    //jadi saya menggunakan getline(cin,nama) agar dapat menginput nama dengan spasi dan program masih bisa berjalan dengan baik
    getline(cin,nama);

    cout << "Masukkan NIM Anda : ";
    getline(cin,nim);
    cout << "Anda Dari Progdi Mana? : ";
    getline (cin,progdi);
    cout << "Anda Dari Fakultas Mana? : ";
    getline (cin,fakultas);

    //endl adalah ganti baris, bisa juga menggunakan "\n"
    cout << endl;

    //Proses Output dari Hasil yang telah di inputkan diatas
    cout << "Hai " << nama << endl;
    cout << "NIM anda adalah " << nim << endl;
    cout << "Anda Dari Progdi " << progdi << endl;
    cout << "Fakultas " << fakultas << endl;
    cout << "Selamat Datang di Universitas Dian Nuswantoro";

    return 0;
}
