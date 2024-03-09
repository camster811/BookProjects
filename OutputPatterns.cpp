#include <iostream>
using std::cin;
using std::cout;


int main()
{
	for (int row = 0; row < 5; row++)
	{
		for (int hashNum = 1; hashNum < 6 - row; hashNum++)
		{
			cout << "#";
			
		}
		cout << "\n";
	}

	for (int row = 1; row <= 5; row++)
	{
		cout << 6 - row << "\n";
	}


	for (int row = 1; row <= 7; row++)
	{
		for (int hash = 1; hash <= 4-abs(4 - row); hash++)
		{
			cout << "#";
		}
		cout << "\n";
	}

	for (int i = 1; i <= 7; i++)
	{
		if (i <= 4)
		{
			cout << i << "\n";
		}
		else
		{
			cout << 8-i << "\n";
		}
	}
}