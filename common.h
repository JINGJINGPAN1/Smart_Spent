#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<vector>

#define INCOME "income"
#define EXPENSE "expense"
#define FILENAME "C:\\Mac\\Home\\Desktop\\Txt.txt"

using namespace std;


// util Functions
//menus-creating Functions
void showMainMenu();
void showAccountingMenu();
void showQueryMenu();

//Keyboard Input Validation Function
char readMenuSelection(int options);
char readQuitComfirm();
int readAmount();