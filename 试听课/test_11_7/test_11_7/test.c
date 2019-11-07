#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//printf("%p\n", &a);
//	//printf("%p\n", &b);
//
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for(i=0; i<=11; i++)
//	{
//		arr[i] = 0;
//		printf("hello\n");
//	}
//
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int a = 1;
//	char* pa = (char*)&a;
//	if(*pa == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	//int a = 0x11223344;
//	//char* p = &a;
//	//*p = 0;
//
//	//int*pa = &a;
//	//*pa = 0;
//	//int a = 1;//0x 00 00 00 01
//	//int * pa = &a;//指针变量
//	//*pa = 20;
//	//printf("a = %d\n", a);//20
//
//	//char ch = 'w';
//	//char * pc = &ch;
//	//01 00 00 00
//	//00 00 00 01
//
//	return 0;
//}

#include <stdio.h>
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