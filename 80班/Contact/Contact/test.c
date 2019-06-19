#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void menu()
{
	printf("******************************\n");
	printf("*******      1. add      *****\n");
	printf("*******      2. del      *****\n");
	printf("*******      3. search   *****\n");
	printf("*******      4. modify   *****\n");
	printf("*******      5. show     *****\n");
	printf("*******      6. sort     *****\n");
	printf("*******      0. exit     *****\n");
	printf("******************************\n");
}
void test()
{
	int input = 0;
	//创建通讯录
	struct Contact con = {0};
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
		case SEARCH:
			SeachContact(&con);
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
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}
int main()
{
	//测试通讯录的功能
	test();
	return 0;
}

