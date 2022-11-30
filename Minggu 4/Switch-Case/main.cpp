#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "masukan nilai 1 - 7: ";
    cin >> a;

    switch (a)
    {
/*
    case 1:
        cout << "a = 1" << endl;
    case 2:
        cout << "a = 2" << endl;
    case 3:
        cout << "a = 3" << endl;
    case 4:
        cout << "a = 4" << endl;
    case 5:
        cout << "a = 5" << endl;
    break;
*/
//break untuk meloncati program
        case 1:
            cout << "Monday";
        break;
        case 2:
            cout << "Tuesday";
        break;
        case 3:
            cout << "Wednesday";
        break;
        case 4:
            cout << "Thursday";
        break;
        case 5:
            cout << "Friday";
        break;
        case 6:
            cout << "Saturday";
        break;
        case 7:
            cout << "Sunday";
        break;

        default:
        cout << "default";
    }

    return 0;
}
