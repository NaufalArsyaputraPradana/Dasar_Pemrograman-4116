#include <iostream>
using namespace std;

int main ()
{
    int x;
    int i,a,b,fpb,kpk;

    cout << "1. Menentukan KPK" << endl;
    cout << "2. Menentukan FPB" << endl;
    cout << "3. Keluar" << endl;
    cout << "Masukkan Pilihan Anda:";
    cin  >> x;

    switch (x)
    {
    case 1 :
        {
            cout << "\n Mencari KPK" << endl;
            cout << "masukkan bilangan pertama : ";
            cin  >> a;
            cout <<"masukkan bilangan kedua   : ";
            cin  >> b;
            cout << endl;

            kpk = 0;

            for(i = 1; i<=b; i++)
            {
                kpk = kpk + a;
                if(kpk%b == 0)
                {
                    cout << "\n KPK : " << kpk << endl;
                    break;
                }
            }
        }

    case 2 :
        {
            cout << "\n Mencari FPB" << endl;
            cout << "masukkan bilangan pertama : ";
            cin  >> a;
            cout << "masukkan bilangan kedua   : ";
            cin  >> b;

            fpb = a%b;

            while (fpb != 0)
            {
                a = b;
                b = fpb;
                fpb = a%b;
            }
            cout << "\n FPB :" << b << endl;
            break;
        }
    case 3 :
        {
            cout << "NT Kadang Kadang NT!!!" << endl;
            break;
        }
    default :
        {
            cout << "Error!!!" << endl;
        }
    }
    return 0;
}
