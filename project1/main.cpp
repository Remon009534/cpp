#include <iostream>
using namespace std;

int main()
{
    int value1;
    int value2;
    string z;

    cout << "Enter first value: ";
    cin >> value1;

    cout << "Enter second value: ";
    cin >> value2;

    cout << "Enter a operator: ";
    cin >> z;

    if(z == "+")
    {
        cout << value1 << " + " << value2 << " = " << value1 + value2 << endl;
    }

    else if(z == "-")
    {
        cout << value1 << " - " << value2 << " = " << value1 + value2 << endl;
    } 

    else if(z == "*")
    {
        cout << value1 << " * " << value2 << " = " << value1 + value2 << endl;
    }

    else if(z == "/")
    {
        cout << value1 << " / " << value2 << " = " << value1 + value2 << endl;
    }

    else
    {
        cout << "Wrong input" << endl;
    }

    return 0;
}