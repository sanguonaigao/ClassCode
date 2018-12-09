#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void menu()
{
	printf("***********************************\n");
	printf("****   1. add        2. del     ***\n");
	printf("****   3. search     4. modify  ***\n");
	printf("****   5. show       6. sort    ***\n");
	printf("****   0. exit                 ***\n");
	printf("***********************************\n");
}

void test()
{
	//创建通讯录
	Contact con;
	int input = 0;
	//初始化通讯录
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
		case SHOW:
			ShowContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			DestroyContact(&con);
			printf("退出\n");
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
	system("pause");
	return 0;
}