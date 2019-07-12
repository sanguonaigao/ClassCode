#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//1. 给定两个整形变量的值，将两个值的内容进行交换。
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	printf("a = %d b = %d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("a = %d b = %d\n", a, b);
//	system("pause");
//	return 0;
//}

//	2. 不允许创建临时变量，交换两个数的内容（附加题）
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	a = a+b;
//	b = a-b;
//	a = a-b;
//	printf("a = %d b = %d\n", a, b);
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a = %d b = %d\n", a, b);
//	a = a^b;//异或-按二进制位异或
//	b = a^b;
//	a = a^b;
//	//011-b
//	//101-a
//	//110
//
//	printf("a = %d b = %d\n", a, b);
//
//	system("pause");
//	return 0;
//}

//	3.求10个整数中最大值。
//int main()
//{
//	int arr[] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
//	int max = arr[0];
//	int i = 0;
//	for(i=1; i<10; i++)
//	{
//		if(arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//
//	system("pause");
//	return 0;
//}

//	4.将三个数按从大到小输出。
//int main()
//{
//	int a = 1;
//	int b = 3;
//	int c = 2;
//
//	if(a<b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if(a<c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if(b<c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	printf("%d %d %d\n", a, b, c);
//
//	system("pause");
//	return 0;
//}

//	5.求两个数的最大公约数。
//int main()
//{
//	int m = 18;
//	int n = 24;
//	int tmp = 0;
//
//	while(tmp=m%n)
//	{
//		m = n;
//		n = tmp;
//	}
//	printf("%d\n", n);
//	system("pause");
//
//	return 0;
//}
//
//int main()
//{
//	int input = 0;
//	printf("加入比特.\n");
//	printf("你要好好学习吗？\n");
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
//	while(line<20000)
//	{
//		printf("敲代码\n");
//		line++;
//	}
//	printf("恭喜你，成为大牛\n");
//	system("pause");
//	return 0;
//}
//
//
//f(x,y) = x+y
//f(x) = 2*x+4

//函数
//
//int Add(int x, int y)
//{
//	int z = x+y;
//	return z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 20;
//	int sum = 0;
//
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &a, &b);
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	//sum = c+d;
//	//sum = Add(c, d);
//	system("pause");
//	return 0;
//}
//

//数组
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5};
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	//short arr2[5] = {0};
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 15;
//	//>>右移操作符
//	//右移的二进制位
//	//15
//	//00000000000000000000000000001111
//	//
//	int b = a>>1;
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//
//	system("pause");
//	return 0;
//}

//位操作符
//

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a&b;//按（二进制）位与
//	//011
//	//101
//	//001
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a|b;//按（二进制）位或
//	//011
//	//101
//	//111
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}
// 
// int main()
// {
// 	int a = 10;
// 	a = a+3;
// 	a += 3;
// 	a += 1;
// 	a++;
// 	printf("a = %d\n", a);
// 	system("pause");
// 	return 0;
// }
//
//int main()
//{
//	int a = 1;
//	//printf("%d\n", !a);
//	if(!a)
//		printf("hehe\n");
//	system("pause");
//
//	return 0;
//}
//原码
//反码
//补码

//int a = 1;
//00000000000000000000000000000001
//
//int a = -1;
//10000000000000000000000000000001-原码
//11111111111111111111111111111110-反码
//11111111111111111111111111111111-补码
//
//int main()
//{
//	int a = 0;
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111-补码
//	//11111111111111111111111111111110-反码
//	//10000000000000000000000000000001-原码
//	//
//	printf("%d\n", ~a);
//	//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++，先使用，再++
//	//int b = ++a;//前置++，先++，后使用
//	//int b = a--;
//	int b = --a;
//	printf("a = %d b = %d\n", a, b);//
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 1;
//	int b = (++a)+(++a)+(++a);
//	printf("%d\n", b);
//	//11 9 9 12 10 6 6 10
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = (int)3.14;
//	//int a = int(3.14);//err
//
//	return 0;
//}

//// int main()
//{
//	int a = 1;
//	int b = 2;
//	printf("%d\n", a&b);//0-按位与
//	printf("%d\n", a && b);//1-逻辑与
//
//	printf("%d\n", a|b);//3--按位或
//	printf("%d\n", a || b);//1--逻辑或
//
//	system("pause");
//	return 0;
//}
// 
// int main()
// {
// 	int a = 10;
// 	int b = 20;
// 	int max = 0;
// 	int arr[10] = {0};
// 	arr[5] = 5;
// 
// 	if(a>b)
// 		max = a;
// 	else
// 		max = b;
// 	printf("max = %d\n", max);
// 	max = 0;
// 
// 	max = a>b ? a:b;
// 	printf("max = %d\n", max);
// 	system("pause");
// 	return 0;
// }

//void test()
//{
//	printf("hello bit\n");
//}
//
//int main()
//{
//	test();//函数调用操作符
//
//	return 0;
//}

//关键字

int main()
{
	auto int a = 10;
	register int b = 20;//建议 编译器

	return 0;
}