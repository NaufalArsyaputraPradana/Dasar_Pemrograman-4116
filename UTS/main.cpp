/*
    Nama : Naufal Arsyaputra Pradana
    NIM : A11.2022.14606

    Soal
    1. Cek Apakah Bilangan Yang Di Input adalah Bilangan Genap atau Ganjil atau 0 atau negatif
    2. Buat Barisan deret Ganjil / genap dari 10 hingga 25 , (Jika NIM Genap Maka Akan mencetak deret genap)
    3. Cek Apakah Bilangan yang di input adalah bilangan prima
    4. cetak bilangan faktorial dari bilangan yang di input dan jika bilangan tidak benar maka akan muncul teks tidak valid
*/


#include <iostream>

using namespace std;

int main()
{
    //1.
    /* int x;
     cout << "Masukkan Angka : " << endl;
     cin >> x;
     if (x==0)
     {
         cout << "Angka 0" << endl;
     }
     else if(x%2==0)
     {
         cout << "Bilangan Genap" << endl;
     }
    else if (x%2==1)
    {
        cout << "Bilangan Ganjil" << endl;
    }
    else
    {
        cout << "Bilangan Negatif" << endl;
    }
    */

    //2
    /*int x;
    cout << "Masukkan 3 Digit Terakhir NIM Anda : ";
    cin >> x;
    for (x=10; x<=25; x++)
    {
        if (x%2==0)
        {
            cout << x << " ";
        }
    }
    */

    //3
    /*int x,y;
      bool angka_prima = true;
      cout << "Masukkan Angka: ";
      cin >> x;
      if (x==0 || x==1)
      {
        angka_prima = false;
      }
      else
      {
        for (y=2; y<=x/2; y++)
        {
          if (x%y==0)
          {
            angka_prima = false;
            break;
          }
        }
      }
      if (angka_prima)
      {
        cout << x << " adalah angka prima";
      }
      else
      {
        cout << x << " bukan angka prima";
      }
      */

      //4
      /*int bilangan;
      int faktorial=1;
      cout<<"Masukkan sesuatu bilangan : ";
      cin>>bilangan;
      cout<<endl;
      while (bilangan >= 1)
      {
        faktorial=faktorial*bilangan;
        bilangan --;
      }
     cout<<faktorial;
     */

    return 0;
}
