#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);//20
//
//	total = money*2-1;
//
//	//total = money;
//	//empty = money;
//	////
//	//while(empty>=2)
//	//{
//	//	total = total + empty/2;
//	//	empty = empty/2 + empty%2;
//	//}
//	printf("total = %d\n", total);
//	//printf("hehe\n");
//	//暂停
//	system("pause");
//	return 0;
//}

#include <string.h>

int main()
{
	char input[20] = {0};
	//关机
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", input);
	if(strcmp(input, "我是猪") == 0)//string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}