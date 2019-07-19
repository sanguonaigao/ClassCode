#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
//int main()
//{
//	char arr1[] = "hello bit";
//	char arr2[20] = {0};
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	system("pause");
//	return 0;
//}
//memset
//memory set

//memcpy/memmove
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//
//	system("pause");
//	return 0;
//}
//
//
//int get_max(int x, int y)
//{
//	return x>y?x:y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//
//	int max = get_max(get_max(3, 6), b);
//
//	printf("max = %d\n", max);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 3;
//	int c = 2;
//
//	if(a<b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if(a<c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if(b<c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	printf("%d %d %d\n", a, b, c);
//	system("pause");
//	return 0;
//}
//
//void Swap(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 3;
//	int c = 2;
//
//	if(a<b)
//	{
//		Swap(a, b);
//		//实参-->形参
//		//形参是实参的一份临时拷贝
//		//对形参的修改不能改变实参
//	}
//	if(a<c)
//	{
//		Swap(a, c);
//	}
//	if(b<c)
//	{
//		Swap(b, c);
//	}
//
//	printf("%d %d %d\n", a, b, c);
//	system("pause");
//	return 0;
//}
//void Swap1(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap2(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 3;
//	int c = 2;
//
//	if(a<b)
//	{
//		Swap2(&a, &b);
//	}
//	if(a<c)
//	{
//		Swap2(&a, &c);
//	}
//	if(b<c)
//	{
//		Swap2(&b, &c);
//	}
//
//	printf("%d %d %d\n", a, b, c);
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	*pa = 20;
//	return 0;
//}
//
//#include <math.h>
//
//int is_prime(int n)
//{
//	int i = 0;
//	for(i=2; i<=sqrt(n); i++)
//	{
//		if(n%i == 0)
//			return 0;//不是素数
//	}
//	return 1;//是素数
//}
//
//int main()
//{
//	int i = 0;
//	for(i=100; i<=200; i++)
//	{
//		//判断i是否为素数
//		if(is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	system("pause");
//	return 0;
//}

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
//int is_leap_year(int y)
//{
//	return ((y%4==0)&&(y%100!=0))||(y%400==0);
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
//		//int mid = (left+right)/2;
//		int mid = left+(right-left)/2;
//
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
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if(ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是:%d\n", ret);
//	}
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
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "hello";
//	int len = strlen(arr);
//	printf("%d\n", len);
//
//	printf("%d\n", strlen(arr));
//	system("pause");
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//4321
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
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
////
//
//void print(size_t n)//123
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
//	size_t num = 0;
//	scanf("%d", &num);
//	//123
//	//print(123)
//	//print(12) + 3
//	//print(1)+ 2+3
//
//	print(num);
//
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
//void test(int n)
//{
//	if(n<10000)
//	{
//		test(n+1);
//	}
//}
//
//int main()
//{
//	test(1);
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


int my_strlen(char* str)
{
	if(*str == '\0')
		return 0;
	else
		return 1+my_strlen(str+1);
}

int main()
{
	char arr[] = "abc";
	printf("%d\n", my_strlen(arr));
	system("pause");
	return 0;
}