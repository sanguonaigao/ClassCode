#define _CRT_SECURE_NO_WARNINGS 1

//包含
#include <stdio.h>
#include <stdlib.h>

//scanf_s
//VS

//main是主函数
//程序的入口
//int main()
//{
//	//打印
//	printf("hello bit\n");
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	printf("age = %d\n", age);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int age = 0;
//	//printf("%d\n", sizeof(age));//4字节
//	printf("%d\n", sizeof(int));//4字节
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(long));//4-32位程序， //8-64位程序
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//
//	//short int age;//2
//	//2^16
//	//4 32
//	//00000000000000000000000000000000
//	//....
//	//11111111111111111111111111111111
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int num = 20;
//	char ch = 'w';
//	float weight = 50.2;
//	//类型  变量名;
//
//	return 0;
//}


//
//int a = 20;//全局变量
//
//int main()
//{
//	{
//		int a = 10;//局部变量
//	}
//	//代码块--{}
//	printf("a = %d\n", a);//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//
//	scanf("%d %d", &num1, &num2);
//	sum = num1+num2;
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
//

//声明a变量
//extern int a;
//
//void test()
//{
//	printf("test:%d\n", a);
//}
//int main()
//{
//	printf("a = %d\n", a);//
//	{
//		int a = 10;
//		printf("a = %d\n", a);//
//	}
//	
//	test();
//	system("pause");
//	return 0;
//}
//#define MAX 10
////枚举
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	//printf("%d\n", MAX);
//	//int arr[MAX] = {0};
//	enum Sex sex = SECRET;
//	//MALE = 30;
//
//	//int age;
//	//3;
//	//3.14;
//	//1. 字面常量
//	//2. const修饰的常变量
//	//3. define定义的标识符常量
//	//4. 枚举常量
//
//	/*const int num = 10;
//	printf("%d\n", num);
//	num = 20;
//	printf("%d\n", num);*/
//	//const int n = 10;
//	//int arr[n] = {0};
//
//	system("pause");
//	return 0;
//}

int main()
{
	//printf("%s\n", "a");
	//'a'-97
	//'b'-98
	//ASCII 
	//'\0'-0
// 	char arr1[] = "bit";//\0
// 	char arr2[] = {'b', 'i', 't', '\0'};
// 	printf("%s\n", arr1);//bit
// 	printf("%s\n", arr2);//bit
	//printf("%c\n", '\'');
	//printf("%s\n", "\"");
	//printf("%s\n", "c:\\test\\code\\test.c");
	//printf("\a\a\a\a\a\a\a\a\a");
	system("pause");
	return 0;
}