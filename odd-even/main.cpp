#include <iostream>
#include <string>
using namespace std;

int main()
{
	int number;
	int limit;
	int z = 2;

// Wanted to do smh bout the whole number thingy but failed 
	cout << "Please Enter A Whole Number or The Program Won't Work Properly" << endl;
	cout << "Enter a number : ";
	cin >> number;

// Taking input for where to stop the program
	cout << "Enter the limit : ";
	cin >> limit;

	// Need this two variables to work with the while
	int j = number;
	int i = number;

// To Check if the number is divisible by 2 or not if it then it is an even number
	if (z % i == 0)
	{
		cout << "\n********* Even Numbers *********\n" << endl;

		while (i <= limit)
		{
			cout << i << ", " << " ";
			i++;
			i++;
		}

		cout << endl;
		cout << "\n********* Odd Numbers *********\n" << endl;
		
		j = number + 1;

		while (j <= limit)
		{
			cout << j << ", " << " ";
			j++;
			j++;
		}

	}

	else 
	{	
		cout << "\n********* Odd Numbers *********\n" << endl;

		while (i <= limit)
		{
			cout << i << ", " << " ";
			i++;
			i++;
		}

		cout << endl;
		cout << "\n********* Even Numbers *********\n" << endl;
		
		j = number + 1;

		while (j <= limit)
		{
			cout << j << ", " << " ";
			j++;
			j++;
		}
	}

	return 0;
}
