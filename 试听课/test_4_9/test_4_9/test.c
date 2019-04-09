#define _CRT_SECURE_NO_WARNINGS 1

//标准输入输出头文件
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机!\n");
	scanf("%s", input);
	if(strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}

//
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);//20
//	total = money*2-1;
//	//total = money;
//	//empty = money;
//	////置换
//	//while(empty>=2)
//	//{
//	//	total += empty/2;
//	//	empty = empty/2 + empty%2;
//	//}
//	printf("total = %d\n", total);
//	system("pause");
//	return 0;
//}


//
//int main()
//{
//	int a = 2147483646;
//	int b = 2147483646;
//	int c = 0;
//	//c = (a+b)/2;
//	c = a + (b-a)/2;
//	printf("c = %d\n", c);
//	system("pause");
//	return 0;
//}


//
////主函数-程序的入口
//int main()
//{
//	//输出函数-库函数
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

