//Lab 10
//Max Comfort

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
	string str;
	char ch;
	int upperCount = 0;
	int lowerCount = 0;
	int numCount = 0;
	int spaceCount = 0;
	int totalChar;

	cout << "Type anything.\n";
	cout << "The program counts the total number of uppercase characters, lowercase characters,\n";
	cout << "digits, and length of the string (not including spaces) until # is entered. \n\n";

	while ((cin.get(ch)) && (ch != '#'))
	{
		str += ch;

		if (isupper(ch))
		{
			upperCount++;
		}
		else if (islower(ch))
		{
			lowerCount++;
		}
		else if (isdigit(ch))
		{
			numCount++;
		}
		else if (isspace(ch))
		{
			spaceCount++;
		}
	}

	totalChar = str.length() - spaceCount;
		
		cout << "\nThe total number of uppercase characters: " << upperCount << endl;
		cout << "The total number of lowercase characters: " << lowerCount << endl;
		cout << "The total number of digits: " << numCount << endl;
		cout << "The total number of characters: " << totalChar << endl;
	
	return 0;
}




	






