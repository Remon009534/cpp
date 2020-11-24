#include <iostream>
#include <string>
using namespace std;

int main()
{
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

    // op(val, val1, val2, val3, val4, total, total1, total2, total3, total4);

    cout << "\nName of Student : ";
    cin >> students[0];
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        
        cout << "Enter The marks = ";
        cin >> val[1];
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
        total = total1 + val1[i];
    }

    cout << "\nName of Student : ";
    cin >> students[2];
    cout << endl; 

    for (int i = 0; i < size; i++)
    {
        cout << "Enter The marks = ";
        cin >> val2[i];
        cout << "_____________________" << endl;
        total = total2 + val2[i];
    }

    cout << "\nName of Student : ";
    cin >> students[3];
    cout << endl; 

    for (int i = 0; i < size; i++)
    {
        cout << "Enter The marks = ";
        cin >> val3[i];
        cout << "_____________________" << endl;
        total = total3 + val3[i];
    }

    cout << "\nName of Student : ";
    cin >> students[4];
    cout << endl; 

    for (int i = 0; i < size; i++)
    {
        cout << "Enter The marks = ";
        cin >> val4[i];
        cout << "_____________________" << endl;
        total = total4 + val4[i];
    }

    cout << "\n*************** Avg Scores ***************" << endl;

    cout << students[0] << " : " << total << endl;
    cout << students[1] << " : " << total1 << endl;
    cout << students[2] << " : " << total2 << endl;
    cout << students[3] << " : " << total3 << endl;
    cout << students[4] << " : " << total4 << endl;

    // cout << "\nThe Total Score Is " << (total + total1 + total2 + total3 + total4) / size << endl;

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
