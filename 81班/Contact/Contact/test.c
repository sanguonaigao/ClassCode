#define _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"

void menu()
{
	printf("******************************\n");
	printf("**   1. add       2. del    **\n");
	printf("**   3. search    4. modify **\n");
	printf("**   5. show      6. sort   **\n");
	printf("**   0. exit                **\n");
	printf("******************************\n");
}

int main()
{
	int input = 0;
	//创建通讯录
	Contact con;//
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
		case SORT:
			break;
		case MODIFY:
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SEARCH:
			break;
		case EXIT:
			DestroyContact(&con);
			printf("退出程序\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}