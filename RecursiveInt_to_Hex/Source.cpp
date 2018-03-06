// This program demonstrates the process of converting a decimal value 
// to hexidecimal using recursion.
// Christopher k. Dierolf
// 3/6/2018
#include <iostream>
#include <string>

using namespace std;

// Function Prototypes
void intToHex(int n);

int main()
{
	int val;
	char cont;
	do {
		cout << "\nEnter an integer to be converted to hexidecimal: ";
		cin >> val;
		intToHex(val);
		cout << "\n\nWould you like to convert another decimal? (Y/N): ";
		cin >> cont;
	} while (cont == 'Y' || cont == 'y');

	return 0;
}


void intToHex(int n)
{
	int remainder;

	if (n == 0)		// Base Case
	{
		return;
	}
	else
	{
		remainder = n % 16;   // Obtain the modulus of n
		n = n / 16;			  // Divide n by 16 to obtain next hexValue in recursion
		intToHex(n);		  // Enter recursion until n == 0

		// print the hexidecimal values
		if (remainder > 9)	  // Find the base-16 values if the remainder is > 9;
		{
			cout << (char)(remainder - 10 + 'A');
		}
		else                  // Only the remainder is needed for values 0 - 9
		{
			cout << remainder;
		}
	}
}