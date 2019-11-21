#define _CRT_SECURE_NO_WARNINGS 1

//
#include <stdio.h>

//主函数-程序的入口
//int main()
//{
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	return 0;
//}

#include <limits.h>
//
//111111111111111111111111111111111111111111111111111111111111
//111111111111111111111111111111111111111111111111111111111111
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//
//	//int avg = (num1+num2)/2;
//
//	int avg = num1 + (num2-num1)/2;//
//
//	printf("avg = %d\n", avg);//15
//
//	return 0;
//}
//

//关机程序

#include <stdlib.h>
#include <string.h>

int main()
{
	char input[20] = {0};
	//1. 关机
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




