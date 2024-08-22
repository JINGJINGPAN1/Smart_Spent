#include "account_item.h"
#include "common.h"

int main()
{
	/*1. load data from files*/
	vector<AccountItem> items;
	loadDataFromFile(items);

	bool quit = false;

	while (!quit) {
		// show main menus
		showMainMenu();

		// read from key and valid
		char key = readMenuSelection(3);

		switch (key)
		{
		case '1': // 1- accounting
			showAccountingMenu();
			accounting(items);
			break;

		case '2': // 2- query
			showQueryMenu();
			query(items);
			break;

		case '3': // 3- exit
			cout << "\n Are you sure to exit? (Y / N): ";
			if (readQuitComfirm() == 'Y') {
				quit = true;
			}
			break;

		default:
			break;
		}

		cout << endl;
	}

}