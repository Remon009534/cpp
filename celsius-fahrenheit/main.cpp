#include <iostream>
#include <String>
using namespace std;

void celsius(double temp)
{
    cout << "\n" << (temp * 9/5) + 32 << " Degree Fahrenheit" << endl;
}

void fahrenheit(double temp)
{
    cout << "\n" << (temp - 32) * 5/9 << " Degree Celsius" << endl;
}

int main()
{
    string input_1;
    double temp;

    cout << "Do you want to convert from:\n1. Celsius To Fahrenheit.\n2. Fahrenheit To Celsius.\n\ninput the number = ";
    cin >> input_1;

    cout << "\nEnter the temperature = ";
    cin >> temp;

    if (input_1 == "1")
    {
        celsius(temp);
    }

    else if (input_1 == "2")
    {
        fahrenheit(temp);
    }

    else
    {
        cout << "Please enter 1 or 2.";
    }

    return 0;
}