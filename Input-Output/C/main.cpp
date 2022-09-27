#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    float x;
    int y=9;

    //Bahasa C++
    cout << "Hello world!" << endl;

    //Bahasa C
    printf("Hello World!\n");

    cout << "Masukkan Angka : ";

    //cin >> x;
    scanf ("%f %d", &x, y);
    //%d = Format Specifier
    //%d --> integer
    //%f --> float
    //%c --> char

    printf ("Angka Anda : %.2f %d", x, y);

    return 0;
}
