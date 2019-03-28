#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");//
agian:
	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", input);
	if(strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto agian;
	}
	return 0;
}

//
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);//15
//	/*total = money;
//	empty = total;
//
//	while(empty>=2)
//	{
//	total = total + empty/2;
//	empty = empty/2 + empty%2;
//	}*/
//
//	total = money*2-1;
//
//	printf("total = %d\n", total);
//	system("pause");
//	return 0;
//}
//

//main-朱函数-程序的入口
//
//int main()
//{
//	//printf-库函数-输出函数
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//
//	//暂停
//	system("pause");
//	return 0;
//}