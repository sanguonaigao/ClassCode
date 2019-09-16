#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//
//int main()
//{
//	//字符串
//	//'a'-97
//	//'\0'-0
//	//0
//	//'0'-48
//	//'\0'-0
//	char arr1[] = "bit";
//	char arr2[] = {'b', 'i', 't', '0'};
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//
//
//	//printf("%s\n", arr1);//bit
//	//printf("%s\n", arr2);//bit
//
//	return 0;
//}
//
//int main()
//{
//	printf("c:\test\65class\test.c");
//
//	return 0;
//}

//int main()
//{
//	//printf("%c\n", '\'');
//	//printf("%s\n", "\"");
//	//printf("c:\test\\65class\\test.c");
//	//13 27 15 16 14
//	//printf("%d\n", strlen("c:\test\328\test.c"));
//	//printf("%c\n", '\x32');
//	//printf("\a\a\a\a\a\a\a");
//	return 0;
//}

//注释
/*
int main()
{
	//创建整型变量并初始化为10
	//int a = 10;
	//C++
	
	int b = 20;

	return 0;
}
*/
//
//int main()
//{
//	int input = 0;
//
//	printf("加入比特!\n");
//	printf("你要好好学习吗?");
//	scanf("%d", &input);
//	if(input == 1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//
//	//switch()
//	return 0;
//}
//
//int main()
//{
//	int line = 0;
//	printf("加入比特!\n");
//
//	while(line<20000)
//	{
//		printf("写代码:%d\n", line);
//		line++;
//	}
//	if(line>=20000)
//	{
//		printf("好offer\n");
//	}
//
//	return 0;
//}

//f(x, y) = 2*x+y;
//
//int Add(int x, int y)
//{
//	int z = x+y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	//sum = num1 + num2;
//	sum = Add(num1, num2);
//
//	printf("%d\n", sum);
//	return 0;
//}
//
//int main()
//{
//	//数组-10个元素-int
//	int arr[20] = {1,2,3,4,5,6,7,8,9,10};//
//	//下标
//	//0
//	//printf("%d\n", arr[5]);
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	while(i<sz)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	//int arr2[] = {1,2,3,4,5,6,7,8,9,10};
//
//	return 0;
//}
// 
// int main()
// {
// 	//float a = 5/2.0;
// 	//printf("%f\n", a);
// 	//int a = 7%2;
// 	//printf("%d\n", a);
// 	return 0;
// }

//
//int main()
//{
//	int a = 12;
//	//原码-反码-补码
//	//10000000000000000000000000000001-原码
//	//11111111111111111111111111111110-反码
//	//11111111111111111111111111111111-补码
//
//	int b = a<<1;
//
//	//int b = a>>1;
//	//>>-- 移动的是二进制位
//	//00000000000000000000000000001100
//	//00000000000000000000000000011000
//	printf("%d\n", b);
//	printf("%d\n", a);
//
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	//int c = a&b;//按位与-二进制位
//	//int c = a|b;//按位或-二进制位
//	int c = a^b;//按位异或-二进制位
//	printf("c = %d\n", c);
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000110
//	//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	a = 20;//赋值
//	a = a+1;//1
//	a += 1; //2
//	return 0;
//}
//
//int main()
//{
//	int flag = 0;
//	printf("%d\n", !flag);
//
//	/*if(!flag)
//	{
//	printf("hehe\n");
//	}
//	if(flag)
//	{
//	printf("hehe\n");
//	}*/
//	return 0;
//}
// 
// int main()
// {
// 	int a = 10;
// 	printf("%p\n", &a);
// 	printf("%x\n", &a);
// 
// 
// 	return 0;
// }

//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(a));
//
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
//
//	printf("%d\n", ~a);
//	//1 65536 
//	return 0;
//}

//
//int main()
//{
//	int a = 1;
//	//int b = a++;//后置++，先使用，再++
//	//int b = ++a;//前置++, 先++，后使用
//	//int b = a--;
//	//int b = --a;
//	int b = (++a)+(++a)+(++a);
//
//	printf("b = %d\n", b);
//
//	//printf("a = %d b = %d\n", a, b);
//
//	//11 10
//	return 0;
//}
//
//int main()
//{
//	int i = 100;
//	int count = 0;
//	while(i<=200)
//	{
//		//printf("%d ", i);
//		//判断i是否为素数
//		//2->i-1
//		int flag = 0;
//		int j = 2;
//		while(j<i)
//		{
//			if(i%j == 0)
//			{
//				flag = 1;
//				break;
//			}
//			j++;
//		}
//		//..
//		if(flag == 0)
//		{
//			count++;
//			printf("%d ", i);
//		}
//		i++;
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

#include <math.h>
//
//int main()
//{
//	int i = 101;
//	int count = 0;
//	while(i<=200)
//	{
//		//printf("%d ", i);
//		//判断i是否为素数
//		//2->i-1
//		int flag = 0;
//		int j = 2;
//		while(j<=sqrt(i))
//		{
//			if(i%j == 0)
//			{
//				flag = 1;
//				break;
//			}
//			j++;
//		}
//		//..
//		if(flag == 0)
//		{
//			count++;
//			printf("%d ", i);
//		}
//		i+=2;
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
//	int i = 1;
//	while(i<=9)//行数
//	{
//		//一行的打印
//		int j = 1;
//		while(j<=i)
//		{
//			printf("%d*%d=%d ", i, j, i*j);
//			j++;
//		}
//		printf("\n");
//		i++;
//	}
//	return 0;
//}


int main()
{
	int year=1000;

	while(year<=2000)
	{
		//判断year是否为闰年
		if(year%4==0)
		{
			if(year%100!=0)
			{
				printf("%d ", year);
			}
		}
		if(year%400==0)
		{
			printf("%d ", year);
		}
		year++;
	}
	return 0;
}