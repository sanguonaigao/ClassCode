#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//<C陷阱和缺陷>
//
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//
//	/*for(i=0; i<10; i++)
//	{
//	printf("%p\n", &arr[i]);
//	}*/
//	for(i=0; i<=11; i++)
//	{
//		arr[i] = 0;
//		printf("hello\n");
//	}
//
//	return 0;
//}
//
//int main()
//{
//// 	char ch = 'w';
//// 	char* pc = &ch;
//	//int a = 1;
//	////指针
//	//int* p = &a;
//	//*p = 20;//解引用操作
//	//printf("%d\n", a);
//
//	/*int a = 0x11223344;
//	char* pa = &a;
//	*pa = 0;*/
//
//	//printf("%p\n", &a);
//	//0x00 00 00 01
//	//01 00 00 00
//	//00 00 00 01
//
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
//	return 0;
//}

//
//leetcode
//
//
//#include <string.h>
//
//char Find(char arr[])
//{
//	int count[256] = {0};
//	int i = 0;
//	int len = strlen(arr);
//	for(i=0; i<len; i++)
//	{
//		count[arr[i]]++;
//	}
//	for(i=0; i<len; i++)
//	{
//		if(count[arr[i]] == 1)
//			return arr[i];
//	}
//	return -1;//异常
//}
//
//int main()
//{
//	char arr[] = "aqwrawd";
//	char ret = Find(arr);
//	if(ret == -1)
//	{
//		printf("error\n");
//	}
//	else
//	{
//		printf("ret = %c\n", ret);
//	}
//	return 0;
//}
//
//内存对齐
//
#include <stddef.h>

struct S
{
	char c1;//1
	int i;//4
	char c2;//1
};
#define OffSetOF(sn, mn)   (size_t)&(((sn*)0)->mn)

int  main()
{
	printf("%d\n", OffSetOF(struct S, c1));
	printf("%d\n", OffSetOF(struct S, i));
	printf("%d\n", OffSetOF(struct S, c2));
	return 0;
}

//offsetof
//#define OffSetOf(sn, mn) 
//int main()
//{
//	struct S s;
//	struct S* ps = &s;
//	ps->
//// 	int a = 20;
//// 	int* pa = &a;
//	//printf("%d\n", sizeof(struct S));
//	printf("%d\n", offsetof(struct S, c1));//
//	printf("%d\n", offsetof(struct S, i));//
//	printf("%d\n", offsetof(struct S, c2));//
//
//	return 0;
//}
//

//
//int main()
//{
//	struct S s = {'b', 100, 't'};
//	struct S* ps = &s;
//	printf("%c %d %c\n", ps->c1, ps->i, ps->c2);
//
//	//printf("%c %d %c\n", s.c1, s.i, s.c2);
//	return 0;
//}



