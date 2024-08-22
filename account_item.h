#pragma once

#include "common.h"


// structure
struct AccountItem
{
	string itemType;
	int amount;
	string detail;
};

// Account operation functions

// load data from file
void loadDataFromFile(vector<AccountItem>& items);

// accounting
void accounting(vector<AccountItem>& items);
void insertIntoFile(AccountItem item);
void income(vector<AccountItem>& items);
void expense(vector<AccountItem>& items);

// query
void query(const vector<AccountItem>& items);
void queryItems(const vector<AccountItem>& items);
void queryItems(const vector<AccountItem>& items, const string itemType);
void printAccountItem(const AccountItem& item);
