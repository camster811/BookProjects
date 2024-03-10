#include <iostream>
using std::cin;
using std::cout;


int main()
{
	// Exercise 1
	for (int row = 0; row < 4; row++)
	{
		for (int spaces = 0; spaces < row; spaces++)
		{
			cout << " ";
		}

		for (int hashNum = 8; hashNum > 2*row; hashNum--)
		{
			cout << "#";
		}
		cout << "\n";
	} cout << "\n";

	// Exercise 2
	for (int row = 0; row < 4; row++)
	{
		int i = 1;
		for (int spaces = 3; spaces > row; spaces--)
		{
			cout << " ";
		}

		for (int hashNum = 0; hashNum <= i + (2 * row); hashNum += 2)
		{
			cout << "#";
			i++;
		}
		cout << "\n";
	}

	for (int row = 0; row < 4; row++)
	{
		int i = 1;
		for (int spaces = 0; spaces < row; spaces++)
		{
			cout << " ";
		}

		for (int hashNum = 8; hashNum > 2 * row; hashNum--)
		{
			cout << "#";
		}
		cout << "\n";
	} cout << "\n";

	// Exercise 3
	for (int row = 1; row <= 8; row++)
	{
		int leadingSpaces, middleSpaces, leftHashes, rightHashes;
		if (row <= 4)
		{
			leadingSpaces = row - 1;
			middleSpaces = (4 - row) * 4;
			leftHashes = row;
			rightHashes = row;
		} else
		{
			leadingSpaces = 8 - row;
			middleSpaces = (row - 5) * 4;
			leftHashes = (9 - row);
			rightHashes = (9 - row);
		}

		for (int ls = 0; ls < leadingSpaces; ls++)
		{
			cout << " ";
		}

		for (int lh = 1; lh <= leftHashes; lh++)
		{
			cout << "#";
		}

		for (int ms = 0; ms < middleSpaces; ms++)
		{
			cout << " ";
		}

		for (int rh = 1; rh <= rightHashes; rh++)
		{
			cout << "#";
		}
		cout << "\n";
	}
}