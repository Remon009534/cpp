#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number : ";
    cin >> n;

    cout << "Result of " << n << " != " << n;

    for (int i = n-1; i > 0; --i)
    {
        cout << " x " << i;
        n = n * i;
    }

    cout << " = " << n;

    return 0;
}