#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//试除法
//	for(i=101; i<=200; i+=2)
//	{
//		//判断i是否为素数
//		int j = 0;
//		for(j=2; j<=sqrt(i); j++)
//		{
//			if(i%j == 0)
//			{
//				break;
//			}
//		}
//		if(j>sqrt(i))
//		{
//			printf("%d ", i);//素数
//			count++;
//		}
//	}
//	//
//	printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}

//
//<素数求解的n种境界>
//

//
// 1*1=1
// 2*1=2 2*2=4
// 3*1=3 3*2=6 3*3=9
// ...
//
//int main()
//{
//	//
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
//	int year=0;
//	int count = 0;
//	for(year=1000; year<=2000; year++)
//	{
//		//判断闰年
//
//		if(((year%4==0)&&(year%100!=0))||(year%400==0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//		/*if(year%4==0)
//		{
//			if(year%100 != 0)
//			{
//				printf("%d ", year);
//				count++;
//			}
//		}
//		if(year%400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}*/
//	}
//	printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}

#include <string.h>
//
//int main()
//{
//	//printf("%d\n", strlen("abc"));
//	//printf("%d\n", strlen("c:\test\328\test.c"));
//	//printf("%c\n", '\x32');
//	//
//	//070
//	//
//	//A a # $ %
//	//65 97 ...
//	//
//	//ASCII编码
//	//ASCII码表
//	//ASCII码值
//	//
//	system("pause");
//	return 0;
//}
//
//
//int main()
//{
//	//C++的注释风格
//	//创建一个整型变量
//	//int a = 10;
//
//	/*
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//
//	}
//	*/
//	return 0;
//}
//
//int main()
//{
//	int input = 0;
//	printf("加入比特!\n");
//	printf("你要敲代码吗？(1/0)");
//	scanf("%d", &input);
//	if(input == 1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while(line<=20000)
//	{
//		printf("敲代码\n");
//		line++;
//	}
//	if(line>20000)
//	{
//		printf("好offer\n");
//	}
//	system("pause");
//	return 0;
//}

//
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x+y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	//sum = num1 + num2;
//	sum = Add(num1, num2);
//	printf("sum = %d\n", sum);
//
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//// 	int a = 1;
//// 	int b = 2;
//// 	int c = 3;
//	int arr[12] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	//求数组的元素个数
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	while(i<sz)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	//printf("%d\n", arr[4]);
//	//char ch[20] = {'a', 'b', 'c'};//char ch[20] = "abc";
//	system("pause");
//	return 0;
//}
//
//int  main()
//{
//	//double a = 5/2.0;
//	//printf("%lf\n", a);
//	//printf("%d\n", 7%2);
//	//>> <<
//	//<< 左移操作符-二进制位
//	int a = 15;
//	int b = a<<1;
//	//
//	//原码-反码-补码
//	//
//	//00000000000000000000000000001111
//	//
//	printf("a = %d\n", a);//15
//	printf("b = %d\n", b);//30
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = -1;
//	int b = a<<1;
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	//原码
//	//10000000000000000000000000000001
//	//反码
//	//11111111111111111111111111111110
//	//补码
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//11111111111111111111111111111101
//	//10000000000000000000000000000010
//	//-2
//	system("pause");
//	return 0;
//}

//>>
//算术右移
//逻辑右移
//
// int main()
// {
// 	int a = -1;
// 	int b = a>>1;
// 	//11111111111111111111111111111111
// 	//11111111111111111111111111111111
// 
// 	//00000000000000000000000000001010
// 	//00000000000000000000000000000101
// 	//
// 	printf("%d\n", b);
// 	system("pause");
// 	return 0;
// }

//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//011
//	//001
//	//001-1
//	int c = a&1;
//
//	//int c = a&b;//按（二进制）位与
//	//int c = a|b;//按位或
//	//int c = a^b;//按位异或-相同为0，相异为1
//	//011
//	//101
//	//110
//	//
//	printf("%d\n", c);
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	a = 20;//赋值
//	a = a+5;
//	a += 5;
//
//	a = a>>1;
//	a >>= 1;//复合赋值符
//	return 0;
//}
//
//int main()
//{
//	//printf("%d\n", !0);
//	int a = 10;
//	int arr[5] = {0};
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(a));
//
//	printf("%d\n", sizeof(arr));//
//	printf("%d\n", sizeof(int [5]));
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	//00000000000000000000000000011010
//	//11111111111111111111111111101111
//	//00000000000000000000000000010000
//	//
//	//int a = 0;
//	//printf("%d\n", ~a);
//	//~ 按位取反
//	//
//
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//// 	int a = 10;
//// 	//int b = a++;//后置++，先使用，再++
//// 	//int b = ++a;  //后置++，先++，后使用
//// 	int b = --a;
//// 	printf("a = %d\n", a);//
//// 	printf("b = %d\n", b);//
//
//	int a = 1;
//	int c = (++a)+(++a)+(++a);
//	printf("c = %d\n", c);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = (int)3.14;
//	//int a = int(3.14);//err
//	printf("a = %d\n", a);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	//int a = 0;
//	//int b = 20;
//	//int c = a&&b;
//	//int c = a||b;
//	//printf("%d\n", c);
//
//	/*int a = 10;
//	int b = 20;
//	int max = 0;
//	if(a>b)
//		max = a;
//	else
//		max = b;
//
//	max = (a>b ? a : b);*/
//
//	int a = 10;
//	int b = 2;
//	int c = -5;
//	int d = (a=b+4, b=a-10, c=b+3);
//	printf("%d\n", d);
//	system("pause");
//	return 0;
//}
//
//void test()
//{
//	printd("hehe\n");
//}
//
//int main()
//{
//	//[]-下标引用操作符
//	//()-函数调用操作符
//	//test();
//	//Add(1, 2);
//	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//arr[5];//a+b;
//	return 0;
//}
int main()
{
	//{
		//auto int a = 0;
	//}
	register int a = 10;

	return 0;
}

