#define _CRT_SECURE_NO_WARNINGS 1


//f(x) = 2*x+1;
//f(x, y) = x+y;
//
// strlen()
//
//NULL-空指针-
//null,NUL -- '\0'
//

#include <stdio.h>
#include <string.h>
//
//int main()
//{
//	char arr1[20] = "xxxxxx";
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}
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
//	int max = get_max(a, b);
//	//max = get_max(1, 2);
//	//max = get_max(1+7, 2);
//	max = get_max(get_max(2, 3), 1);
//	printf("max = %d\n", max);
//
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
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	Swap(a, b);
//	printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//
//	return 0;
//}
//
//
//void Swap1(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap2(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	
//	Swap1(a, b);//传值调用
//	Swap2(&a, &b);//传址调用
//
//	printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}
//
//int is_prime(int n)
//{
//	int i = 0;
//	for(i=2; i<n; i++)
//	{
//		if(n%i == 0)
//			return 0;
//	}
//	return 1;//素数
//}
////
//TDD-测试驱动开发
//

#include <math.h>
//
//int is_prime(int n)
//{
//	int i = 0;
//	for(i=2; i<=sqrt(n); i++)
//	{
//		if(n%i == 0)
//			return 0;
//	}
//	return 1;//素数
//}
////
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
//	return 0;
//}
//
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
//int main()
//{
//	int year=0;
//	for(year=1000; year<=2000; year++)
//	{
//		//判断year是否为闰年
//		if(is_leap_year(year)==1)
//			printf("%d ", year);
//	}
//	return 0;
//}

//
////int binary_search(int* arr, )
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
//
//	return -1;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//
//	int ret = binary_search(arr, 7, sz);
//	if(-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}

// void Add(int* pn)
//{
//	(*pn)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}
//
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//
//	printf("%d\n", strlen("abcdef"));
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//4321
//	return 0;
//}



#include "add.h"

#pragma comment(lib, "add.lib")

int main()
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("c = %d\n", c);

	return 0;
}
