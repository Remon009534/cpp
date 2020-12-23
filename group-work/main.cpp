#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n = 30;

    cout << n << endl;

    while (n > 1)
    {
        
        if (n % 2 == 0)
        {
            cout << n / 2 << endl;
            n = n / 2;
        }
        
        else 
        {
            double decValue = (double)n / 2;
            n = ceil(decValue);
            cout<< n << "(" << decValue << ")" << endl;
            
        }    
    }

    return 0;
}