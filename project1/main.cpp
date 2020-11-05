#include <iostream>
using namespace std;

int main()
{
    int y;
    int a;
    string z;

    cout << "Enter first value: ";
    cin >> y;

    cout << "Enter second value: ";
    cin >> a;

    cout << "Enter a operator: ";
    cin >> z;

    if(z == "+")
    {
        cout << y + a;
    }
    else if(z == "-")
    {
        cout << y - a;
    } 
    else if(z == "*")
    {
        cout << y * a;
    }
    else if(z == "/")
    {
        cout << y / a;
    }
    else
    {
        cout << "Wrong input" << endl;
    }
    
    
    return 0;
}