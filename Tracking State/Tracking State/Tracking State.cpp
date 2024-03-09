#include <iostream>
using std::cin;
using std::cout;


int main()
{
	char code;
	char decodedMessage;
	// char + 96 = letter

	enum modeType {UPPERCASE, LOWERCASE, PUNCTUATION};
	modeType mode = UPPERCASE;

	cout << "Enter code separated by comma: ";
	do {
		code = cin.get();
		int charToNum = (code - '0');
		code = cin.get();
		while (code != '[' && code != ',')
		{
			charToNum = charToNum * 10 + (code - '0');
			code = cin.get();
		}
		switch (mode) {
			case UPPERCASE:
				decodedMessage = std::toupper(char((charToNum % 27) + 96));
				if (charToNum % 27 == 0)
				{
					mode = LOWERCASE;
					continue;
				}
				break;
			case LOWERCASE:
				decodedMessage = std::tolower(char((charToNum % 27) + 96));
				if (charToNum % 27 == 0)
				{
					mode = PUNCTUATION;
					continue;
				}
				break;
			case PUNCTUATION:
				switch (charToNum % 9)
				{
				case 1: decodedMessage = '!'; break;
				case 2: decodedMessage = '?'; break;
				case 3: decodedMessage = ','; break;
				case 4: decodedMessage = '.'; break;
				case 5: decodedMessage = ' '; break;
				case 6: decodedMessage = ';'; break;
				case 7: decodedMessage = '"'; break;
				case 8: decodedMessage = '\''; break;
				}
				if (charToNum % 9 == 0)
				{
					mode = UPPERCASE;
					continue;
				}
				break;
			}

		cout << decodedMessage;

	} while (code != '[');
	cout << "\n";
	
}
