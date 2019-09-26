#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <limits.h>
//
//int main()
//{
//	int num1 = 2147483646;
//	int num2 = 2147483646;
//	int avg = 0;
//
//	//scanf("%d%d", &num1, &num2);
//	//avg = (num1+num2)/2;
//	avg = num1 + (num2-num1)/2;
//	printf("avg = %d\n", avg);
//
//	return 0;
//}

#include <stdlib.h>
#include <string.h>

int main()
{
	char input[20] = {0};
	//关机
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机!\n");
	scanf("%s", input);
	//判断
	if(strcmp(input , "我是猪") == 0)
	{
		//取消关机
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}