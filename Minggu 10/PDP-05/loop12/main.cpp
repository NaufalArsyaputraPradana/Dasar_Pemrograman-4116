#include <iostream>

using namespace std;

int main()
{
    double c,f;

    cout << "----------------------------" << endl;
    cout << "|  Celcius      Fahrenheit |" << endl;
    cout << "----------------------------" << endl;

    for (c = 0.0; c <= 100; c++)
    {
        f = (c * (1.8)) + 32.0;

        if (c < 10)
        {
            cout << "     " << c << "      |      " << f << endl;
        }
        else if (c < 100)
        {
            cout << "     " << c << "     |      " << f << endl;
        }
        else
        {
            cout << "     " << c << "    |      " << f << endl;
        }
    }

    cout << "------------------------------" << endl;



    return 0;
}
