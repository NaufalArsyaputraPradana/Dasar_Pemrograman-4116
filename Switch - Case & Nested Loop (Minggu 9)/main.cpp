#include <iostream>

using namespace std;

int main()
{
    /*
    for (int i = 0; i < 5; i++) //01234
    {
        if (i == 2) //jika i sama dengan 2
        {
            continue; //maka 2 di skip
        }
        if (i > 3) //lalu jika i lebih dari 3
        {
            break; //maka berhenti sebelum i lebih dari 3
        }
        cout << i << endl; //013
    }
    */

    /*
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            cout << i << endl;
        }
    }
        /*
        i=0,j=0; 0
            j=1; 0
        i=1,j=0; 1
            j=1; 1
        */

    /*
    for (int i = 0; i <= 1; i++)
    {
        cout << i << endl;
        for (int j = 0; j <= 1; j++)
        {
            cout << j << endl;
        }
    }
        /*
        i=0,j=0;
            j=1;
        i=1,j=0;
            j=1;
        output = 0(01)1(01) = 001101
        */

    while (true)
    {
    cout << "\n==== Daftar Menu Makanan ====" << endl;
    cout << "1. Nasi Kerikil" << endl;
    cout << "2. Rica - Rica Bekicot" << endl;
    cout << "3. Pepes Brotowali" << endl;
    cout << "4. Kepiting Presto" << endl;

    int x;
    cout <<"\nInput Kode Makanan : ";
    cin >> x;

   switch (x)
   {
    case 1:
      cout << "\nAnda Memesan Nasi Kerikil\n";
      break;
    case 2:
      cout << "\nAnda Memesan Rica - Rica Bekicot\n";
      break;
    case 3:
      cout << "\nAnda Memesan Pepes Brotowali\n";
      break;
    case 4:
      cout << "\nAnda Memesan Kepiting Presto\n";
      break;

    default:
      cout << "\nMaaf, Kode Makanan Tidak Di Temukan\n";
    }
  }

    return 0;
}
