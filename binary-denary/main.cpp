#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int input[8];
    int denary;

    int size = sizeof(input) / sizeof(input[0]);

    cout << "Enter a binary number : " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "_____________________" << endl;
        cin >> input[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (input[i] == 1)
        {
        denary = 0 + input[i] * pow(2, i);
        }
    }

    cout << "The denary number is : " << denary << endl;

    return 0;
}