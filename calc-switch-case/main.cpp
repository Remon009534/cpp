#include <iostream>
using namespace std;

int main()
{
    double value1;
    double value2;
    char op;

    cout << "Enter value 1 = ";
    cin >> value1;

    cout << "Enter value 2 = ";
    cin >> value2;

    cout << "Enter operator = ";
    cin >> op;

    switch (op)
    {
        case '+':
            cout << value1 << " + " << value2 << " = " << value1 + value2;
            break;
        
        case '-':
            cout << value1 << " - " << value2 << " = " << value1 - value2;
            break;
        
        case '*':
            cout << value1 << " * " << value2 << " = " << value1 * value2;
            break;
        
        case '/':
            cout << value1 << " / " << value2 << " = " << value1 / value2;
            break;
        
        default:
            cout << "There was a proble retriving the data. Try again.";
            break;
    }

    return 0;
}