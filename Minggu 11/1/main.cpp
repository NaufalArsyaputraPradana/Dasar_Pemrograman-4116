#include <iostream>

using namespace std;

int main()
{
    int x = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << x << "\t";//"\t" berfungsi menjadi "tab" biar spasi menjadi rapi
            x++;
        }
        cout << endl;
    }

    return 0;
}
