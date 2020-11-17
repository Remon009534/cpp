#include <iostream>
#include <string>
using namespace std;

int main()
{
    string toDo[10];
    int size = sizeof(toDo) / sizeof(toDo[0]);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter Your Do-To stuffs " << i + 1 << " : ";
        cin >> toDo[i];
    }

    cout << "\n********* To-Do Tasks ***********\n" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << i+1 << ". " << toDo[i] << endl;
    }

    return 0;
}