#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int get_max(int x, int y)
//{
//	int max = 0;
//	if(x>y)
//		max = x;
//	else
//		max = y;
//	return max;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//
//	max = get_max(3, 5);
//	printf("max = %d\n", max);
//
//	return 0;
//}
//形参
//void Swap1(int x, int y)
//{
//	int z = x;
//	x = y;
//	y = z;
//}
//
//void Swap2(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int c = 0;
//	printf("a = %d b = %d\n", a, b);
//	//当实参传给形参的时候，形参是实参的一份临拷贝
//	//当形参的修改的时候，不会影响实参
//
//	//实参
//	Swap1(a, b);
//	Swap2(&a, &b);
//
//	printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int * pa = &a;
//	*pa = 0;
//
//	return 0;
//}
//
//int is_prime(int i)
//{
//	//2->i-1
//	int j = 0;
//	for(j=2; j<i; j++)
//	{
//		if(i%j == 0)
//			return 0;
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
//	return 0;
//}
//
//
//int is_leap_year(int y)
//{
//	if(((y%4==0)&&(y%100!=0)) || (y%400==0))
//		return 1;
//	else
//		return 0;
//}
//
//int is_leap_year(int y)
//{
//	return (((y%4==0)&&(y%100!=0)) || (y%400==0));
//}
//
//int main()
//{
//	int y = 0;
//	for(y=1000; y<=2000; y++)
//	{
//		if(is_leap_year(y)==1)
//			printf("%d ", y);
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
//		int mid = (left+right)/2;
//		if(arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else if(arr[mid] >k)
//		{
//			right = mid-1;
//		}
//		else
//		{
//			return mid;//找到了
//		}
//	}
//	return -1;//找不到
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	//printf("sz = %d\n", sz);
//	//有-返回下标
//	//没法->返回-1
//	int ret = binary_search(arr, k, sz);
//	if(ret == -1)
//	{
//		printf("没有\n");
//	}
//	else
//	{
//		printf("找到了,下标是：%d\n", ret);
//	}
//
//	return 0;
//}
//
//void Add(int *p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);//1
//	Add(&num);
//	printf("%d\n", num);//2
//	return 0;
//}

// int main()
// {
// 	int len = strlen("bit");
// 	printf("%d\n", len);
// 
// 	return 0;
// }
//
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	
//	return 0;
//}

//
//#include "add.h"
//#include "sub.h"
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("ret = %d\n", ret);//30
//	ret = Sub(4, 5);
//	printf("ret = %d\n", ret);//-1
//
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
//void Print(unsigned int num)//1234
//{
//	if(num>9)
//	{
//		Print(num/10);
//	}
//	printf("%d ", num%10);
//}
//
//int main()
//{
//	unsigned int num = 1234;
//	Print(num);
//	//Print(1234)
//	//Print(123) 4
//	//Print(12) 3 4
//	//Print(1) 2 3 4
//	//1 2 3 4
//
//	return 0;
//}
//
//void test(int n)
//{
//	if(n<=10000)
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

//
//int my_strlen(char* str)
//{
//	if(*str == '\0')
//		return 0;
//	else
//		return 1+my_strlen(str+1);
//}
//
//int main()
//{
//	int len = my_strlen("bit");
//	//my_strlen("bit")
//	//1+ my_strlen("it")
//	//1+1+ my_strlen("t");
//	//1+1+1+ my_strlen("")
//	//1+1+1+0
//	//3
//	printf("len = %d\n", len);
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
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fac(n);
//	printf("%d\n", ret);
//
//	return 0;
//}

//1 1 2 3 5 8 13 21 34 55 ...
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
//40
//39 38
//38 37 37 36
//37 36 36 35 36 35 35 34
//

//
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while(n>2)
//	{
//		c=a+b;
//		a=b;
//		b=c;
//		n--;
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
//	printf("ret = %d\n", ret);
//	return 0;
//}