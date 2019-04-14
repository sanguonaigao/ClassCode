#define _CRT_SECURE_NO_WARNINGS 1
//
//typedef struct Stu
//{
//	char name[20];
//	int age;
//}Stu;
//
//typedef unsigned int uint;
//
//int main()
//{
//	int a = 0;
//	printf("a = %d\n", a);
//// 
//// 	unsigned int num1 = 10;
//// 	uint num2 = 20;
//// 	Stu s = {0};
//
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>

//1. static修饰局部变量
// 改变了局部变量的生命周期
//2. static修饰全局变量
// 改变了全局变量的作用域，使得这个被修饰的
// 全局变量只能在自己所在的源文件内部使用
//3. static修饰函数
// 改变了函数的链接属性（外部链接属性变成内部链接属性）
//4,5

//声明一下
//extern int Add(int x, int y);
//
//int main()
//{
//	printf("%d\n", Add(3, 4));
//	system("pause");
//	return 0;
//}
//声明外部符号的
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	system("pause");
//	return 0;
//}


//
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		test();
//	}
//	system("pause");
//	return 0;
//}

//K&R
//ANSI C
//
//#define MAX 100
//#define SQUARE(X) ((X)*(X))
//
//int main()
//{
//	//int max = MAX;
//	//printf("%d\n", max);
//	printf("%d\n", SQUARE(3+2));
//	//printf("%d\n", (3+2)*(3+2));
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 20;
//	int* p = &a;//指针变量
//	*p = 200;//*-解引用操作符
//
//	printf("%d\n", a);
//	//char ch = 'w';
//	//char * pc = &ch;
//	//printf("%p\n", &a);
//	system("pause");
//	//
//	//0000 0000000000000000000000010100
//	//00 00 00 14
//	//
//	return 0;
//}
//
//int main()
//{ 
//	char *pc = NULL;
//	short *ps = NULL;
//	int *pi = NULL;
//
//	printf("%d\n", sizeof(pc));//4
//	printf("%d\n", sizeof(ps));//4
//	printf("%d\n", sizeof(pi));//4
//
//	//32位平台指针的大小是4个字节
//	//64位平台指针的大小是8个字节
//	//硬件-操作系统-程序
//
//	system("pause");
//	return 0;
//}
//
////自定义类型
//struct Stu
//{
//	char name[20];
//	short age;
//	char sex[10];
//	float score;
//};
//
//#include <string.h>
//
//int main()
//{
//	struct Stu s = {"张三", 20, "男", 95.5};//初始化
//	struct Stu* ps = &s;
//	printf("%s %d %s %f\n", ps->name, ps->age, ps->sex, ps->score);
//	//printf("%s %d %s %f\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).score);
//
//	//printf("name = %s\n", s.name);
//	//printf("age = %d\n", s.age);
//	//printf("sex = %s\n", s.sex);
//	//printf("score = %f\n", s.score);
//	////
//	////s.name = "李四";
//	//strcpy(s.name, "李四");//string copy
//
//	//printf("name = %s\n", s.name);
//	//printf("age = %d\n", s.age);
//	//printf("sex = %s\n", s.sex);
//	//printf("score = %f\n", s.score);
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int age = 40;
//
//	if(age<18)
//		printf("少年\n");
//	else if(age>=18 && age<30)
//		printf("青年\n");
//	else if(age>=30 && age<50)
//		printf("中年\n");
//	else if(age>=50 && age<80)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//
//	/*if(age<18)
//	{
//	printf("未成年\n");
//	printf("不能去网吧\n");
//	}
//	else
//	{
//	printf("成年\n");
//	}*/
//
//// 	if(age<18)
//// 	{
//// 		printf("未成年\n");
//// 	}
//	system("pause");
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if(a == 1)
//		if(b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int a=10;
//
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//
//	}
//	for(i=0; i<10; i++)
//	{
//
//	}
//	return 0;
//}
//
//int main()
//{
//	int age = 3;
//	//if(age = 5)
//	if(5 == age)
//	{
//		printf("hehe\n");
//	}
//	system("pause");
//	return 0;
//}
//
//int  main()
//{
//	int i = 0;
//	for(i=1; i<=100; i+=2)
//	{
//		printf("%d ", i);
//	}
//// 	for(i=1; i<=100; i++)
//// 	{
//// 		if(i%2==1)
//// 		{
//// 			printf("%d ", i);
//// 		}
//// 	}
//	system("pause");
//	return 0;
//}