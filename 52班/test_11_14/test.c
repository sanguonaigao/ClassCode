#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#include <string.h>

int Add(int x, int y)
{
	return x+y;
}

int main()
{
	typedef unsigned int uint;
	unsigned int a;
	uint a;
	//auto int a = 0;
// 	int a = 10;
// 	int b = 20;
// 	int max = 0;
// 	if(a>b)
// 		max = a;
// 	else
// 		max = b;
// 
// 	a>b ? max=a:max=b;//
// 	max = a>b ? a:b;//ok

	//int arr[10] = {0};
	//arr[5] = 5;
	//int a = 10;
	//int b = 20;
	//Add(a, b);







	//int a = 10;
	//int b = 0;
	//int c = a||b;//
	
	//int a = (int)3.14;
	//printf("%d\n", a);
	return 0;
}
// 
// int main()
// {
// 	int a = 1;
// 	int c = (++a)+(++a)+(++a);
// 	printf("c = %d\n", c);
// 	return 0;
// }
// 

//
//int main()
//{
//	int a = 10;
//	int b = a--;
//	//
//	printf("a = %d b = %d\n", a, b);
//	//前置++
//	//先++，后使用
//	//
//	//后置++
//	//先使用，再++
//	//
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001
//	//-1
//
//	int b  = -1;
//	//二进制的补码
//	//原码
//	//10000000000000000000000000000001
//	//反码
//	//11111111111111111111111111111110
//	//补码
//	//11111111111111111111111111111111
//	//
//	printf("%d\n", ~a);
//	//0111111111111111
//
//
//	//int a = 10;
//	//int arr[10];
//	//sizeof(a);//4
//	//sizeof(int);//4
//	//sizeof(arr);//40
//	//int a = 10;
//	//printf("%p\n", &a);
//	//int a = 10;
//	//int b = +a;
//	//printf("%d\n", !0);
//// 	int a = 0;
//// 	a = a+3;
//// 	a += 3;
//
//// 	int a = 3;
//// 	int b = 5;
//// 
//// 	//
//// 	//0000000000000000000000000000011
//// 	//0000000000000000000000000000101
//// 	//0000000000000000000000000000110
//// 	//
//// 	//int c = a&b;//按二进制位与
//// 	//int c = a|b;//按二进制位或
//// 	int c = a^b;//按二进制位异或
//// 	b = 20;
//// 
//// 	printf("%d\n", c);
//// 	//int a = 13;
//	//移（二进制）位操作符
//	//int b = a<<1;
//	//printf("%d\n", b);//26
//	//printf("%d\n", a);//13
//
//	//00000000000000000000000000001101
//	//
//	//
//	//1111
//	//8421
//	//1101
//
//	return 0;
//}
// 
// int main()
// {
// 	printf("%f\n", (float)(1.0/3));
// 	return 0;
// }
// 
// int main()
// {
// 	//1-10
// 	int i = 0;
// 	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
// 	int sz = sizeof(arr)/sizeof(arr[0]);
// 	for(i=0; i<sz; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 	//arr[i];
// 	//float f[5] = {0};
// 
// 	return 0;
// }

// int Add(int x, int y)
// {
// 	int z = x+y;
// 	return z;
// }
// 
// int main()
// {
// 	int a = 10;
// 	int b = 20;
// 	//int c = a+b;
// 	int c = Add(a, b);
// 
// 	printf("c = %d\n", c);
// 	return 0;
// }

// 
// int main()
// {
// 	int line = 0;
// 	printf("加入比特!\n");
// 
// 	while(line<20000)
// 	{
// 		printf("敲代码\n");
// 		line++;
// 	}
// 
// 	if(line == 20000)
// 	{
// 		printf("大牛， 好offer\n");
// 	}
// 	return 0;
// }
// 

// 
// int main()
// {
// 	int input = 0;
// 
// 	printf("加入比特了，你要好好学习吗(1/0)？>:");
// 	//1 0
// 	scanf("%d", &input);
// 	if(input == 1)
// 	{
// 		printf("好offer\n");
// 	}
// 	else if(input == 0)
// 	{
// 		printf("卖红薯\n");
// 	}
// 	return 0;
// }

//int main()
//{
//	//int a = 10;
//	//int b = 20;
//
//	////加法
//	//int c = a+b;
//
//	return 0;
//}
// int main()
// {
// 	printf("%c\n", '\x061');//
// 	//
// 	//52
// 	//42
// 	//
// 	//1234
// 	//4+30+200+1000
// 	//1234
// 	//printf("%d\n", strlen("c:\test\528\test.c"));
// 	//14 12 13 15 11 
// 	return 0;
// }


// int main()
// {
// 	int year = 0;
// 	int count = 0;
// 	for(year=1000; year<=2000; year++)
// 	{
// 		//判断year是否为闰年
// 		if(((year%4==0)&&(year%100!=0))||(year%400==0))
// 		{
// 			count++;
// 			printf("%d ", year);
// 		}
// 		/*if(year%4==0)
// 		{
// 			if(year%100 != 0)
// 			{
// 				printf("%d ", year);
// 			}
// 		}
// 		if(year%400 == 0)
// 		{
// 			printf("%d ", year);
// 		}*/
// 	}
// 	printf("\ncount = %d\n", count);
// 	return 0;
// }

//1*1=1
//2*1=2 2*2=4
//3*1=3 4*2=6 3*3=9
//....

// int main()
// {
// 	int i = 0;
// 	for(i=1; i<=9; i++)
// 	{
// 		//打印一行
// 		int j = 0;
// 		for(j=1; j<=i; j++)
// 		{
// 			printf("%d*%d=%-2d ", i, j, i*j);
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }


//
//<素数求解的n种境界>
//
//1.试除法
// int main()
// {
// 	int i = 0;
// 	int count = 0;
// 
// 	for(i=101; i<=200; i+=2)
// 	{
// 		//判断i是否为素数
// 		//2->i-1
// 		int j = 0;
// 		for(j=2; j<=sqrt(i); j++)
// 		{
// 			if(i%j==0)
// 				break;
// 		}
// 		if(j>sqrt(i))
// 		{
// 			printf("%d ", i);
// 			count++;
// 		}
// 	}
// 	printf("\ncount = %d\n", count);
// 	return 0;
// }


//
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	for(i=100; i<=200; i++)
//	{
//		//判断i是否为素数
//		//2->i-1
//		int j = 0;
//		for(j=2; j<=sqrt(i); j++)
//		{
//			if(i%j==0)
//				break;
//		}
//		if(j>sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	for(i=100; i<=200; i++)
//	{
//		//判断i是否为素数
//		//2->i-1
//		int j = 0;
//		for(j=2; j<=i/2; j++)
//		{
//			if(i%j==0)
//				break;
//		}
//		if(j>i/2)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	for(i=100; i<=200; i++)
//	{
//		//判断i是否为素数
//		//2->i-1
//		int j = 0;
//		for(j=2; j<=i-1; j++)
//		{
//			if(i%j==0)
//				break;
//		}
//		if(j>i-1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}