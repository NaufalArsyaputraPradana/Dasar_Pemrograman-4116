#include <iostream>

using namespace std;

int main()
{
  int A[10];
  int i, total, rata2;

  for (i = 0; i < 10; i++)
  {
    cout << "Data Baris Ke- " << i << " = ";
    cin >> A[i];
  }

  cout << endl;

  total = 0;
  for (i = 0; i < 10; i++)
  {
    total = total+A[i];
  }
  cout << "Total Nilai : " << total << endl;

  rata2 = (total/i);
  cout << " rata - rata adalah: " << rata2;

  cout << endl;

  return 0;
}
