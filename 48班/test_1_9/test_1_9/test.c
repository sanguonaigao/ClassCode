#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);
//	//打印上半部分
//	for(i=0; i<line; i++)
//	{
//		//打印一行
//		//打印空格
//		int j = 0;
//		for(j=0; j<line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for(j=0; j<2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for(i=0; i<line-1; i++)
//	{
//		//打印一行
//		//打印空格
//		int j = 0;
//		for(j=0; j<=i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for(j=0; j<2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

#include <math.h>
//
//int main()
//{
//	int i = 0;
//	for(i=1; i<=10000000; i++)
//	{
//		//判断i是否为水仙花数
//		//1. 获取i的位数-n//12
//		int sum = 0;
//		int tmp = i;
//		int n = 1;
//		while(tmp/10)
//		{
//			n++;
//			tmp/=10;
//		}
//		//2. 计算每一位的n次方的和
//		tmp = i;
//		while(tmp)
//		{
//			sum += pow(tmp%10,n);
//			tmp/=10;
//		}
//		//3. 比较
//		if(sum == i)
//			printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}


//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	int i = 0;
//	int tmp = 0;
//	scanf("%d %d", &a, &n);
//	for(i=0; i<n; i++)
//	{
//		tmp=tmp*10+a;
//		sum += (tmp);
//		//2 22 222 ..
//		//
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int ch = 0;
//	while((ch=getchar()) != EOF)
//	{
//		if(ch>='a' && ch<='z')
//		{
//			putchar(ch-32);
//		}
//		else if(ch>='A' && ch<='Z')
//		{
//			putchar(ch+32);
//		}
//		else if(ch>='0' && ch<='9')
//		{
//			;
//		}
//		else
//		{
//			putchar(ch);
//		}
//	}
//	return 0;
//}
//
//void Swap1(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap2(int *px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Add(a, b);
//	Add(a, 3);
//	Add(a, 3+5);
//	Add(a, Add(2, 3));
//
//	printf("a = %d b = %d\n", a, b);
//	Swap1(1, 3);
//	Swap2(&a, &b);
//	printf("a = %d b = %d\n", a, b);
//	system("pause");
//	return 0;
//}

//1,0
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
//	return 1;//是素数
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=100; i<=200; i++)
//	{
//		if(is_prime(i) == 1)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}
//
//int is_leap_year(int y)
//{
//	return ((y%4==0)&&(y%100!=0))||(y%400==0);
//	/*if(((y%4==0)&&(y%100!=0))||(y%400==0))
//	{
//	return 1;
//	}
//	else
//	{
//	return 0;
//	}*/
//}
//int main()
//{
//	int year=0;
//	for(year=1000; year<=2000; year++)
//	{
//		if(is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
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
//		int mid = left+(right-left)/2;
//		if(arr[mid] > k)
//		{
//			right = mid-1;
//		}
//		else if(arr[mid]<k)
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
//int main()
//{
//	//TDD
//	//测试驱动开发
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if(ret == -1)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	system("pause");
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
//	system("pause");
//	return 0;
//}
#include <string.h>
//
//int main()
//{
//	//int len = strlen("abc");
//	//char arr[10] = {0};
//	//链式访问
//	//printf("len = %d\n", strlen(strcpy(arr, "bit")));//3
//	printf("%d", printf("%d", printf("%d", 43)));
//	system("pause");
//	return 0;
//}
//
//#include "add.h"
//#pragma comment(lib, "add.lib")
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int ret = Add(a, b);
//	printf("ret = %d\n", ret);
//	system("pause");
//	return 0;
//}
//

//
//#include "add.h"
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int ret = Add(a, b);
//	printf("ret = %d\n", ret);
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
// print(1234)
// print(123) printf(4)
// print(12) printf(3) printf(4)
// print(1) printf(2) printf(3) printf(4)
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
//int main()
//{
//	int num = 1234;
//	print(num);//1 2 3 4
//	system("pause");//
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
//int main()
//{
//	test(1);
//	return 0;
//}
//
