#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//typedef 类型重定义
//typedef unsigned int uint;
//
//int main()
//{
//	unsigned int age = -10;
//	uint num = 10;
//	printf("%u\n", age);
//	system("pause");
//	return 0;
//}

//
//1. 请讲出static的用法
//a. static修饰局部变量,改变的是局部变量的生命周期
//b. static修饰全局变量，改变了变量的作用域(链接属性-由外部链接属性->内部链接属性)
//c. static修饰函数，改变的是函数的作用域(链接属性-由外部链接属性->内部链接属性)
//d. static 修饰类的成员函数
//e. static 修饰类的成员变量
//
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		test();
//	}
//	//10个2
//	//2-11
//	system("pause");
//	return 0;
//}


//声明
//extern 声明外部符号的
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	system("pause");
//	return 0;
//}

//
//IDE  集成开发环境
//cl.exe - 编译器
//link.exe - 链接器
//

//extern int Add(int, int);
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("c = %d\n", c);
//
//	system("pause");
//	return 0;
//}

//#define 定义常量
//#define NUM 100
//
//
////#define定义宏
//#define MAX(X,Y)  (X)>(Y)?(X):(Y)
//
////
//int Max(int x, int y)
//{
//	return x>y?x:y;
//}
//
//
//int main()
//{
//	int max = MAX(3, 5);
//	printf("max = %d\n", max);
//	max = 0;
//	max = Max(3, 5);
//	printf("max = %d\n", max);
//
//	system("pause");
//	return 0;
//}
//
//
//
//int main()
//{
//	int num = 10;//4
//	int* p = NULL;
//
//	//printf("%p\n", &num);
//	printf("%d\n", num);
//	p = &num;//指针类型-指针变量
//	*p  =20;//解引用操作
//	printf("%d\n", num);
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc;
//	return 0;
//}

//
////结构体
//struct Stu
//{
//	char name[20];
//	unsigned int age;
//	char sex[5];
//};
//
//
//int main()
//{
//	struct Stu s1 = {"zhangsan", 20, "男"};
//	//.
//	//->
//	struct Stu* ps = &s1;
//
//	ps->age++;
//	printf("%s %d %s\n", ps->name, ps->age, ps->sex);
//	
//	/*(*ps).age++;
//	printf("%s %d %s\n", (*ps).name, (*ps).age, (*ps).sex);*/
//
//	//s1.age++;
//	//printf("%s %d %s\n", s1.name, s1.age, s1.sex);
//
//	system("pause");
//	return 0;
//}
//
//
//
//int main()
//{
//	int age = 40;
//	//if(age == 18)
//	//	printf("成年\n");
//
//	//if(age<18)
//	//{
//	//	printf("未成年\n");
//	//	printf("不能去网吧\n");
//	//}
//	//else
//	//	printf("成年\n");
//
//	/*if(age<18)
//		printf("未成年\n");
//	else if(age>=18 && age<30)
//		printf("青年\n");
//	else if(age>=30 && age<50)
//		printf("中年\n");
//	else if(age>=50 && age<80)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//*/
//
//	if(age<18)
//		printf("未成年\n");
//	else if(18<=age<30)//err
//		printf("青年\n");
//	else if(age>=30 && age<50)
//		printf("中年\n");
//	else if(age>=50 && age<80)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//
//
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//int a = 0;
//int b = 2;
//if(a == 1)
//if(b == 2)
//printf("hehe\n");
//else
//printf("haha\n");
//return 0;
//}

//int main()
//{
//	int a = 10;
//	int a=10;
//
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//
//	}
//	return 0;
//}

//int main()
//{
//	char firstname[20];
//	char first_name[20];//unix 风格
//	char FirstName[20];//
//
//	return 0;
//}
//
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if(num%2==1)
//	{
//		printf("奇数\n");
//	}
//	//int age = 10;
//	////if(age == 18)
//	//if(18 == age)
//	//{
//	//	printf("成年\n");
//	//}
//	//else
//	//{
//	//	printf("未成年\n");
//	//}
//	system("pause");
//	return 0;
//}
//

//int main()
//{
//	int i = 0;
//	for(i=1; i<=100; i++)
//	{
//		if(i%2 == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for(i=1; i<=100; i+=2)
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}