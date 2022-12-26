#include <iostream>

using namespace std;

int main()
{
    /**
    switch a menjadi b, dan b menjadi a
    contoh int a = 5 ; int b = 6 --> a = 6 ; b = 5
    **/

    int a = 5;
    int b = 6;
    int x;

    x = a; // x = 5
    a = b; // a = 6
    b = x; // b = 5

    cout << a << "," << b;
    return 0;
}
