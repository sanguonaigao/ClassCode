#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//
//int main()
//{
//	//printf("%c\n", tolower('A'));
//	//printf("%c\n", toupper('a'));
//	//Null-Nul---'\0'
//	//NULL
//	//char arr1[] = "hello bit";
//	//char arr1[] = {'b', 'i', 't'};
//	//char arr2[20] = {0};
//	//strcpy(arr2, arr1);
//	//printf("%s\n", arr2);
//
//	char arr[] = "hello bit";
//	memset(arr, 'a', 5);
//	printf("%s\n", arr);
//	return 0;
//}
//
//int get_max(int x, int y)
//{
//	return (x>y?x:y);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int max = a>b?a:b;//
//	int max = get_max(a, b);
//	int max = get_max(2, 3+4);
//	int max = get_max(get_max(2, 3), get_max(3, -1));
//	printf("%d\n", max);
//	return 0;
//}

//
//
//形参
//当实参传给形参的时候,形参是实参的一份临时拷贝
//对形参的修改不会改变实参
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
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("a = %d b = %d\n", a, b);
//	//传值调用
//	Swap1(a, b);//实参
//
//	//传址调用
//	Swap2(&a, &b);
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

#include <math.h>
// 
// int is_prime(int n)
// {
// 	int i = 0;
// 	for(i=2; i<=sqrt(n); i++)
// 	{
// 		if(n%i==0)
// 			return 0;
// 	}
// 	return 1;
// }
// 
// 
// int main()
// {
// 	int i = 0;
// 	int count = 0;
// 	for(i=100; i<=200; i++)
// 	{
// 		if(is_prime(i) == 1)
// 		{
// 			count++;
// 			printf("%d ", i);
// 		}
// 	}
// 	printf("\ncount = %d\n", count);
// 	return 0;
// }
//
//int is_leap_year(int year)
//{
//	return (year%4==0 && year%100!=0)||(year%400==0);
//	//if((year%4==0 && year%100!=0)||(year%400==0))
//	//	return 1;
//	//else
//	//	return 0;
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
// int binary_search(int arr[], int key, int left, int right)
// {
// 	while(left<=right)
// 	{
// 		int mid = left+(right-left)/2;
// 		if(arr[mid] > key)
// 		{
// 			right = mid-1;
// 		}
// 		else if(arr[mid] < key)
// 		{
// 			left = mid+1;
// 		}
// 		else
// 		{
// 			return mid;
// 		}
// 	}
// 	return -1;
// }
// 
// int main()
// {
// 	int arr[] = {1,2,3,4,5,6,7,8,9,10};
// 	int key = 7;
// 	int left = 0;
// 	int right = sizeof(arr)/sizeof(arr[0])-1;
// 	int ret = 0;
// 	ret = binary_search(arr, key, left, right);
// 	if(ret == -1)
// 	{
// 		printf("找不到\n");
// 	}
// 	else
// 	{
// 		printf("找到了:%d\n", ret);
// 	}
// 	return 0;
// }

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
//	Inc(&num);
//	printf("%d\n", num);
//	Inc(&num);
//	printf("%d\n", num);
//	return 0;
//}

// 
// int Inc(int n)
// {
// 	return n+1;
// }
// 
// int main()
// {
// 	int num = 0;
// 	num = Inc(num);
// 	printf("%d\n", num);
// 	num = Inc(num);
// 	printf("%d\n", num);
// 	num = Inc(num);
// 	printf("%d\n", num);
// 	return 0;
// }

//
//int main()
//{
//	//int len = 0;
//	//len = strlen("abcdef");
//	//printf("%d\n", strlen("abcdef"));
//	char arr1[20] = {0};
//	char arr2[] = "abcdef";
//
//	//printf("%s\n", strcpy(arr1, arr2));
//	printf("%d\n", strlen(strcpy(arr1, arr2)));
//	return 0;
//}

//
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
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
//	printf("%d", sum);
//	return 0;
//}

// int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

void print(int n)//1234
{
	if(n>9)
		print(n/10);//123
	printf("%d ", n%10);
}

int main()
{
	unsigned int n = 0;
	scanf("%d", &n);//1234
	
	print(n);
	//
	//print(1234)
	//print(123) 4
	//print(12) 3 4
	//print(1) 2 3 4
	//
	return 0;
}