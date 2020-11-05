#include <iostream>
#include <string>
using namespace std;

int main()
{
    string carModel;
    int carYear;
    string carColor;
    bool is4wheel;

    cout << "Input the Car Model: ";
    cin >> carModel;
    
    cout << "Input the Car Year: ";
    cin >> carYear;
    
    cout << "Input the Car Color: ";
    cin >> carColor;
    
    cout << "is the Car Four wheel drive??: ";
    cin >> is4wheel;

    cout << "Car Model: " << carModel << endl;
    cout << "Car Year: " << carYear << endl;
    cout << "Car Color: " << carColor << endl;
    cout << "Is The car Four Wheel Drive??" << is4wheel << endl; 
}