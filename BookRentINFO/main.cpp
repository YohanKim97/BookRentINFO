#include <iostream>

using namespace std;

#define TITLE_SIZE 32
#define BOOK_MAX 10

struct _tagBook
{
	char strTitle[TITLE_SIZE];
	int iBookNumber;
	int iBookRentPrice;
	bool bBookRentStatus;
}; 

enum MENU
{
	MENU_NONE,
	MENU_ADDBOOK = 1,
	MENU_RENTBOOK,
	MENU_RETURNBOOK,
	MENU_BOOKLIST,
	MENU_EXIT
};

int main()
{
	_tagBook tBookArr[BOOK_MAX] = {};

	while (true)
	{
		system("cls");

		//Print Menu
	}

	return 0;
}