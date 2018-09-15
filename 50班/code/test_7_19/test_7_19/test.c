#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


#include <stdio.h>
int main()
{
	char a = -1;
	signed char b =-1;
	unsigned char c =-1;
	printf("a=%d,b=%d,c=%d",a,b,c);
	//11111111111111111111111111111111
	//11111111111111111111111111111111---
	//11111111111111111111111111111110
	//10000000000000000000000000000001 -- -1
	//
	//00000000000000000000000011111111--补码

	//-1 -1 3
	//-1 -1 1
	//
	return 0;
}



//#define ABS(a) ((a) > 0? (a): -(a))
//
//int sum_array(int *x, int n)
//{
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i< n;)
//	{
//		sum += ABS(x[i++]);
//	}
//	return sum;
//}


//联合
//

//int check_sys()
//{
//	union Un
//	{
//		char c;//1
//		int i;//4
//	}un;
//	un.i = 1;
//	//返回1，表示小端
//	//返回0，表示大端
//	return un.c;
//}

//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(union Un));//? 4 1
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//	return 0;
//}
//
//int check_sys()
//{
//	int a = 1;
//	//返回1，表示小端
//	//返回0，表示大端
//	return *(char *)&a;
//}
//
//int main()
//{
//	if(check_sys()==1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	//01 00 00 00
//	//00 00 00 01
//	return 0;
//}

//int  main()
//{
//	int a = 1;
//	//00000000000000000000000000000001
//	//0x00000001
//	//1-1
//	//1+(-1)
//	//00000000000000000000000000000001
//	//11111111111111111111111111111111
//	//00000000000000000000000000000000
//	//
//	
//	
//
//	//int a = 0x11223344;
//
//	//00000000000000000000000000000001--原码
//	//00000000000000000000000000000001--反码
//	//00000000000000000000000000000001--补码
//	//00000001
//	
//	//10000000000000000000000000000001--原码
//	//11111111111111111111111111111110--反码
//	//11111111111111111111111111111111--补码
//	//ffffffff
//	//
//	return 0;
//}
// 
// void test(void)
// {
// 	printf("hehe\n");
// }
// 
// int main()
// {
// 	test();
// 
// 	return 0;
// }

//
//struct S
//{
//	char name[10];
//	int age;
//	float score;
//};
//
//
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
////
//union Un
//{
//	char c;
//	int i;
//};
//
//
//int main()
//{
//
//	//int arr[10] = {0};
//	//printf("%d\n", sizeof(arr));//40
//	//printf("%d\n", sizeof(int [10]));//
//// 
//// 	int a = 10;
//// 	printf("%d\n", sizeof(a));//4
//// 	printf("%d\n", sizeof(int));//4
//// 
//
//	return 0;
//}
// #pragma warning(disable:4996)
// 
// int main()
// {
// 	char arr[10] = {0};
// 	scanf("%s", arr);
// 	return 0;
// }

// #include<stdio.h>
// 
// // test()
// // {
// // 
// // }
// #include <stdio.h>
// #include <stdlib.h>
//
//#define MALLOC(num, type)\
//	(type*)malloc(num*sizeof(type))
//
//
//int main()
//{
//	//test(int);
//	//int a = 10;
//	//int arr[10] = {0};
//	//int* p = (int *)malloc(10*sizeof(int));
//	int *p = MALLOC(10, int);
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		*(p+i) = i;
//	}
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

// int main()
// {
// 	int a = 10;
// 	int b = a+1;//1
// 	int b = ++a;//2
// 	return 0;
// }


//#define MAX(X, Y) ((X)>(Y)?(X):(Y))

//getchar
//offsetof
//
//int main()
//{
//	int a = 10;
//	int b = 11;
//
//	int max = MAX(a++, b++);
//	//int max = ((a++)>(b++)?(a++):(b++));
//	
//	printf("max = %d a = %d b = %d\n", max, a, b);
////#undef MAX
////	max = MAX(2, 3);
//	//
//	//11 11 12
//	//12 11 12
//	//12 11 13--OK
//	//11 12 13
//	//
//	return 0;
//}
//
//
//#define DEBUG 0
//
//int main()
//{
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//#if DEBUG
//		printf("file:%s line:%d i = %d\n", __FILE__, __LINE__, i);
//#endif
//	}
//	return 0;
//}

#include <windows.h>
//#include <stdio.h>
//
//int main()
//{
//	//while(1)
//	//{
//	//	printf("hehe");
//	//	Sleep(1000);
//	//}
//#if 1==2
//	printf("1==1\n");
//#elif 2==2
//	printf("2==2\n");
//#else
//	printf("hehe\n");
//#endif
//	return 0;
//}


//#include <stdio.h>
// #include "stdio.h"
// int main()
// {
// #error "这是一个错误"
// 
// 	return 0;
// }

//#pragma comment(lib, "Add.lib")
//1.
//#pragma once
//
////2.
//#ifndef xxxx
//#define xxxx
////
//#endif 
//#pragma pack()



//#define __DEBUG__ 0
//
//int main()
//{
////#ifndef __DEBUG__
//#if !defined(__DEBUG__)
//	printf("hehe\n");
//#endif
//	return 0;
//}