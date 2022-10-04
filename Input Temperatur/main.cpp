#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Keterangan : \n";
    cout << "(A) Jika Mengisi Nilai Untuk Temperature Kurang Dari Atau Sama Dengan (0) Maka Muncul Text (Ice)" << endl;
    cout << "(B) Jika Mengisi Nilai Untuk Temperature Lebih Dari (100) Maka Muncul Text (Gas)" << endl;
    cout << "(C) Jika mengisi Nilai Untuk Temperature Selain Dari Keterangan di atas Maka Muncul Text (Liquid)\n" << endl;


    cout << "Masukkan Nilai untuk Temperature : " ;
    cin >> x;

    if ( x < 0 || x == 0 )
        {
            cout << "Ice" << endl;
        }

    else if ( x > 100 )
        {
            cout << "Gas" << endl;
        }

    else
        {
            cout << "Liquid" << endl;
        }


    cout << endl;


    return 0;
}
