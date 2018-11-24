#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
//
//				 //int* arr
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	//err
//	int right = sz-1;
//	
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
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



//int* arr
//int binary_search(int arr[], int k, int left, int right)
//{
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
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
//	int k = 7;
//	int left = 0;
//	int right = sz-1;
//	int ret = binary_search(arr, k, left, right);
//	if(ret == -1)
//	{
//		printf("找不到了\n");
//	}
//	else
//	{
//		printf("找到了:%d\n", ret);
//	}
//	return 0;
//}
// 
// void Inc(int *p)
// {
// 	(*p)++;
// }
// 
// int main()
// {
// 	int num = 0;
// 	Inc(&num);
// 	printf("%d\n", num);//1
// 	return 0;
// }
// 
// #include <string.h>
// 
// int main()
// {
// 	//int len = strlen("abcdef");
// 	//printf("len = %d\n", strlen("abcdef"));
// 	char arr[20] = {0};
// 	//strcpy(arr, "hello world");
// 	printf("%s\n", strcpy(arr, "hello world"));
// 	return 0;
// }
// 
//
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//434343
//	//43
//	//
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

// print(1234)
// print(123) 4
// print(12) 3 4
// print(1) 2 3 4
// 1 2 3 4
//
//void print(unsigned int n)
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
//	//1 2 3 4
//	return 0;
//}
//
//
//
//void test(int n)
//{
//	if(n<=10000)
//	{
//		test(n+1);
//	}
//}
//int main()
//{
//	test(0);
//	return 0;
//}
#include <stdio.h>
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


//char *p = "abcdef";

//my_strlen("abc")
//1+my_strlen("bc")
//1+1+my_strlen("c");
//1+1+1+my_strlen("");
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
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}
//
//int main()
//{
//	char *p = "abcdef";
//	printf("%p\n", p);
//	printf("%c\n", *p);
//
//	printf("%p\n", p+1);
//	printf("%c\n", *(p+1));
//
//
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
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", fac(n));
//	return 0;
//}

//
//1 1 2 3 5 8 13 21 34 55 ...
//
//50
//49 48
//48 47 47 46
//47 46 46 45 46 45 45 44
//
//
//
//int count = 0;
//
//int fib(int n)
//{
//	if(n == 3)
//		count++;
//
//	if(n<=2)
//		return 1;
//	else
//		return fib(n-1)+fib(n-2);
//}
//


//
//int fib(int n)
//{
//	if(n<=2)
//		return 1;
//	else
//	{
//		int a = 1;
//		int b = 1;
//		int c = 0;
//
//		while(n-2)
//		{
//			c = a+b;
//			a = b;
//			b = c;
//			n--;
//		}
//		return c;
//	}
//}


int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;

	//while(n-2>0)
	//{
	//	c = a+b;
	//	a = b;
	//	b = c;
	//	n--;
	//}

	int i = 0;
	for(i=0; i<=n-2; i++)
	{
		c = a+b;
		a = b;
		b = c;
	}
	return c;

}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);//
	ret = fib(n);
	printf("%d\n", ret);
	return 0;
}

