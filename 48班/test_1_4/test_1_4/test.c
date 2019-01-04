#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//
//int main()
//{
//	//100-200
//	int i = 0;
//	int count = 0;
//	for(i=100; i<=200; i++)
//	{
//		//判断i是否为素数？
//		//2->i-1
//		int j = 0;
//		//i = a*b;
//
//		for(j=2; j<=sqrt(i); j++)
//		{
//			if(i%j == 0)
//			{
//				break;//不是素数
//			}
//		}
//		if(j>sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}
//

//
//int main()
//{
//	//100-200
//	int i = 0;
//	int count = 0;
//	for(i=101; i<=200; i+=2)
//	{
//		//判断i是否为素数？
//		//2->i-1
//		int j = 0;
//		//i = a*b;
//		for(j=2; j<=sqrt(i); j++)
//		{
//			if(i%j == 0)
//			{
//				break;//不是素数
//			}
//		}
//		if(j>sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}
//


#include <stdio.h>
#include <stdlib.h>


//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//....
//..
//9*1=9 9*2=18 ...   9*9=81
//
//int main()
//{
//	int i = 0;
//	for(i=1; i<=9; i++)
//	{
//		//打印一行
//		int j = 0;
//		for(j=1; j<=i; j++)
//		{
//			//打印一项
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for(year=1000; year<=2000; year++)
//	{
//		//判断year是否为闰年
//		if(year%4==0)
//		{
//			if(year%100!=0)
//			{
//				count++;
//				printf("%d ", year);
//			}
//		}
//		
//		if(year%400==0)
//		{
//			count++;
//			printf("%d ", year);
//		}
//		
//	}
//	printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}




//
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for(year=1000; year<=2000; year++)
//	{
//		//判断year是否为闰年
//		if(((year%4==0)&&(year%100!=0))||(year%400==0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//
//	}
//	printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}
#include <string.h>
//
//int main()
//{
//	//char arr[] = {'a', '\0', 'b', 'c', '\0'};
//	//char arr[] = "abc";
//	//printf("%s\n", arr);//
//	//printf("%d\n", strlen("abc"));//3
//	//
//	//123
//	//1*10^2 + 2*10^1 + 3*10^0
//	//32
//	//3*8^1 + 2*8^0
//	//C++的注释风格
//	/*
//	C的注释风格
//	printf("%d\n", strlen("c:\test\x032\test.c"));
//	printf("%c\n", '\x032');
//	*/
//	//13 12 15 
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("请选择(选择1， 好好学习，选择0，不学习):>");
//	scanf("%d", &input);
//	if(input == 1)
//	{
//		printf("好offer\n");
//	}
//	else if(input == 0)
//	{
//		printf("卖红薯\n");
//	}
//	//switch() case
//	system("pause");
//	return 0;
//}
//

//
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while(line<20000)
//	{
//		printf("敲代码：%d\n", line);
//		line++;
//	}
//	if(line>=20000)
//	{
//		printf("好offer\n");
//	}
//	system("pause");
//	return 0;
//}

//
//5000
//
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	int x = 10;
//	int y = 30;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &a, &b);
//	//sum = a+b;//加法
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	sum = Add(x, y);
//	printf("sum = %d\n", sum);
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int arr[20] = {1};
//	int i = 0;
//	for(i=0; i<20; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	//0
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 1;
//	int b = a<<3;
//	//二进制位
//	//00000000000000000000000000000001
//
//	printf("%d\n", b);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	printf("%d %d\n", a, b);
//	/*c = a;
//	a = b;
//	b = c;*/
//	/*a = a+b;
//	b = a-b;
//	a = a-b;*/
//	//二进制位异（或操作符）
//	//01010-b
//	//10100-a
//	//11110
//
//	a = a^b;
//	b = a^b;
//	a = a^b;
//
//	printf("%d %d\n", a, b);
//
//	system("pause");
//	return 0;
//}