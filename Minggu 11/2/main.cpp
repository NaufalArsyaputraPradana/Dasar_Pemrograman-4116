#include <iostream>

using namespace std;

int main()
{
    int y[5] = {1,2,5,6,4};
    char z[3] = {'A','B','C'};

    for (int i = 0; i < 5; i++)
    {
        cout << y[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << z[i] << " ";
    }

    return 0;
}
