#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i = 4;
    int z = 5;

    for(i; i > 0; i--)
    {
        for (int z = 0 + i; z <= 5; z++)
        {
            cout << " ";
        }

        for(int j = i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}