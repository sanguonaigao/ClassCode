#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=100; i<=200; i++)
//	{
//		//printf("%d ", i);
//		//先判断i是否为素数
//		//i    2-> i-1
//		int j = 0;
//		for(j=2; j<i; j++)
//		{
//			if(i%j == 0)
//			{
//				break;
//			}
//		}
//		//1,2
//		if(i==j)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=100; i<=200; i++)
//	{
//		//printf("%d ", i);
//		//先判断i是否为素数
//		//i    2-> i-1
//		int flag = 1;//是素数
//		int j = 0;
//		for(j=2; j<i; j++)
//		{
//			if(i%j == 0)
//			{
//				flag = 0;//不是素数
//				break;
//			}
//		}
//		//1,2
//		if(flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=100; i<=200; i++)
//	{
//		int flag = 1;//是素数
//		int j = 0;
//		for(j=2; j<=i/2; j++)
//		{
//			if(i%j == 0)
//			{
//				flag = 0;//不是素数
//				break;
//			}
//		}
//		//1,2
//		if(flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=101; i<=200; i+=2)
//	{
//		int flag = 1;//是素数
//		int j = 0;
//		for(j=2; j<=sqrt(i); j++)
//		{
//			if(i%j == 0)
//			{
//				flag = 0;//不是素数
//				break;
//			}
//		}
//		//1,2
//		if(flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...
//
//int main()
//{
//	int i=0;
//	for(i=1; i<=9; i++)
//	{
//		//打印一行
//		int j = 0;
//		for(j=1; j<=i; j++)
//			printf("%d*%d=%2d ", i, j, i*j);
//
//		printf("\n");
//	}
//	return 0;
//}

//
//int main()
//{
//	int year=0;
//	int count = 0;
//
//	for(year=1000; year<=2000; year++)
//	{
//		//printf("%d ", year);
//		//判断year闰年
//		//1. 能被4整除并且不能被100 整除
//		//2. 被400整除
//		if(((year%4==0)&&(year%100!=0))||(year%400==0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//		/*if(year%4==0)
//		{
//		if(year%100 != 0)
//		{
//		printf("%d ", year);
//		count++;
//		}
//		}
//		if(year % 400==0)
//		{
//		printf("%d ", year);
//		count++;
//		}*/
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}



