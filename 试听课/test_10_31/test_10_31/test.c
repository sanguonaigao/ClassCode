#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//
//	for(i=0; i<=11; i++)
//	{
//		arr[i] = 0;
//		printf("hello\n");
//	}
//	return 0;
//}

#include <stdlib.h>
#include <string.h>

int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
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