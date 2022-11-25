#include <iostream>

using namespace std;

int main()
{
    float c,f;

    cout << "--------------------------------------------------------" << endl;
    cout << "|  Celcius      Fahrenheit       Keterangan            |" << endl;
    cout << "--------------------------------------------------------" << endl;

    for (c = 100; c >= -40; c--)
    {
        f = (c * (1.8)) + 32.0;

        if (c == 100)
        {
            cout << "     " << c << "          " << f << "         " << "Air Mendidih" << endl;
        }
        else if (c == 40)
        {
            cout << "     " << c << "           " << f << "         " << "Air Mandi Panas" << endl;
        }
        else if (c == 37)
        {
            cout << "     " << c << "           " << f << "        " << "Temperatur Tubuh" << endl;
        }
        else if (c == 30)
        {
            cout << "     " << c << "           " << f << "          " << "Cuaca Pantai" << endl;
        }
        else if (c == 21)
        {
            cout << "     " << c << "           " << f << "        " << "Temperatur Ruangan" << endl;
        }
        else if (c == 10)
        {
            cout << "     " << c << "           " << f << "          " << "Hari Yang Dingin" << endl;
        }
        else if (c == 0)
        {
            cout << "     " << c << "            " << f << "          " << "Titik Beku Air" << endl;
        }
        else if (c == -18)
        {
            cout << "    " << c << "          " << f << "         " << "Cuaca Dingin Bersalju" << endl;
        }
        else if (c == -40)
        {
            cout << "    " << c << "          " << f << "          " << "Cuaca Sangat Dingin Bersalju" << endl;
        }
        else
        {
            continue;
        }
    }

    cout << "-----------------------------------------------------------" << endl;



    return 0;
}
