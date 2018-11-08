#define _CRT_SECURE_NO_WARNINGS 1


//主函数-程序的入口
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	printf("%d\n", strlen("c:\test\528\test.c"));//13 17 15 18
	//???

	//printf("(are you ok\?\?)");//??)-]--三字母词--<C和指针>
	//printf("%c\n", '\'');
	//printf("%s\n", "\"");
	//printf("c:\\test\\52\\test.c");
	//printf("\a\a\a\a\a\a\a\a");
	//char arr[20];//err
	//printf("%s\n", arr);

	//"abc";
	//char arr[] = {'h','e','l','l','o',' ','b','i','t','\0'};
	//printf("hello bit\n");//1
	//printf("%s\n", "hello bit");//2
	//printf("%s\n", arr);//
	//'\0';//转义字符
	//'a';
	//'@';

	//char arr[] = "abc";//'\0'
	//ASCII编码
	//
	return 0;
}

//枚举关键字
//enum  Sex
//{
//	//枚举常量
//	MALE=5,//0
//	FEMALE,//1
//	SECRET//2
//};
//
//int main()
//{
//	//
//	//枚举常量
//	//
//	//enum Sex sex = MALE;//性别变量
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//
//	return 0;
//}
//#define MAX 1000
// 
// int main()
// {
// 
// 	//#define定义的标识符常量
// 	int a = MAX;
// 	int arr[MAX] = {0};
// 	printf("%d\n", a);
// 
// 	//const修饰的常变量
// 	//const int num = 0;
// 	//num = 20;
// 	//printf("num = %d\n", num);
// 	//const int n = 10;
// 	//int arr[n] = {0};
// 
// 	//字面常量
// 	//3.14;
// 	//200;
// 	//"abcdef";//
// 	//int age = 10;
// 	//age = 20;//
// 	return 0;
// }
//
//int  main()
//{
//	int age = 20;
//	{
//		int age = 10;
//	}
//	printf("age = %d\n", age);
//	return 0;
//}

//
////变量的声明
//extern int age;
//
//int main()
//{
//	printf("age = %d\n", age);
//	//int age = 10;
//	//{
//	//	int age = 0;
//	//	printf("age = %d\n", age);
//	//}
//	//printf("%d\n", age);//10
//	return 0;
//}

// 
// int main()
// {
// 	int num1 = 0;
// 	int num2 = 0;
// 	int sum = 0;
// 	scanf("%d%d", &num1, &num2);
// 	sum = num1+num2;
// 	printf("sum = %d\n", sum);
// 	return 0;
// }
//代码外部定义的变量-全局变量
//int age = 2018;
//
//int main()
//{
//	//{}--代码
//	//在代码块内存定义的变量-局部变量
//	int age = 20;
//	{
//		short age = 30;
//		printf("%d\n", age);//30
//	}
//	printf("%d\n", age);//20
//	//类型  变量名 = 0;
//	//char c = 'w';
//
//	return 0;
//}
//
//int main()
//{
//	//printf("%d\n", 100);
//	//printf("%c\n", 100);
//	//sizeof的单位是字节
//	//printf("%d\n", sizeof(char));//1 
//	//printf("%d\n", sizeof(short));//2
//	////[16]
//	////[0111111111111111]
//	////
//	//printf("%d\n", sizeof(int));//4
//	//printf("%d\n", sizeof(long));//4(32位)/8(64位)
//	//printf("%d\n", sizeof(long long));//8
//	//printf("%d\n", sizeof(float));//4 
//	//printf("%d\n", sizeof(double));//8
//
//	short age = 20;
//	float weight = 55.6f;//double
//	char ch = 0;
//
//	return 0;
//}

//
//int main()
//{
//
//	//char arr[10] = {0};
//	//scanf("%s", arr);
//	////strcpy
//	//printf("%s\n", arr);
//	//
//	//printf("hehe\n");//printf-库函数
//	//printf("hehe\n");//printf-库函数
//	//printf("hehe\n");//printf-库函数
//	//printf("hehe\n");//printf-库函数
//	//printf("hehe\n");//printf-库函数
//	//printf("hehe\n");//printf-库函数
//	//1.
//	system("pause");//
//	return 0;
//}
//
