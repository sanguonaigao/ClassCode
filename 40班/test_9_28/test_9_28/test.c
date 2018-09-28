#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

// 
// f(x) = 2*x+1;
// 
// int Fun(int x)
// {
// 	return 2*x+1;
// }
// 
//Add()
//

//
//int main()
//{
//	//char arr1[] = "hello world";
//	char arr1[] = {'a', 'b', 'c', '\0'};
//	char arr2[20] = {0};
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	//Null NUL-'\0'
//	//int *p = NULL;
//	return 0;
//}
//

// int main()
//{
//	char arr[20] = {0};
//	memset(arr, 'c', 20);
//	return 0;
//}
//
//strlen
//strcpy
//strcat
//strcmp
//strstr
//memcpy
//memmove
//strncpy
//strncmp
//strncat
//
//
//
//int get_max(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}
//
//int get_max(int x, int y)
//{
//	return x>y?x:y;
//}

//形参
//void Swap(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	//实参
//	Swap(&a, &b);
//	printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}
#include <math.h>

//int is_prime(int n)
//{
//	int i = 0;
//	for(i=2; i<=sqrt(n); i++)
//	{
//		if(0 == n%i)
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
//	for(i=100; i<=200; i++)
//	{
//		//i
//		if(is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//

//int is_leap_year(int year)
//{
//	if(((0 == year%4)&&(0!=year%100))||(0==year%400))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
// 
// int is_leap_year(int year)
// {
// 	return ((0 == year%4)&&(0!=year%100))||(0==year%400);
// }
// int main()
// {
// 	int year=0;
// 	for(year=1000; year<=2000; year++)
// 	{
// 		if(1 == is_leap_year(year))
// 		{
// 			printf("%d ", year);
// 		}
// 	}
// 	return 0;
// }
//
//int binary_search(int arr[], int key, int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
//		if(arr[mid] < key)
//		{
//			left = mid+1;
//		}
//		else if(arr[mid]>key)
//		{
//			right = mid-1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//
//	return -1;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if(-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了:%d\n", ret);
//	}
//
//	return 0;
//}
//

//void Inc(int* pn)
//{
//	(*pn)++;
//}

//int Inc(int n)
//{
//	n++;
//	return n;
//}
//int main()
//{
//	int num = 0;
//	printf("%d\n", num);
//	//Inc(&num);
//	num = Inc(num);
//	num = Inc(num);
//	printf("%d\n", num);
//	return 0;
//}

//
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[20] = {0};
//	int len = 0;
//	//strcpy(arr2, arr1);
//	//printf("%s\n", strcpy(arr2, arr1));
//	//len = strlen(arr1);
//	printf("%d\n", strlen(strcpy(arr2, arr1)));
//	return 0;
//}
//

#include "add.h"

#pragma comment(lib, "add.lib")

int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum = %d\n", sum);
	return 0;
}





