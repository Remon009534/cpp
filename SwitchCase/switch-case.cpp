#include <iostream>
using namespace std;

int main()
{
    int rank = 1;

    switch(rank)
    {
        case 1:
            cout << "C++";
            break
        case 2:
            cout << "Java";
            break
        default:
            cout << "Case dosn't match..";
            break
    }
}