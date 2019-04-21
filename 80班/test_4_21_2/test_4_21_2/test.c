#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//
//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void Swap2(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	//传值调用
//	Swap1(a, b);
//	//传址调用
//	Swap2(&a, &b);
//	printf("a = %d b = %d\n", a, b);
//
//	system("pause");
//	return 0;
//}
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
//		//判断i是否为素数
//		//TDD-测试驱动开发
//		if(is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//	return 0;
//}

//int is_leap_year(int y)
//{
//	if(((y%4==0)&&(y%100!=0))||(y%400==0))
//		return 1;
//	else
//		return 0;
//}

//int is_leap_year(int y)
//{
//	return (((y%4==0)&&(y%100!=0))||(y%400==0));
//}
//
//int main()
//{
//	int year=0;
//	for(year=1000; year<=2000; year++)
//	{
//		if(is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0])-1;
//
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
//		if(arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else if(arr[mid] > k)
//		{
//			right = mid-1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if(left>right)
//		printf("找不到\n");
//	system("pause");
//	return 0;
//}
//
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
//		if(arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else if(arr[mid] > k)
//		{
//			right = mid-1;
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
//		printf("找到了, 下标是:%d\n", ret);
//	}
//
//	system("pause");
//	return 0;
//}

//
//int binary_search(int arr[], int k, int left, int right)
//{
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
//		if(arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else if(arr[mid] > k)
//		{
//			right = mid-1;
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
//	int left = 0;
//	int right = sz-1;
//	//int ret = binary_search(arr, k, left, right);
//	int ret = binary_search(arr, k, 2, 7);
//	if(ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了, 下标是:%d\n", ret);
//	}
//
//	system("pause");
//	return 0;
//}
//
//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);//1
//	Add(&num);
//	printf("%d\n", num);//2
//	system("pause");
//	return 0;
//}
//
//
//int main()
//{
//	int len = strlen("abc");
//	printf("%d\n", len);
//	//链式访问
//	printf("%d\n", strlen("abc"));//
//	system("pause");
//	return 0;
//}


//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	system("pause");
//	return 0;
//}

//酷壳

//#include "add.h"
//
////静态库导入
////#pragma comment(lib, "add.lib")
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
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
//void print(int n)
//{
//	if(n>9)
//	{
//		print(n/10);
//	}
//	printf("%d ", n%10);
//}
//
//int main()
//{
//	unsigned int num = 1234;
//	print(num);
//	//print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//	//1 2 3 4
//
//	system("pause");
//	return 0;
//}

//
//void test(int n)
//{
//	if(n<10000)
//		test(n+1);
//}
//int main()
//{
//	test(1);
//	return 0;
//}
#include <string.h>

//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int my_strlen(char* str)
//{
//	if(*str == '\0')
//		return 0;
//	else
//		return 1+my_strlen(str+1);
//}
//
////my_strlen("abc")
////1+my_strlen("bc")
////1+1+my_strlen("c")
////1+1+1+my_strlen("")
////1+1+1+0
////3
//
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}
//
//
//
//int fab(int n)
//{
//	if(n<=1)
//		return 1;
//	else
//		return n*fab(n-1);
//}
// 
// int fac(int n)
// {
// 	int i = 0;
// 	int ret = 1;
// 	for(i=1; i<=n; i++)
// 	{
// 		ret *= i;
// 	}
// 	return ret;
// }
// 

//CVTE
//
//int main()
//{
//	int n  = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fac(n);
//	printf("ret = %d\n", ret);
//
//	system("pause");
//	return 0;
//}
//

//斐波那契数数列
//1 1 2 3 5 8 13 21 34 55 ...
//

int fib(int n)
{
	if(n<=2)
		return 1;
	else
		return fib(n-1)+fib(n-2);
}

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fib(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}


