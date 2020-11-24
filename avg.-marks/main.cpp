#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declaring Variables
    string students[5];
    double val[5];
    double val1[5];
    double val2[5];
    double val3[5];
    double val4[5];
    double total;
    double total1;
    double total2;
    double total3;
    double total4;
    string con;

    int size = sizeof(val) / sizeof(val[0]);

    // Taking name of students and calculating the marks
    cout << "\nName of Student : ";
    cin >> students[0];
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        
        cout << "Enter The marks = ";
        cin >> val[i];
        cout << "_____________________" << endl;
        total = total + val[i];
    }

    cout << "\nName of Student : ";
    cin >> students[1];
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter The marks = ";
        cin >> val1[i];
        cout << "_____________________" << endl;
        total1 = total1 + val1[i];
    }

    cout << "\nName of Student : ";
    cin >> students[2];
    cout << endl; 

    for (int i = 0; i < size; i++)
    {
        cout << "Enter The marks = ";
        cin >> val2[i];
        cout << "_____________________" << endl;
        total2 = total2 + val2[i];
    }

    cout << "\nName of Student : ";
    cin >> students[3];
    cout << endl; 

    for (int i = 0; i < size; i++)
    {
        cout << "Enter The marks = ";
        cin >> val3[i];
        cout << "_____________________" << endl;
        total3 = total3 + val3[i];
    }

    cout << "\nName of Student : ";
    cin >> students[4];
    cout << endl; 

    for (int i = 0; i < size; i++)
    {
        cout << "Enter The marks = ";
        cin >> val4[i];
        cout << "_____________________" << endl;
        total4 = total4 + val4[i];
    }

    // Printing The Avg Scores
    cout << "\n*************** Avg Scores ***************" << endl;

    cout << students[0] << " : " << total << endl;
    cout << students[1] << " : " << total1 << endl;
    cout << students[2] << " : " << total2 << endl;
    cout << students[3] << " : " << total3 << endl;
    cout << students[4] << " : " << total4 << endl;

    // Cotinue Function
    cout << "\nDo You Want To Continue >> ";
    cin >> con;

    if (con == "yes")
    {
        main();
    }

    else
    {
        exit;
    }

    return 0;
}
