#include <iostream>

using namespace std;

int main()
{
    for (int i = 100; i > 0; i--)
    {
        if (i < 55)
        {
            break;
        }
        cout << i << endl;
    }
    return 0;
}
