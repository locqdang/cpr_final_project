/*Main menu with 4 options:
1 - Fundamentals
2 - Manipulating
3 - Converting
4 - Tokenizing

The program exits when user select 0*/


#define _CRT_SECURE_NO_WARNINGS
#include "fundamentals.h"
#include "manipulating.h"
#include "converting.h"
#include "tokenizing.h"

int main(void)
{
	char buff[10];
	//loop until user enters '0'
	do
	{
		printf("1 - Fundamentals\n");
		printf("2 - Manipulation\n");
		printf("3 - Converting\n");
		printf("4 - Tokenizing\n");
		printf("0 - Exit\n");
		printf("Which module to run? \n");
		fgets(buff, 10, stdin);
		switch (buff[0])
		{
		case '1': fundamentals();
			break;
		case '2': manipulating();
			break;
		case '3': converting();
			break;
		case '4': tokenizing();
			break;
		}
	}
	while (buff[0] != '0');
	return 0;
}