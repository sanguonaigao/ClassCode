#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if(n<=2)
//		return 1;
//	else
//	{
//		while(n>2)
//		{
//			c = a+b;
//			a = b;
//			b = c;
//			n--;
//		}
//		return c;
//	}
//}

//
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while(n>2)
//	{
//		c = a+b;
//		a = b;
//		b = c;
//		n--;
//	}
//
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d\n", ret);
//
//	system("pause");
//	return 0;
//}

//
//50
//49 48
//48 47 47 46
//47 46 46 45 46 45 45 44
//
//int count = 0;
//int fib(int n)
//{
//	if(n == 3)
//		count++;
//	if(n<=2)
//		return 1;
//	else
//		return fib(n-1)+fib(n-2);
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d\n", ret);
//	printf("count = %d\n", count);
//	system("pause");
//	return 0;
//}
//1 1 2 3 5 8 13 21 34 55 ...

//int fac(int n)
//{
//	if(n==1)
//		return 1;
//	else
//		return n*fac(n-1);
//}
//
//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for(i=1; i<=n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int  main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fac(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//
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


//int my_strlen(char* str)
//{
//	if(*str == '\0')
//		return 0;
//	else
//		return 1+my_strlen(str+1);
//}

//my_strlen("abc")
//1+my_strlen("bc")
//1+1+my_strlen("c")
//1+1+1+my_strlen("");
//1+1+1+0
//3

//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	//char *p = "abcdef";
//	//char arr[] = "abcdef";
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
//
//void print(unsigned int n)//1234
//{
//	if(n>9)
//	{
//		print(n/10);//123
//	}
//	printf("%d ", n%10);
//}
//
//int main()
//{
//	unsigned int num = 1234;
//	print(num);
//	//
//	//1234
//	//123 4
//	//12 3 4
//	//1 2 3 4
//	//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//#include "add.h"
//
//#pragma comment(lib, "add.lib")
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	system("pause");
//	return 0;
//}
//


//
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abcdef"));
//	printf("%d", printf("%d", printf("%d", 43)));
//	system("pause");
//	return 0;
//}
//
//void Add(int *p)
//{
//	*p++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}

//
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz-1;
//
//	while(left<=right)
//	{
//		int mid = left + (right-left)/2;
//		if(arr[mid] > k)		
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
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = binary_search(arr, 7, sz);
//	if(ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了， 下标是：%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}


//
//int binary_search(int arr[], int k, int left, int right)
//{
//	while(left<=right)
//	{
//		int mid = left + (right-left)/2;
//		if(arr[mid] > k)		
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
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0])-1;
//	int ret = binary_search(arr, 7, left, right);
//	if(ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了， 下标是：%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}


//
//int is_leap_year(int y)
//{
//	/*if(((y%4==0)&&(y%100!=0)) || (y%400==0))
//	return 1;
//	else
//	return 0;*/
//	return (((y%4==0)&&(y%100!=0)) || (y%400==0));
//}
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for(year=1000; year<=2000; year++)
//	{
//		//判断year是否为闰年
//		if(is_leap_year(year) == 1)
//		{
//			count++;
//			printf("%d ", year);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}