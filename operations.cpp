#include "account_item.h"
#include "common.h"

void loadDataFromFile(vector<AccountItem>& items)
{
	ifstream input(FILENAME);

	// read line by line
	AccountItem item;
	while (input >> item.itemType >> item.amount >> item.detail) {
		items.push_back(item);
	}
	input.close();
}

// ----------------1. budgets ----------------------------
void accounting(vector<AccountItem>& items) 
{

	// read from key and valid
	char key = readMenuSelection(3);

	switch (key)
	{
	case '1': // 1- income
		income(items);
		break;

	case '2': // 2- expense
		expense(items);
		break;

	//case '3': // 3- exit
	//	break;

	default:
		break;
	}
}

// income
void income(vector<AccountItem>& items) 
{
	AccountItem item;

	item.itemType = INCOME;
	// interact with user, and edit amount
	cout << "\n Amount Received: ";
	item.amount = readAmount();

	cout << "\n Notes: ";
	getline(cin, item.detail);

	// add into vector
	items.push_back(item);

	// write the record into the file
	insertIntoFile(item);

	// show "successful accounting"
	cout << "\n--------------- Income saved ----------------\n" << endl;
	cout << "\n please press Enter to back to main menu.." << endl;

	string line;
	getline(cin, line);

}

// expense
void expense(vector<AccountItem>& items)
{
	AccountItem item;

	item.itemType = EXPENSE;
	// interact with user, and edit amount
	cout << "\n Amount Spent: ";
	item.amount = - readAmount();

	cout << "\n Notes: ";
	getline(cin, item.detail);

	// add into vector
	items.push_back(item);

	// write the record into the file
	insertIntoFile(item);

	// show messages
	cout << "\n--------------- Expense saved ----------------\n" << endl;
	cout << "\n please press Enter to back to main menu.." << endl;

	string line;
	getline(cin, line);

}

// write the record into the file
void insertIntoFile(AccountItem item)
{
	ofstream output(FILENAME, ios::out | ios::app);
	output << item.itemType << "\t" << item.amount << "\t" << item.detail << endl;
	output.close();

}


// ----------------2. query ----------------------------
void query(const vector<AccountItem>& items)
{
	// read from key and valid
	char key = readMenuSelection(4);

	switch (key)
	{
	case '1': // 1- query all the budgets and total budgets
		queryItems(items);
		break;

	case '2': // 2- query and total income
		queryItems(items, INCOME);
		break;

	case '3': // 3- query and total expense
		queryItems(items, EXPENSE);
		break;

	default:
		break;
	}
}

// query all the budgets and total budgets

void queryItems(const vector<AccountItem>& items) {
	cout << "--------------- Query Result  --------------------" << endl;
	cout << "\nItemType\t\tAmount\t\tNotes\n" << endl;

	int total = 0;
	for (auto item : items) {
		printAccountItem(item);
		total += item.amount;
	}

	cout << "--------------------------------------------------\n" << endl;
	cout << "Total Amount: " << total << endl;
	string line;
	getline(cin, line);

}

void queryItems(const vector<AccountItem>& items, const string itemType) {
	cout << "--------------- Query Result  --------------------" << endl;
	cout << "\nItemType\t\tAmount\t\tNotes\n" << endl;

	int total = 0;
	for (auto item : items) {
		if (item.itemType == itemType) {
			printAccountItem(item);
			total += item.amount;
		}
	}

	cout << "--------------------------------------------------\n" << endl;
	cout << ((itemType == INCOME) ? "Total Income: " : "Total Expense: ") << total << endl;
	string line;
	getline(cin, line);
}

// print an item
void printAccountItem(const AccountItem& item)
{
	cout << item.itemType << "\t\t" << item.amount << "\t\t" << item.detail << endl;
}
