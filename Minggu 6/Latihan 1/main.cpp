#include <iostream>

using namespace std;

int main()
{


  //1. Cetak Bilangan Genap 1-100
  cout << "Bilangan Genap 1 Sampai 100\n";

  //Cara I
  /* int x;
  for(x = 2; x <= 100; x = x + 2)
  {
      cout << x << endl;
  }*/

  //Cara II
  for (int genap = 1; genap <=100; genap++)
  {
      if (genap % 2 == 0)
      {
          cout << genap << endl;
      }
  }


  //2. Cetak Bilangan Ganjil 1-100
  cout << "\nBilangan Ganjil 1 Sampai 100\n";

  //Cara I
  /* int x;
  for(x = 1; x <= 100; x = x + 2)
  {
      cout << x << endl;
  }*/

  //Cara II
  for (int ganjil = 1; ganjil <=100; ganjil++)
  {
      if(ganjil % 2 == 1)
      {
          cout << ganjil << endl;
      }
  }


  //3. Cetak Bilangan Kelipatan 6 antara 1 - 100
  cout << "\nBilangan Kelipatan 6 antara 1 Sampai 100\n";

  //Cara I
  /* int x;
  for(x = 6; x<=100; x = x + 6)
  {
      cout << x << endl;
  }*/

  //Cara II
  for (int kelipatan6 = 1; kelipatan6 <=100; kelipatan6++)
  {
      if(kelipatan6 % 6 == 0)
      {
          cout << kelipatan6 << endl;
      }
  }


    return 0;
}
