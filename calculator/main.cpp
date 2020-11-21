#include <iostream>
#include <string>
using namespace std;

// function for addition
double add(double a, double b)
{
    return a + b;
}

// function for subtraction
double sub(double a, double b)
{
    return a - b;
}

// function for multiplication
double multiplication(double a, double b)
{
    return a * b;
}

// function for divition
double divide(double a, double b)
{
    return a / b;
}

// the main function
int main()
{ 
    double value1;
    double value2;
    char op;

// Taking input from the users
    cout << "\nEnter value 1 = ";
    cin >> value1;

    cout << "Enter value 2 = ";
    cin >> value2;

    cout << "Enter operator = ";
    cin >> op;
    
    // if else to execute the functions
    if (op == '+')
    {
        cout << value1 << " + " << value2 << " = " << add (value1, value2) << endl;
    }

    else if (op == '-')
    {
        cout << value1 << " - " << value2 << " = " << sub (value1, value2) << endl;
    }

    else if (op == '*')
    {
        cout << value1 << " * " << value2 << " = " << multiplication (value1, value2) << endl;
    }

    else if (op == '/')
    {
        cout << value1 << " / " << value2 << " = " << divide (value1, value2) << endl;
    }

    else
    {
        cout << "\nWRONG INPUT!!!" << endl;
    }

// continuer feature
    string con = "yes";

    cout << "\nDo you want to continue???";
    cin >> con;

    if (con == "yes")
    {
        main();
    }

    else
    {
        exit;
    }

    system("pause");

    return 0;
}
