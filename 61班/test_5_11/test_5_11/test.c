#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//
//int get_max(int x, int y)
//{
//	//return x>y?x:y;
//	if(x>y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int max = 0;
//	max = get_max(a, b);
//	max = get_max(10, b);
//	max = get_max(5+5, b);
//	max = get_max(get_max(3, 10), b);
//
//
//	printf("max = %d\n", max);
//	system("pause");
//	return 0;
//}

//当实参传递给形参的时候
//形参将是实参的是一份临时拷贝
//对形参的修改不会改变实参
//
//形式参数-形参
//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
////
//void Swap2(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	Swap1(a, b);//传值调用
//	//实参
//	Swap2(&a, &b);//传址调用
//	printf("a = %d b = %d\n", a, b);
//
//	//int a = 10;
//	//a = 20;
//
//	//int* p = &a;
//	//*p = 20;
//
//	system("pause");
//	return 0;
//}
//
//9

#include <math.h>
//
//int is_prime(int n)
//{
//	int j = 0;
//	for(j=2; j<=sqrt(n); j++)
//	{
//		if(n%j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for(i=100; i<=200; i++)
//	{
//		//
//		if(is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//	return 0;
//}
//
//int is_leap_year(int y)
//{
//	if(((y%4==0)&&(y%100!=0))||(y%400==0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}

//
//int is_leap_year(int y)
//{
//	return ((y%4==0)&&(y%100!=0))||(y%400==0);
//}
//
//int main()
//{
//	int year = 0;
//	for(year=1000; year<=2000; year++)
//	{
//		if(is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	system("pause");
//	return 0;
//}
//
//
//void test()
//{
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		printf("%d\n", i);
//		if(i == 5)
//			return;
//	}
//	printf("test:hehe\n");
//}

//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}
//int binary_search(int* arr, int k)
//
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz-1;
//
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
//		if(arr[mid]>k)
//		{
//			right = mid-1;
//		}
//		else if(arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if(ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了:%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}


//WIN32 API
//
//int binary_search(int arr[], int k, int left, int right)
//{
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
//		if(arr[mid]>k)
//		{
//			right = mid-1;
//		}
//		else if(arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = binary_search(arr, k, 2, 6);
//	if(ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了:%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}
// 
// void Add(int* p)
// {
// 	(*p)++;
// }
// 
// int main()
// {
// 	int num = 0;
// 	Add(&num);
// 	printf("num = %d\n", num);
// 	Add(&num);
// 	printf("num = %d\n", num);
// 	system("pause");
// 	return 0

#include <string.h>
//
//int main()
//{
//	//int len = strlen("abcdef");
//	//printf("len = %d\n", len);
//	//char arr[20] = {0};
//	//printf("len = %d\n", strlen(strcpy(arr, "hello")));
//	printf("%d", printf("%d", printf("%d", 43)));
//	//
//	//酷壳
//	//
//	system("pause");
//	return 0;
//}
//

//
//#include "add.h"
//
//#pragma comment(lib, "add.lib")
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("c = %d\n", c);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//

//
//void Print(int n)
//{
//	if(n>9)
//	{
//		Print(n/10);
//	}
//	printf("%d ", n%10);
//}
//
////
////Print(1234)
////Print(123) 4
////Print(12) 3 4
////Print(1) 2 3 4
////
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d", &n);//1234
//	Print(n);
//	system("pause");
//	return 0;
//}
//
//
//void test(int n)
//{
//	if(n<10000)
//	{
//		test(n+1);
//	}
//}
//int main()
//{
//	test(1);
//
//	return 0;
//}


