#include <iostream>
#include <string>
using std::cout;
using std::cin;

int main()
{
	int checksum = 0;
	int digit = 0;
	int iterator = 1;

	cout << "Enter a digit 0-9: ";
	cin >> digit;

	// Checksum digit needs to be between 0 and 9, computes validity otherwise
	while (digit >= 0 && digit <= 9)
	{
		// Luhn checksum formula (minus check digit)
		if (iterator % 2 == 0)
		{
			digit = digit * 2;

			if (std::to_string(digit).length() >= 2)
			{
				checksum += 1 + (digit % 10);
			}
			else { checksum += digit; }
		}
		else { checksum += digit; }

		iterator++;
		cout << "Enter a digit 0-9: ";
		cin >> digit;
	} 
	// Valid checksum has to be divisible by 10
	if (checksum % 10 == 0)
	{
		cout << "Valid - Checksum: " << checksum;
	}
	else
	{
		cout << "Invalid Checksum";
	}
}
