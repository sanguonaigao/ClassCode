#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//
//int is_prime(int n)
//{
//	//判断n是否为素数
//	int i = 0;
//	for(i=2; i<n; i++)
//	{
//		if(n%i==0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=100; i<=200; i++)
//	{
//		//判断i是否为素数
//		if(is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}

//int is_leap_year(int y)
//{
//	if((y%4==0 && y%100!=0) || (y%400==0))
//		return 1;
//	else
//		return 0;
//}
//
//int is_leap_year(int y)
//{
//	return ((y%4==0 && y%100!=0) || (y%400==0));
//}
//
//
//int main()
//{
//	int year = 0;
//	for(year=1000; year<=2000; year++)
//	{
//		//判断year是否为闰年
//		if(is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	system("pause");
//	return 0;
//}
//
//int binary_search(int arr[], int k, int sz)//int *arr
//{
//	int left = 0;
//	int right = sz-1;
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
//			return mid;
//		}
//	}
//	return -1;//找不到
//}
//
//int main()
//{
//	//二分查找
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};//7
//	int k = 7;
//	int ret = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//
//	//TDD-测试驱动开发
//	ret = binary_search(arr, k, sz);//传递的是首元素的地址
//	if(ret == -1)
//		printf("找不到\n");
//	else
//		printf("找到了，下标是：%d\n", ret);
//	system("pause");
//	return 0;
//}

//
//int binary_search(int arr[], int k, int left, int right)//int *arr
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
//	return -1;//找不到
//}
//
//int main()
//{
//	//二分查找
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};//7
//	int k = 7;
//	int ret = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int left = 0;
//	int right = sz-1;
//	//TDD-测试驱动开发
//	ret = binary_search(arr, k, left, right);//传递的是首元素的地址
//	if(ret == -1)
//		printf("找不到\n");
//	else
//		printf("找到了，下标是：%d\n", ret);
//	system("pause");
//	return 0;
//}
//
//去哪儿网
//JAVA


// void Add(int* pm)
// {
// 	*pm = *pm+1;
// }
//int Add(int m)
//{
//	m++;
//	return m;
//}
//int main()
//{
//	int num = 0;
//	//Add(&num);
//	num = Add(num);
//	printf("%d\n", num);
//	//Add(&num);
//	num = Add(num);
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}
#include <string.h>
//
//int main()
//{
//	//int len = strlen("abcdef");
//	//printf("%d\n", len);
//
//	//printf("%d\n", strlen("abcdef"));
//	printf("%d", printf("%d", printf("%d", 43)));
//
//	system("pause");
//	return 0;
//}


#include "add.h"
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
//
//void print(int n)
//{
//	if(n>9)
//		print(n/10);
//	printf("%d ", n%10);
//}
//
//int main()
//{
//	//printf("hehe\n");
//	//main();
//	unsigned int n = 0;
//	scanf("%u", &n);
//	print(n);//
//	//print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//	//1 2 3 4
//	//
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
//
//int my_strlen(char* str)
//{
//	int count = 0;
//
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//my_strlen("abc")
//1+my_strlen("bc")
//1+1+my_strlen("c")
//1+1+1+my_strlen("")
//1+1+1+0
//3
//
//int my_strlen(char *str)
//{
//	if(*str != '\0')
//		return 1+my_strlen(str+1);
//	else
//		return 0;
//}
//
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}
//
//int fac(int n)
//{
//	if(n<=1)
//		return 1;
//	else
//		return n*fac(n-1);
//}
//
//int main()
//{
//	int n = 1;
//	int i = 0;
//	int ret = 1;
//	/*for(i=1; i<=n; i++)
//	{
//		ret *= i;
//	}*/
//	ret = fac(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//斐波那契数列
//1 1 2 3 5 8 13 21 34 55
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
	printf("ret = %d\n", ret);
	system("pause");
	return 0;
}