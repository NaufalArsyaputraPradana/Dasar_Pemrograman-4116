#include <iostream>

using namespace std;

int main()
{
    //Array 2D Latihan Soal
    /**
        int A[2][3] = {
            {2,3,4},
            {5,6,7}
        };

        int jumlahArray;
        float avg;
        int sum = 0;

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << A[i][j];
                sum += A[i][j];
            }
            cout << endl;
        }

        cout << sum << endl;
        jumlahArray = sizeof(A)/sizeof(int);
        avg = sum/jumlahArray;
        cout << avg << endl;

        if (sum % 2 == 0)
        {
            cout << "true";
        }
        else
        {
            cout << "false";
        }
    **/

    //Tugas Array 3D
    //1.
    int A[2][3][2];
    int x = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                x+=2;
                A[i][j][k] = x;
                cout << A[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    cout << endl;

    //2.
    int y;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                if (A[i][j][k] > 10)
                {
                    y++;
                }
            }
        }
    }
    cout << y << endl;

    //3.
    int z;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                if (A[i][j][k] % 4 == 0)
                {
                    z++;
                }
            }
        }
    }
    cout << z << endl;

    return 0;
}
