#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//Linux-系统
//Centos 7
//ubuntu
//redhat
//
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//printf("%p\n", &a);
//	//printf("%p\n", &b);
//
//	int i = 0;
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	for(i=0; i<=11; i++)
//	{
//		arr[i] = 0;
//		printf("hello\n");
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		printf("%p\n", &arr[i]);
//	}
//
//	return 0;
//}
#include <stdlib.h>
#include <string.h>

int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机!\n");
	scanf("%s", input);
	//判断
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

