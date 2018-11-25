//#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#pragma warning(disable: 4996)
//
//int main()
//{
//	FILE* pf = fopen("log.txt", "w");
//	int i = 0;
//	if(pf  == NULL)
//	{
//		return 0;
//	}
//	for(i=0; i<10; i++)
//	{
//		fprintf(pf, "FILE:%s LINE:%d DATE:%s TIME:%s i = %d\n", __FILE__, __LINE__,__DATE__, __TIME__, i);
//	}
//	printf("%d\n", __STDC__);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//
//
//<鸟哥的linux私房菜>
//
//
//ls
//cd
//pwd
//mkdir
//rm 
//gcc
//vim
//


//
//预处理
//#define
//#include
//#pragma
//预处理指令
//

//#define reg register
//#define do_forever for(;;)
//
//
//int main()
//{
//	register int num = 0;
//	reg int num2 = 0;
//	do_forever;
//	return 0;
//}

//
//#define CASE break;case
//
//int main()
//{
//	int age = 0;
//	switch(age)
//	{
//	case 1:
//	CASE 2:
//	CASE 3:
//	CASE 4:
//	}
//	return 0;
//}
//
//#define MAX 1000;
//
//int main()
//{
//	//int num = 1000;;
//	//printf("%d\n", MAX);
//	int num = 0;
//	if(1)
//		num = MAX;
//	else
//		num = -1;
//
//	return 0;
//}
//
//#define SQUARE(num+3) ((x)*(x))
//#define MAX 100
//
//int main()
//{
//	int num = 10;
//	printf("MAX=%d", 100);
//	printf("%d\n", SQUARE(MAX+3));//43
//	//printf("%d\n", num*num);
//	return 0;
//}
//

//#define MAX(x,y) ((x)>(y)?(x):(y))
// 
//#define PRINT(x, format) printf("the value of "#x" is "format"\n", x)
// 
// int main()
// {
// 	int a = 10;
// 	int b = 20;
//	float f = 3.0;
//
// 	//printf("the value of a is %d\n", a);
// 	PRINT(a, "%d");
//	//printf("the value of ""a"" is %d\n", a);
// 	PRINT(b, "%d");
//	//printf("the value of ""b"" is %d\n", b);
//	PRINT(f, "%f");
// 	return 0;
// }
// 

//
//int main()
//{
//	printf("hello bit\n");
//	printf("hello ""bit\n");
//
//	return 0;
//}
//
//
//#define CAT(X, Y) X##Y
//
//int main()
//{
//	int num51 = 100;
//	printf("%d\n", CAT(num, 51));
//	return 0;
//}
//
//
//#define MAX(X, Y) ((X)>(Y)?(X):(Y))
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
//	int max1 = Max(a, b);
//	int max2 = MAX(a, b);
//	return 0;
//}

#include <stdio.h>
//
//#define MALLOC(num, type) (type*)malloc(num*sizeof(type))
//#define SIZEOF(ARR) sizeof(ARR)/sizeof(ARR[0])
//
//int main()
//{
//	int arr[10] = {0};
//	int sz = SIZEOF(arr);
//	printf("%d\n", sz);
//	//int sz = sizeof(arr)/sizeof(arr[0]);
//
//	//malloc(10*sizeof(int));
//	//malloc(10, int);
//	//int *p = MALLOC(10, int);
//
//	//int *p = (int*)malloc(10*sizeof(int));
//
//	return 0;
//}

//
//#define MAX(X, Y) ((X)>(Y)?(X):(Y))
//int Max(int x, int y)
//{
//	return x>y?x:y;
//}
//
//int main()
//{
//	int a = 8;
//	int b = 9;
//	//int max = MAX(a++, b++);
//	//int max = ((a++)>(b++)?(a++):(b++));
//	int max = Max(a++, b++);
//	printf("%d\n", max);
//
//	//int b = ++a;//带有副作用的
//	return 0;
//}

// offsetof
// getchar
// #define MAX 100
// 
// int  main()
// {
// 	printf("%d\n", MAX);
// #undef MAX
// 
// 	printf("%d\n", MAX);
// 
// 	return 0;
// }
// 
//
//#define __DEBUG__
//
//int main()
//{	
//	int a = 10;
//	int arr[10] = {1,2,3,4,5};
//	int i = 0;
//#ifdef __DEBUG__ 
//	printf("a = %d\n", a);
//#endif 
//	for(i=0; i<10; i++)
//	{
//#ifdef __DEBUG__ 
//		printf("%d ", arr[i]);
//#endif
//	}
//
//	return 0;
//}

// 
// int main()
// {
// #if 1==2
// 	printf("hehe\n");
// #elif 2==3
// 	printf("haha\n");
// #else
// 	printf("heihei\n");
// #endif
// 	return 0;
// }
// 
#include <windows.h>

//fopen
//
//int main()
//{
//	while(1)
//	{
//		Sleep(1000);
//		printf("hehe");
//	}
//
//	return 0;
//}
//

//#define M

//int main()
//{
////#ifdef M
////#if defined(M)
//
////#ifndef M
//#if !defined(M)
//	printf("hehe\n");
//#endif
//	return 0;
//}

// #if
// #ifdef
// #ifndef
// #endif
// #if defined(x)
// #include <stdio.h>
// 
// int main()
// {
// 
// 	return 0;
// }
//
//
//int main()
//{
//#error 呵呵
//
//	return 0;
//}

//
//CI- 持续集成
//



#include <stdio.h>


int main()
{
	char arr[10] = {0};
	scanf("%s",  arr);
	return 0;
}
