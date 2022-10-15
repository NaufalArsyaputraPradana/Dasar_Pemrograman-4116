#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 2; i++)
    {
        cout << i << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << j << endl;
        }
    }

    //Hasilnya
    /*
    i = 0
    lalu masuk ke j
    j = 0
    ulang 2 kali karena j < 3
    j = 1
    j = 2
    karena j sudah habis maka kembali lagi ke i
    i = 1
    lalu j ke reset dan mengulang lagi
    j = 0
    j = 1
    j = 2
    j sudah habis tapi tidak kembali ke i karena i < 2
    selesai

    maka hasilnya
    0
    0
    1
    2
    1
    0
    1
    2
    */


    return 0;
}
