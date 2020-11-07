#include <iostream>
using namespace std;

int main()
{
    double x;
    int y;
    int a;
    int z;

    y = 256;

    cout << "Enter a number : ";
    cin >> x;

    if (x > y)
    {
        a = x / y;
        z = a * y;

        cout << "The check sum of " << x << " is " << x - z;
        exit;
    }

    else
    {
        cout << "The check sum is " << x << " as it is in the range of 0 to 256" << endl;
        exit;
    }

    return 0;
}