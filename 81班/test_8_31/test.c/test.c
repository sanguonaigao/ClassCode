#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
//
//extern int Add(int ,int);
//
//int main()
//{
//	printf("%d\n", Add(2, 3));
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//// 	for(i=0; i<10; i++)
//// 	{
//// 		//printf("file:%s line:%d date:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//// 		printf("%s\n", __FUNCTION__);
//// 	}
//	printf("%d\n", __STDC__);
//	return 0;
//}
// 
// #define MAX 1000
// #define reg register
// typedef register reg;
// 
// int main()
// {
// 	register int age;
// 	reg int num;
// 
// 	return 0;
// }
//
//#define PINT int*
//typedef int* pint;
//
//
//int main()
//{
//	int* a;
//	int *b, c;
//	pint d,e;
//	return 0;
//}

//#define do_forever for(;;)
//
//int main()
//{
//	do_forever;
//	for(;;);
//
//	return 0;
//}
// 
// #define MAX 100
// 
// int main()
// {
// 	//int a = MAX;
// 	//int a = 100;;
// 	//printf("%d\n", MAX);
// 	//printf("%d\n", 100;);
// 	int a = 0;
// 	if(1)
// 		a = MAX
// 	else
// 		a = -1;
// 
// 	return 0;
// }
//#include <stdio.h>
//
//#define MAX 100
//
//#define SQUARE(X) ((X)*(X))
//#define DOUBLE(X) ((X)+(X))
//
//int main()
//{
//	//printf("%d\n", SQUARE(5+1));//
//	//printf("%d\n", 10*DOUBLE(MAX));
//	printf("MAX = %d\n", MAX);
//
//	//printf("%d\n", 10*(3)+(3));
//	return 0;
//}
//
//#define PRINT(X)\
//	printf("the value of "#X" is %d\n", X)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("the value of a is %d\n", a);
//	PRINT(a);
//	//printf("the value of b is %d\n", b);
//	PRINT(b);
//	//printf("hello ""bit\n");
//	return 0;
//}

//#define CAT(X, Y) X##Y
//
//int main()
//{
//	int value10 = 100;
//
//	printf("%d\n", CAT(value, 10));
//	printf("%d\n", value10);
//	return 0;
//}

//
//#define  MAX(X, Y) ((X)>(Y)?(X):(Y))
//
//int Max(int x, int y)
//{
//	return x>y?x:y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int max = MAX(a, b);
//	int max = ((a)>(b)?(a):(b));
//	//max = Max(a++, b++);
//	//getchar();
//
//	printf("%d\n", max);
//	return 0;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//int max = MAX(a++, b++);
//	//int max = ((a++)>(b++)?(a++):(b++));
//
//	printf("%d\n", max);
//	return 0;
//}
//
//#include <stdio.h>
//
//#define MAX 100
//
//int main()
//{
//	printf("max = %d\n", MAX);
//#undef MAX
//	printf("max = %d\n", MAX);
//
//	return 0;
////}
//
//int main()
//{
//#if 1+2
//	printf("hehe\n");
//#endif
//	return 0;
//}

//#define MAX 1

//int main()
//{
//#if MAX==1
//	printf("hehe\n");
//#elif MAX==4
//	printf("haha\n");
//#else 
//	printf("heihei\n");
//#endif
//
//	return 0;
//}

//#define MAX 0
//
//int main()
//{
////#ifdef MAX
////	printf("hehe\n");
////#endif
//
////#ifndef MAX
////	printf("hehe\n");
////#endif
////
////#if defined(MAX)
////	printf("hehe\n");
////#endif
////
////#if !defined(MAX)
////	printf("hehe\n");
////#endif
//	return 0;
//}

#include <stdio.h>
#include "test.h"

//int main()
//{
//#error "这是一个错误"
//	return 0;
//}