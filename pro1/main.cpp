#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i;
    int z;


    for (int i = 0; i < 4; i++)
    {
        for (int z = 4 - i; z > 0; z--)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}