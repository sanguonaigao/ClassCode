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
	//struct Contact con = {0};
	pContact pcon = (pContact)malloc(sizeof(Contact)+DEFAULT_SZ*sizeof(PeoInfo));
	
	if(pcon == NULL)
	{
		printf("创建通讯录失败\n");
		system("pause");
		return;
	}
	
	//初始化通讯录
	InitContact(pcon);

	do 
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch(input)
		{
		case ADD:
			pcon = AddContact(pcon);
			break;
		case DEL:
			DelContact(pcon);
			break;
		case SEARCH:
			SeachContact(pcon);
			break;
		case MODIFY:
			ModifyContact(pcon);
			break;
		case SHOW:
			ShowContact(pcon);
			break;
		case SORT:
			SortContact(pcon);
			break;
		case EXIT:
			DestroyContact(pcon);
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
	system("pause");
	return 0;
}

