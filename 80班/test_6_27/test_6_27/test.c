//#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


//
//void print(int a)
//{
//	printf("the value of a is %d\n", a);
//}
//
//#define PRINT(x, format) printf("the value of "#x " is "format"\n", x)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	float f = 3.14f;
//	PRINT(a, "%d");
//	//printf("the value of ""a""is %d\n", a);
//	PRINT(b, "%d");
//	PRINT(f, "%f");
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	printf("hello world\n");
//	printf("hello"" world\n");
//	system("pause");
//	return 0;
//}
// 
// #define CAT(X,Y) X##Y
// 
// int main()
// {
// 	int value80 = 100;
// 	printf("%d\n", CAT(value, 80));
// 
// 	//printf("%d\n", value80);
// 	system("pause");
// 	return 0;
// }
//
//int main()
//{
//	int a = 10;
//	int b = a+1;//1
//	int b = ++a;//2
//	return 0;
//}
//
//#define MAX(X, Y) ((X)>(Y)?(X):(Y))
//
//int Max(int a, int b)
//{
//	return (a>b)?(a):(b);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 8;
//	//int max = MAX(a++, b++);
//
//	int max = Max(a++, b++);
//
//	//int max = ((a++)>(b++)?(a++):(b++));
//
//	printf("%d\n", max);
//	printf("a = %d b = %d\n", a, b);
//	system("pause");
//	return 0;
//}
//
//
//#define MAX(X, Y) ((X)>(Y)?(X):(Y))
//
//int Max(int a, int b)
//{
//	return (a>b)?(a):(b);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 8;
//	int max = MAX(a, b);
//
//	max = Max(a, b);
//
//	//int max = ((a++)>(b++)?(a++):(b++));
//
//	printf("%d\n", max);
//	printf("a = %d b = %d\n", a, b);
//	system("pause");
//	return 0;
//}
//
//#define MALLOC(NUM, TYPE)  (TYPE*)malloc(NUM*sizeof(TYPE))
//
//int main()
//{
//	//int *p = (int*)malloc(10*sizeof(int));
//	int*p = MALLOC(10, int);
//	int i = 0;
//	if(p == NULL)
//		return 0;
//	//
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
//	system("pause");
//	return 0;
//}

//offsetof
//
//#define OFFSETOF(sname, smname)    (size_t)&(((sname*)0)->smname)
//
//struct S
//{
//	char c1;//0 1-3
//	int a;//4-7
//	char c2;//8 9-11
//};
//
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, c2));
//
//	system("pause");
//	return 0;
//}
//
//#define MAX 80
//
//int main()
//{
//	printf("%d\n", MAX);
//#undef MAX
//	printf("%d\n", MAX);
//	
//	return 0;
//}

//#define __DEBUG__ 1
//
//int main()
//{
//	int i = 0;
//	int arr[10] = {0};
//	for(i=0; i<10; i++)
//	{
//		arr[i] = i;
////#ifdef __DEBUG__
////		printf("%d\n", i);
////#endif
//
//
//#if 0
//		printf("%d\n", i);
//#endif
//	}
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//#if 1==2
//	printf("1==2\n");
//#elif 2==2
//	printf("2==2\n");
//#elif 3==3
//	printf("3==3\n");
//#else
//	printf("hehe\n");
//#endif
//	system("pause");
//	return 0;
//}
//
//#define MAX 0
//
//int main()
//{
//#ifndef MAX
//	printf("hehe\n");
//#endif
//
//	system("pause");
//	return 0;
//}


//#define MAX 0
//
//int main()
//{
//	//#ifdef MAX
//	//#if defined(MAX)
//
//
//#if !defined(MAX)
//	printf("hehe\n");
//#endif
//
//	system("pause");
//	return 0;
//}
//
//#include <stdio.h>
//#include "test.h"
//
//int main()
//{
//	return 0;
//}


//#pragma pack
//#pragma once
//#pragma comment


//int main()
//{
//#error "บวบว"
//	return 0;
//}
//
//#pragma warning(disable:4996)
//
//int main()
//{
//	int a = 10;
//	scanf("%d", &a);
//	return 0;
//}


