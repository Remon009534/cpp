#include <iostream>
#include <string>
using namespace std;

int main()
{
	int number;
	int limit;

	cout << "Enter a number : ";
	cin >> number;

	cout << "Enter the limit : ";
	cin >> limit;

	int i = number;

	if (i / 2)
	{
		cout << "\n********* Even Numbers *******\n" << endl;

		while(i <= limit)
		{
			cout << i << "," << " ";
			i++;
			i++;
		}
	}

	else
	{
		cout << "\n********* Odd Numbers *******\n" << endl;
		
		while(i <= limit)
		{
			cout << i << "," << " ";
			i++;
			i++;
		}
	}

	return 0;
}
