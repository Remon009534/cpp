#include <iostream>
#include <string>
using namespace std;

int main()
{
    double val[5];
    double total;
    string con;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter The marks = ";
        cin >> val[i];
        cout << "_____________________" << endl;
        total = total + val[i];
    }

    cout << "\nThe Total Score Is " << total << endl;

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
