#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a = 10;
	int b = 20;
	//数组
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	//char arr2[5] = {0};
	//printf("%d\n", arr[4]);
	//0-9
	int i = 0;
	while(i<10)
	{
		printf("%d ", arr[i]);
		i++;
	}
	system("pause");
	return 0;
}

//f(x) = 2*x+1;
//f(x, y) = x + y;
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
//	int a = 10;
//	int b = 20;
//
//	scanf("%d%d", &num1, &num2);
//	//sum = num1+num2;
//	sum = Add(num1, num2);
//	printf("%d\n", sum);
//
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
//// 
// int main()
// {
// 	int input = 0;
// 	printf("加入比特，你要好好学习吗？\n");
// 	scanf("%d", &input);
// 	if(1 == input)
// 	{
// 		printf("好offer\n");
// 	}
// 	else
// 	{
// 		printf("卖红薯\n");
// 	}
// 	system("pause");
// 	return 0;
// }

//int main()
//{
//	//int a = 10;//C++注释风格
//	/*
//	int b = 10;
//	int c = 30;
//	*///C语言的注释风格
//
//	return 0;
//}
//
//int main()
//{
//	int line = 0;
//
//	while(line<=20000)
//	{
//		printf("好好敲代码\n");
//		line++;
//	}
//	if(line>20000)
//		printf("好offer\n");
//
//	system("pause");
//	return 0;
//}
//

//
//int main()
//{
//	printf("%d\n", sizeof(long));
//	//printf("%d\n", strlen("abcdef"));//6
//	//printf("%d\n", strlen("c:\test\328\test.c"));
//// 	printf("%c\n", '\061');
//// 	printf("%c\n", '1');
//// 	printf("%c\n", '\71');
//	//printf("%c\n", '\x061');
//
//	//
//	//QW@#$
//	//a-97
//	//A-65
//	//..
//	//ASCII
//	//
//	//123
//	//061-49
//	//48+1=49
//	//
//	//printf("\a\a\a\a\a\a\a\a");
//	//"(are you ok??)"
//	//printf("%s\n", "(are you ok??)");
//	//printf("%c\n", '\'');
//	//printf("%s\n", "\"");
//
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	//转义字符
//	//printf("c:\\code\\test.c");
//
//	system("pause");
//	return 0;
//}

// 
// int main()
// {
// 	char arr1[] = "abcdef";//    \0
// 	char arr2[] = {'a', 'b', 'c', 'd', 'e', 'f'};
// 	//int len = strlen("abcdef");
// 	int len = strlen(arr2);
// 	printf("%d\n", len);//string length
// 	//printf("%s\n", "abcdef");//abcdef
// 	//printf("%s\n", arr1);//abcdef
// 	//printf("%s\n", arr2);
// 	//a
// 	//b
// 	//c
// 
// 	system("pause");
// 	return 0;
// }
// 
//枚举

//enum--枚举关键字
//struct --结构
//
//enum Sex
//{
//	MALE,//枚举的可能取值-枚举常量
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	//enum Sex s = FEMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	system("pause");
//	return 0;
//}

// 
// #define MAX 1000
// 
// int main()
// {
// 	int num = MAX;
// 	MAX = 2000;
// 	printf("%d\n", num);
// 	system("pause");
// 	return 0;
// }

//
//int main()
//{
//	const int num = 10;
//	//num = 20;
//	//printf("%d\n", num);
//	int n = 10;
//	int arr[num] = {0};
//
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	3.14;
//	{
//		int a = 10;
//		printf("a = %d\n", a);
//	}
//	printf("a = %d\n", a);
//
//	return 0;
//}
//
//notepad++
//编辑器
//
//
//#include <stdio.h>
//#include <stdlib.h>
//
//extern int g_val;//声明外部符号g_val
//
//int main()
//{
//	printf("g_val = %d\n", g_val);//2019
//	system("pause");
//	return 0;
//}
//int a = 10;
//
//void test()
//{
//	printf("a = %d\n", a);	
//}
//
//int main()
//{
//	printf("a = %d\n", a);
//	{
//		printf("a = %d\n", a);
//	}
//	printf("a = %d\n", a);
//	test();
//	system("pause");
//	return 0;
//}
//int main()
//{
//	{
//		int a = 10;
//		printf("a = %d\n", a);//
//	}
//	printf("a = %d\n", a);//
//
//	system("pause");
//	return 0;
//}
//
//Dev C++
//
//gcc 
//
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//
//	scanf("%d%d", &num1, &num2);
//	sum = num1+num2;
//	printf("sum = %d\n", sum);
//	system("pause");
//	return 0;
//}

//变量
//常量
//
//int num = 20;//全局变量
////{}-代码块
//int main()
//{
//	//int num = 10;//局部变量
//	printf("%d\n", num);//??? 20 10
//	system("pause");
//	return 0;
//}

// 
// int main()
// {
// 	float weight = 0.0;
// 	short age = 20;
// 	char ch = 'w';
// 	return 0;
// }

//
//int main()
//{
//	//char short int long long long float double
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//8 4
//	printf("%d\n", sizeof(long long));//16 8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	printf("%d\n", sizeof(long double));//8
//
//	system("pause");
//	return 0;
//}

//vs2010
//dev c++
//linux gcc
//
//int main()
//{
//	int num = 0;
//	//输入函数
//	scanf("%d", &num);
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}


//Fn
//主函数-程序的入口
//
//int main()
//{
//	//输出函数
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//
//	//暂停
//	system("pause");
//	return 0;
//}
//

