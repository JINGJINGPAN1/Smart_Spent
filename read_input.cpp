#include "common.h"

//Keyboard Input Validation Function
char readMenuSelection(int options)
{
	string str;
	while (true)
	{
		getline(cin, str);
		if (str.size() > 1 ||
			str[0] - '0' <= 0 ||
			str[0] - '0' > options)
		{
			cout << "Wrong! Please input again: ";
		}
		else
			break;
	}
	return str[0];
}


char readQuitComfirm() {

	string str;
	char ch;

	while (true)
	{
		getline(cin, str);
		if (str.empty())
			continue;

		ch = toupper(str[0]);
		if (str.size() > 1 ||
			ch != 'Y' && ch != 'N')
		{
			cout << "\n Wrong! Please input again:（Y/N）：";
		}
		else
			break;
	}
	return ch;

}

// read the amount from the key
int readAmount() {
	int amount;

	string str;
	while (true)
	{
		getline(cin, str);
		try
		{
			amount = stoi(str);
			break;
		}
		catch (invalid_argument e)
		{
			cout << "Wrong! Please input the correct number: ";
		}
		
			
	}
	return amount;

}