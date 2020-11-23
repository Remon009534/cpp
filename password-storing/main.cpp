#include <iostream>
#include <string>
using namespace std;

// Functions To Print Out The Passwords 
void instragram(string pass[5], string socialMed[5])
{
    cout << socialMed[0] << " >> " << pass[0] << endl;
}

void telegram(string pass[5], string socialMed[5])
{
    cout << socialMed[1] << " >> " << pass[1] << endl;
}

void snapchat(string pass[5], string socialMed[5])
{
    cout << socialMed[2] << " >> " << pass[2] << endl;
}

void facebook(string pass[5], string socialMed[5])
{
    cout << socialMed[3] << " >> " << pass[3] << endl;
}

void messenger(string pass[5], string socialMed[5])
{
    cout << socialMed[4] << " >> " << pass[4] << endl;
}

// The other main function
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
            cout << socialMed[i] << " >> ";
            cin >> pass[i];
        }
    }

    // For Printing Out All the stored Passwords If the user wants to do so
    cout << "\nDo you want all the passwords?? : ";
    cin >> input_2;

    if (input_2 == "yes")
    {
        for (int i = 0; i < 5; i++)
        {
            cout << socialMed[i] << " >> " << pass[i] << endl;
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

int main()
{
    operation();

    // Password To Enter The program And get All the other Passwords

    // string z = " ";
    // string a;
    // string n;
    
    // if (z == " ")
    // {
    //     cout << "Enter a password for the program : ";
    //     cin >> z;

    //     cout << "Password : ";
    //     cin >> a;

    //     if (a == z)
    //     {
    //         operation();
    //     }

    //     else
    //     {
    //         main();
    //     }
    // }

    // else
    // {
    //     cout << "Password : ";
    //     cin >> a;

    //     if (a == z)
    //     {
    //         operation();
    //     }

    //     else
    //     {
    //         main();
    //     }
    // }

    return 0;
}