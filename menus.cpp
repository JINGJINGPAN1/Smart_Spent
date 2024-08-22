#include "common.h"


//menus-creating Function
void showMainMenu()
{
	system("cls");    // clean

	cout << "-------------------------------------------------------" << endl;
	cout << "|=============== Welcome to Spend Smart ==============|" << endl;
	cout << "|                                                     |" << endl;
	cout << "|******************     1 Budget    ******************|" << endl;
	cout << "|******************     2 Query     ******************|" << endl;
	cout << "|******************     3 Exit      ******************|" << endl;
	cout << "|_____________________________________________________|" << endl;

	cout << "\n Choose(1 - 3): ";

}

void showAccountingMenu()
{
	cout << "-------------------------------------------------------" << endl;
	cout << "|================ Accounting Options =================|" << endl;
	cout << "|                                                     |" << endl;
	cout << "|******************     1 Income    ******************|" << endl;
	cout << "|******************     2 Expense   ******************|" << endl;
	cout << "|******************     3 Back      ******************|" << endl;
	cout << "|_____________________________________-_______________|" << endl;

	cout << "\n Choose(1 - 3): ";

}
void showQueryMenu()
{
	cout << "-------------------------------------------------------" << endl;
	cout << "|================   Choose Filters   =================|" << endl;
	cout << "|                                                     |" << endl;
	cout << "|*************  1 Total All Accounts  ****************|" << endl;
	cout << "|*************  2 Total Income        ****************|" << endl;
	cout << "|*************  3 Total Expense       ****************|" << endl;
	cout << "|*************  4 Back                ****************|" << endl;
	cout << "|_____________________________________________________|" << endl;

	cout << "\nChoose(1 - 4)：";

}