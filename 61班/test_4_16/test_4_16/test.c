#define _CRT_SECURE_NO_WARNINGS 1


//标准输入输出头文件
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//主函数-程序的入口
//int main()
//{
//	//打印函数-输出函数-库函数
//	printf("hello world\n");
//	Sleep(1000);
//	system("cls");
//	printf("hello bit\n");
//	//暂停
//	system("pause");
//	return 0;
////}
//
//int main()
//{
//	printf("%d\n", sizeof(char));//4 2 1 
//	printf("%d\n", sizeof(short));//1 2 
//	printf("%d\n", sizeof(int));//4 2 
//	printf("%d\n", sizeof(long));//4 8
//	printf("%d\n", sizeof(long long));//16
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	//short age = 10;
//	//float weight = 55.5;
//	/*int num = 0;
//	double d = 0.0;
//*/
//	return 0;
//}
//
//int a = 20;//全局变量
//
//int main()
//{
//	int a = 10;//局部变量
//	printf("%d\n", a);
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1+num2;
//	printf("sum = %d\n", sum);
//	system("pause");
//	return 0;
//}
//
//int a = 10;
//
//int main()
//{
//	//{}-代码块
//	/*{
//	int a = 10;
//	printf("a = %d\n", a);
//	}*/
//
//	system("pause");
//	return 0;
//}

//声明外部符号
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	system("pause");
//	return 0;
//}


//生命周期
//
//int main()
//{
//	{
//		int a = 10;
//	}
//	return 0;
//}
//
//int main()
//{
//	//字面常量
//	//3;
//	//3.14;
//	//'a';
//	//"abcdef";
//	//const修饰的常变量
//	//const int num = 10;
//	//num = 20;
//	//printf("num = %d\n", num);//
//	//const int n = 10;
//	//int arr[n] = {0};//err
//
//	system("pause");
//	return 0;
//}

//#define定义的标识符常量
//#define MAX 100
//
//int main()
//{
//	int a = MAX;
//	MAX = 200;
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}
//
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	//enum Sex s = FEMALE;//
//
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	system("pause");
//	return 0;
//}
#include <string.h>

int main()
{
	//ASCII编码
	//ASCII码值
	//ASCII码表
	//@#$%!erabc
	//A-65
	//a-97
	//'\0'-0
	//printf("hehe\n");
	//char arr1[] = "bit";
	//char arr2[] = {'b', 'i', 't','\0'};
	//printf("%s\n", "bit");//bit
	//printf("%s\n", arr1); //bit
	//printf("%s\n", arr2); //bit
	//printf("abc\n");
	//printf("%s\n", "c:\\test\\test.c");
	//printf("%c\n", '\'');
	//printf("%s\n", "\"");
	//printf("\a\a\a\a\a\a\a");
	//printf("%d\n", strlen("abc"));//string length
	printf("%d\n", strlen("c:\test\328\test.c"));
	system("pause");
	return 0;
}