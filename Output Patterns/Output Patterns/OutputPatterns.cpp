#include <iostream>
using std::cin;
using std::cout;


int main()
{
    // Prints decreasing amount of numbers from 5
	for (int row = 1; row <= 5; row++)
	{
		cout << 6 - row << "\n";
	}
	// Prints half triangle out of hashes
	for (int row = 0; row < 5; row++)
	{
		for (int hashNum = 1; hashNum < 6 - row; hashNum++)
		{
			cout << "#";
			
		}
		cout << "\n";
	}
	// Prints up to 4 then back down
	for (int i = 1; i <= 7; i++)
	{
		cout << 4 - abs(4 - i) << "\n";
	}
	// Prints up to 4 hashes and then back down
	for (int row = 1; row <= 7; row++)
	{
		for (int hash = 1; hash <= 4-abs(4 - row); hash++)
		{
			cout << "#";
		}
		cout << "\n";
	}
}