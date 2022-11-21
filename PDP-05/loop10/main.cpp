#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i < 8; i++)
    {
        cout << "Looping Yang Ke - " << i << endl;
        for (int j = 1; j < 11; j++)
        {
            cout << "- Angka " << j << " -" << endl;
            if (j == 10)
            {
                cout << endl;
            }
        }
    }
    return 0;
}
