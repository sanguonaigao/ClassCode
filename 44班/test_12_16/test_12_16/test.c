#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	//printf("%d\n", __STDC__);//VS 不遵循ANSI C
//	printf("%s\n", __FUNCTION__);
//	//leetcode 牛客网
//	//gcc 这样的编译器才是更加标准和严格的编译器
//	//Dev C++
//// 	int i = 0;
//// 	for(i=0; i<10; i++)
//// 	{
//// 		printf("file:%s line:%d date:%s time:%s\n", __FILE__, __LINE__, __DATE__, __TIME__);
//// 	}
//	system("pause");
//	return 0;
//}

#include<stdio.h>
//
//#define MAX 1000
//#define reg register
//#define forever for(;;)
//#define CASE break;case
//
//int main()
//{
//	int a = 0;
//	//int a = MAX;
//	//printf("%d\n", MAX);
//	if(1)
//		a = MAX;
//	else
//		a = 1;
//	//reg int a = 0;
//	//forever;
//	/*int age = 0;
//	switch(age)
//	{
//	case 1:
//	CASE 2:
//	CASE 3:
//	}*/
//	return 0;
//}


//#define SQUARE(X) X*X

//#define DOUBLE(X) ((X)+(X))
//
//#define MAX 10
//
//int main()
//{
//	int ret = 2*DOUBLE(MAX+4);
//	
//	//int ret = 2*((5)+(5));
//	//int ret  = 2*(5)+(5)
//	printf("MAX = %d\n", ret);
//	system("pause");
//	return 0;
//}
//
//#define PRINT(X, FORMAT) printf("the value of "#X" is "FORMAT"\n", X)
////
////深信服
////
//int main()
//{
//	int num = 10;
//	float f = 3.14f;
//	//printf("hello world\n");
//	//printf("hello ""world\n");
//	PRINT(num, "%d");
//	PRINT(f, "%f");
//
//	//printf("the value of a is %d\n", a);
//	//printf("the value of f is %f\n", f);
//	system("pause");
//	return 0;
//}

// #define CAT(X, Y) X##Y
// 
// int main()
// {
// 	int value44 = 2018;
// 	printf("%d\n", CAT(value, 44));
// 	//printf("%d\n", value##44)
// 	//printf("%d\n", value44);
// 
// 	system("pause");//2018
// 	return 0;
// }
//
//int Max(int x, int y)
//{
//	return x>y?x:y;
//}
//
//#define MAX(x, y) ((x)>(y)?(x):(y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);//函数
//	printf("max = %d\n", max);
//
//	max = MAX(a, b);//宏
//	printf("max = %d\n", max);
//	system("pause");
//	return 0;
//}

// #define Malloc(num, type) (type*)malloc(num*sizeof(type))
// 
// int main()
// {
// 	//malloc(10*sizeof(int));
// 	int *p = Malloc(10, int);
// 
// 	//int *p = (int*)malloc(10*sizeof(int));
// 	return 0;
// }
//
//#define MAX(X, Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 4;
//	int b = 5;
//	int max = MAX(a++, b++);
//	//int max = ((a++)>(b++)?(a++):(b++));
//
//	printf("%d\n", max);//6
//	printf("%d\n", a);//7 
//	printf("%d\n", b);//5
//	system("pause");
//	return 0;
//}

//offsetof
//getchar

//#define SIZEOF(arr) sizeof(arr)/sizeof(arr[0])
//
//int main()
//{
//	int a[10] = {0};
//	//int sz = sizeof(arr)/sizeof(arr[0]);
//	int sz = SIZEOF(a);
//	printf("%d\n", sz);
//	system("pause");
//	return 0;
//}

#define MAX 100
int main()
{
	printf("%d\n", MAX);
#undef MAX
	printf("%d\n", MAX);

	return 0;
}
