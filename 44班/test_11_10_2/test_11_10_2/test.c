#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//int binary_search(int arr[], int key, int sz)
//{
//	int left = 0;
//	int right = sz-1;
//
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
//		if(arr[mid] > key)
//		{
//			right = mid-1;
//		}
//		else if(arr[mid]<key)
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
//int binary_search(int arr[], int key, int left, int right)
//{
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
//		if(arr[mid] > key)
//		{
//			right = mid-1;
//		}
//		else if(arr[mid]<key)
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
//	int k = 7;
//	int ret = 0;
//	int left = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int right = sz-1;
//	//函数
//	ret = binary_search(arr, k, left, right);
//	if(-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了:%d\n", ret);
//	}
//	return 0;
//}
//

//
//void Inc(int *p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Inc(&num);
//	printf("%d\n", num);
//	return 0;
//}
#include <string.h>

//
//int  main()
//{
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//
//	//printf("%d\n", strlen("abc"));
//	char arr[10] = {0};
//	//printf("%s\n", strcpy(arr, "bit"));
//	printf("%d\n", strlen(strcpy(arr, "bit")));
//	return 0;
//}
//
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//
//	return 0;
//}
//

// #include "add.h"
// #pragma comment(lib, "add.lib")
// 
// int main()
// {
// 	int a = 10;
// 	int b = 20;
// 	int ret = Add(a, b);
// 	printf("%d\n", ret);
// 	return 0;
// }
//
//
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//
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
////print(1234)
////print(123) 4
////print(12) 3 4
////print(1) 2 3 4
//
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}

//
//void test(int n)
//{
//	if(n<=10000)
//		test(n+1);
//}
//
//int main()
//{
//	test(0);
//	return 0;
//}

#include <string.h>

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

//
//my_strlen("abcdef")
//1+my_strlen("bcdef")
//1+1+my_strlen("cdef");
//...
//1+1+1+1+1+1+my_strlen("");
//
//
//int my_strlen(char* str)
//{
//	if(*str != '\0')
//		return 1+my_strlen(str+1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char* p = "abcd";
//
//	int len = my_strlen(p);
//	printf("%d\n", len);
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
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fac(n);
//	printf("%d\n", ret);
//	return 0;
//}

//
//1 1 2 3 5 8 13 21 34 55 89 ...
//



//int count = 0;
//int fib(int n)
//{
//	if(n == 3)
//	{
//		count++;
//	}
//	if(n<=2)
//		return 1;
//	else
//		return fib(n-1)+fib(n-2);
//}

//
//50
//49 48
//48 47 47 46
//47 46 46 45 46 45 45 44
//46 45 45 44 45 44 44 43 45 44 44 43 44 43 43 42
//

//
//1 1 2 3 5 8 13 21 34 55 89 ...
//
//a=1
//b=1
//c=0
//
//c=a+b
//a=b;
//b=c;
//


//
//int fib(int n)
//{
//	int a = 1;
//	int b =1;
//	int c = 0;
//	if(n<=2)
//		return 1;
//	else
//	{
//		int i = 0;
//		for(i=0; i<n-2; i++)
//		{
//			c = a+b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//}

//
//CVTE
//

//
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	int i = 0;
//	for(i=0; i<n-2; i++)
//	{
//		c = a+b;
//		a = b;
//		b = c;
//	}
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
//	return 0;
//}


