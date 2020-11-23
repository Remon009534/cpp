#include <iostream>
#include "functions.cpp"
using namespace std;

// Function To execute all the variables and other functions
void operation()
{
    string pass[5];
    string media;
    string socialMed[5] = {"Instagram", "Telegram", "Snapchat", "Facebook", "Messenger"};
    string input;
    string input_2;

    // For Inputing Passwords
    cout << "\nDo You want to input your passwords >> ";
    cin >> input;

    if (input == "yes")
    {
        cout << "\n" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Please Enter Your Password For ";
            cout << socialMed[i] << " >> ";
            cin >> pass[i];
        }
    }

    // For Printing Out All the stored Passwords If the user wants to do so
    cout << "\nDo you want all the passwords?? : ";
    cin >> input_2;
    cout << endl;

    if (input_2 == "yes")
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "The Password Of Your " << socialMed[i] << " >> " << pass[i] << endl;
        }
    }

    // For Printing Only The Password That The User want
    else if (input_2 == "no")
    {
        cout << "\nEnter The name of The social media : ";
        cin >> media;

        if (media == "Instagram")
        {
            instragram(pass, socialMed);
        }

        else if (media == "Telegram")
        {
            telegram(pass, socialMed);
        }

        else if (media == "Snapchat")
        {
            snapchat(pass, socialMed);
        }

        else if (media == "Facebook")
        {
            facebook(pass, socialMed);
        }

        else if (media == "Messenger")
        {
            messenger(pass, socialMed);
        }

        else
        {
            cout << "Wrong Input!!!" << endl;
        }
    }

    else
    {
        cout << "Wrong Input!!!" << endl;
    }
    

}