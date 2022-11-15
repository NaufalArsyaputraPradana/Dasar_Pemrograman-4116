/*
    Soal Latihan:
    Ardian ingin membeli permen. Dia memiliki uang 5000. Dia membeli permen dengan ketentuan berikut:
    - Jika harga permen adalah 1000 maka ia membeli 3 permen.
    - Jika harga permen adalah 500, maka ia membeli sampai uangnya habis.
    - Jika harga permen adalah 300, maka ia menghitung dulu uang yang dimiliki dalam kelipatan 300
      (mencetak di layar: 300, 600, 900, ...dst) sampai uang yang dimiliki.
     -> Berapakah permen yang didapat oleh Ardian?
 */

#include <iostream>
using namespace std;

int main()
{
    int uang, harga, permen;
    permen = 0;
    uang = 5000;
    cout << "\nArdian Hanya Memiliki Uang Senilai Rp. " << uang << ",-\n" << endl;
    cout << "||========================||" << endl;
    cout << "||   Daftar Harga Permen  ||" << endl;
    cout << "||                        ||" << endl;
    cout << "|| > Permen  : Rp. 1000,- ||" << endl;
    cout << "|| > Permen  : Rp. 500,-  ||" << endl;
    cout << "|| > Permen  : Rp. 300,-  ||" << endl;
    cout << "||========================||\n" << endl;

    cout << "Pilih Harga Permen : ";
    cin >> harga;

        if (harga == 1000)
        {
            permen = 3;
        }
        else if (harga == 500)
        {
            permen = uang/harga;
        }
        else if (harga == 300)
        {
            int i;
            for (i = 0;i*harga < uang; i++)
            {
                cout << "Rp. " << i*harga << ",-" << endl;
            }
            permen = i - 1;
        }
        else
        {
            permen = 0;
        }

        cout << "=> Ardian Membeli Permen Sebanyak " << permen << " Permen" << endl;

    return 0;
}
