#define _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"

void menu()
{
	printf("**************************************\n");
	printf("*****   1. add         2. del     ****\n");
	printf("*****   3. search      4. modify  ****\n");
	printf("*****   5. show        6. sort    ****\n");
	printf("*****   0.exit         7. empty   ****\n");
	printf("**************************************\n");
}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	EMPTY
};

void test()
{
	int input = 0;
	Contact con;//通讯录
	InitContact(&con);
	do 
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch(input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			SaveContact(&con);
			DestroyContact(&con);
			printf("退出通讯录\n");
			break;
		case EMPTY:
			EmptyContact(&con);
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}

