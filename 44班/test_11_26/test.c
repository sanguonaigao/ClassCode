#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
// 
// int main()
// {
// 	void(*signal(int, void(*)(int)))(int);
// 	return 0;
// }
// int main()
// {
// 	char* (*p)(char*, const char*) = strcpy;
// 	char arr[20] = {0};
// 	p(arr, "hello");
// 	printf("%s\n", arr);
// 	return 0;
// }
// int Add(int x, int y)
// {
// 	return x+y;
// }
// 
// 
// int main()
// {
// 	//int arr[10];
// 	//int (*p1)[10] = &arr;
// 	int (*p2)(int, int) = Add;//函数指针
// 	int ret = p2(2,3);
// 	//int ret = (*p2)(1,2);
// 	//int ret = (*Add)(1,2);
// 	//int ret = Add(1, 2);
// 	printf("ret = %d\n", ret);
// 	return 0;
// }

// void test()
// {
// 	printf("hehe\n");
// }

//
//int main()
//{
//	//test();
//	//printf("%p\n", &test);
//	//(*&test)();
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	//printf("%d\n", (*&Add)(2,3));//5
//	return 0;
//}

// 
// void test(char **p)
// {
// 
// }
// int main()
// {
// 	char* arr[5];
// 	//[char*][char*][char*][char*][char*]
// 
// 	test(arr);
// 	return 0;
// }
// int main()
// {
// 	char ch = 'w';
// 	char *p = &ch;
// 	char **pp = &p;
// 	test(pp);
// 	return 0;
// }
//
//void print(int *p, int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//}
//
//void test(char *str)
//{
//
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5};
//	int *p = arr;
//	char *p = "abcdef";
//	char arr[10] = "hello";
//	char ch = 'w';
//	test(&ch);
//	test(p);
//	test(arr);
//
//	print(p, sizeof(arr)/sizeof(arr[0]));
//	//int arr[10];
//	//int (*)[5]; parr[3]
//	//int arr[3][5];
//	//test(arr);//int(*)[5];
//	//int a;
//	//int* p;
//	//int(* ptr)[5] ;
//	return 0;
//}
// 
// int main()
// {
// 	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
// 	int (*p)[10] = &arr;
// 	int i = 0;
// 	for(i=0; i<10; i++)
// 	{
// 		printf("%d ", *(*p+i));//不建议
// 	}
// 	//&arr;//arr-整个数组
// 	//sizeof(arr);//arr-整个数组
// 
// 
// 	return 0;
// }

// 
// void print(int (*arr)[5], int x, int y)
// {
// 	int i = 0;
// 	int j = 0;
// 	for(i=0; i<x; i++)
// 	{
// 		for(j=0; j<y; j++)
// 		{
// 			printf("%d ", *(*(arr+i)+j));
// 		}
// 		printf("\n");
// 	}
// }
// 
// int main()
// {
// 	int arr[3][5] = {1,2,3,4,5,2,3,4,5,6,3,4,5,6,7};
// 	print(arr, 3, 5);
// 
// 	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
// 	//print(arr);
// 	return 0;
// }
//
//int main()
//{
//	int* arr[5] = {0};
//	int* (*p)[5] = &arr;
//
//	//int arr[10] = {0};
//	//int* p = arr;
//	//int(*ptr)[10] = &arr;
//
//// 
//// 	printf("%p\n", arr);//首元素的地址 int*
//// 	printf("%p\n", arr+1);//4
//// 	printf("--------------------------\n");
//// 	printf("%p\n", &arr);//数组的地址--数组指针
//// 	printf("%p\n", &arr+1);//40
//
//
//	//int(*p)[10];
//	return 0;
//}
//
//int main()
//{
//	int a[4] = {0};//int *
//	int b[4] = {0};
//	int c[4] = {0};
//	int d[4] = {0};
//	int e[4] = {0};
//
//	int* arr1[5] = {a, b, c, d, e};
//	char* arr2[6];
//
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//
//	const char *p1 = "abcdef";
//	const char *p2 = "abcdef";
//
//	arr1[0] = 'e';
//	*p1 = 'e';
//	if(arr1 == arr2)
//	{
//		printf("arr1 == arr2\n");
//	}
//	else
//	{
//		printf("arr1 != arr2\n");//
//	}
//	if(p1 == p2)
//	{
//		printf("p1 == p2\n");
//	}
//	else
//	{
//		printf("p1 != p2\n");
//	}
//	return 0;
//}
// int main()
// {
// 	char c = 'a';
// 	char *pc = &c;
// 	char *str = "abcdef";
// 
// 	return 0;
// }

// 
// int main()
// {
// 	float f = 20.0;
// 	float ret = 20.0/3;
// 	if(((ret*3-f)>-0.0000001) && ((ret*3-f)<0.0000001))
// 	{
// 		printf("==\n");
// 	}
// 	else
// 	{
// 		printf("!=\n");
// 	}
// 	return 0;
// }
//

// 
// int main()
// {
// 	float f =3.14;
// 	return 0;
// }
// int main()
// {
// 	int n = 9;
// 	//00000000000000000000000000001001
// 	//+0.00000000000000000001001 * 2^-126
// 	//
// 	float *pFloat = (float *)&n;//int*
// 	printf("n的值为：%d\n",n);//9
// 	printf("*pFloat的值为：%f\n",*pFloat);//0.000000
// 
// 	*pFloat = 9.0;
// 	//1001.0
// 	//1.001 * 2^3
// 	//01000001000100000000000000000000
// 	//
// 	printf("num的值为：%d\n",n);//9
// 	printf("*pFloat的值为：%f\n",*pFloat);//9.000000
// 
// 	return 0;
// }

//
//5.5
//101.1
//(-1)^0 1.011 * 2^2
//0100 0000 101100000000000000000000
//40b00000
//
//V = (-1)^S * M * 2^E
//
//
//int main()
//{
//	float f = 5.5f;
//
//	return 0;
//}
//
//1 11111111
//E=128
//+- 1.xxxx * 2^128
//
//E  = -127
//1.xxx * 2^-127
//

