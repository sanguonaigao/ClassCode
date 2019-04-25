#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1 1 2 3 5 8 13 21 34 55 ...
#include <stdlib.h>

//
//int count = 0;
//
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
////
////fib(50)-1
////fib(49) fib(48)-2
////48 47 47 46-4
////47 46 46 45 46 45 45 44-8
////
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
//		c = a+b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//
//	scanf("%d", &n);
//	ret = fib(n);//
//	printf("%d\n", ret);
//
//	system("pause");
//
//	return 0;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//011-b
//	//101-a
//	//110-
//
//	printf("a = %d b =%d\n", a, b);
//
//	a = a^b;//异或-按（二进制）位异或
//	b = a^b;
//	a = a^b;
//
//	printf("a = %d b =%d\n", a, b);
//
//	/*
//	a = a+b;
//	b = a-b;
//	a = a-b;
//	*/
//
//	/*int tmp = 0;
//
//	tmp = a;
//	a = b;
//	b = tmp;*/
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int arr[] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
//	int i = 0;
//	int max = arr[0];
//	int sz = sizeof(arr)/sizeof(arr[0]);
//
//	for(i=1; i<sz; i++)
//	{
//		if(arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//
//	printf("%d\n", max);
//
//	system("pause");
//	return 0;
//}
//
//void Swap(int* px, int *py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 2;
//	int b = 1;
//	int c = 3;
//
//	if(a<b)
//	{
//		Swap(&a, &b);
//	}
//	if(a<c)
//	{
//		Swap(&a, &c);
//	}
//	if(b<c)
//	{
//		Swap(&b, &c);
//	}
//	printf("%d %d %d\n", a, b, c);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int t = 0;
//	scanf("%d%d", &m, &n);//m=18 n=24
//	while(t=m%n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("%d\n", n);
//	system("pause");
//	return 0;
//}
////
//
//void SwapArr(int arr1[], int arr2[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//
//void PrintArr(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {6,7,8,9,0};
//	
//	int sz = sizeof(arr1)/sizeof(arr1[0]);
//	SwapArr(arr1, arr2, sz);
//	PrintArr(arr1, sz);
//	PrintArr(arr2, sz);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//
//	for(i=1; i<=100; i++)
//	{
//		sum = sum + flag*1.0/i;
//		flag = -flag;
//	}
//
//	printf("sum = %lf\n", sum);
//
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=1; i<=100; i++)
//	{
//		if(i/10==9)
//			count++;
//		if(i%10==9)
//			count++;
//	}
//	printf("count = %d\n", count);
//
//	system("pause");
//
//	return 0;
//}
//
//
//int main()
//{
//	int tmp = 0;
//	int ch = getchar();
//	printf("hehe: %c\n", ch);
//
//	//fflush(stdin);//刷新缓冲区
//	while((tmp=getchar()) != '\n')
//	{
//		;
//	}
//
//	ch = getchar();//等待
//	//printf("%d\n", ch);
//	//printf("%d\n", '\n');
//
//
//	printf("haha\n");
//	system("pause");
//	return 0;
//}
//

//
//
//int main()
//{
//	int ch = 0;
//	char arr[10] = {0};
//	printf("请输入密码:>");
//	scanf("%s", arr);
//	//清空缓冲区
//	while(getchar() != '\n')
//	{
//		;
//	}
//
//	printf("请确认(Y/N):>");
//	ch = getchar();
//	if(ch == 'Y')
//	{
//		printf("正确\n");
//	}
//	else
//	{
//		printf("错误\n");
//	}
//	system("pause");
//	return 0;
//}
//#include <windows.h>
//
//int main()
//{
//	while(1)
//	{
//		printf("hehe");
//		Sleep(1000);
//	}
//	return 0;
//}
//
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);//7
//	//上部分
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
//	//下部分
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
//
//
//#include <math.h>
//
//int main()
//{
//	int n = 0;
//	//123
//	//
//	for(n=1; n<=1000000; n++)
//	{
//		//判断n是否为水仙花数
//		int count = 1;
//		int sum = 0;
//		int tmp = n;
//		//统计n的位数
//		while(tmp/10)
//		{
//			count++;
//			tmp = tmp/10;
//		}
//		//
//		tmp = n;
//		while(tmp)
//		{
//			sum += pow(tmp%10, count);
//			tmp /= 10;
//		}
//		if(n == sum)
//		{
//			printf("%d ", n);
//		}
//	}
//	system("pause");
//	return 0;
//}
//

//ptr
// int main()
// {
// 	int a = 0;
// 	int n = 0;
// 	int i = 0;
// 	int sum = 0;
// 	int ret = 0;
// 
// 	scanf("%d%d", &a, &n);//2 5
// 	for(i=0; i<n; i++)
// 	{
// 		 ret = ret*10+a;
// 		 sum += ret;
// 	}
// 	printf("%d\n", sum);
// 	system("pause");
// 	return 0;
// }