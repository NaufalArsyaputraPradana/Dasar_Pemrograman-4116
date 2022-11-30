#include <iostream>

using namespace std;

int main()
{
    int A [10];
    int tertinggi, terendah;

    for (int i = 0; i < 10; i++)
    {
        cout << "Data Baris Ke- " << i << " = ";
        cin >> A[i];
    }

    tertinggi = A[0];
    terendah = A[0];

    for (int j = 0; j < 10; j++)
    {
        if (A[j] > tertinggi)
        {
            tertinggi = A[j];
        }
        if (A[j] < terendah)
        {
            terendah = A[j];
        }
    }

    cout << endl;
    cout << "Nilai Tertinggi adalah : " << tertinggi << endl;
    cout << "Nilai Terendah adalah : " << terendah << endl;

    return 0;
}
