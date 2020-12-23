#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    double n;

    cout << "Enter a number = ";
    cin >> n;

    while (n >= 1)
    {
        if ((int)n == n)        
        {
            cout << "n = " << n << endl;
            n /= 2; 
        }

        else 
        {
            cout << "n = " << ceil(n) << "\t(" << n << ")" << endl;
            n = ceil(n / 2);
        }
    }


    return 0;
}