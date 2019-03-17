#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a =  10;
	return 0;
}

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
//	int age = 30;
//	if(age<18)
//	{
//		printf("少年\n");
//	}
//	else if(age>=18 && age<25)
//	{
//		printf("青年\n");
//	}
//	else if(age>25 && age<50)
//	{
//		printf("壮年\n");
//	}
//	else if(age>=50 && age<80)
//	{
//		printf("中老年\n");
//	}
//	else
//	{
//		printf("老年\n");
//	}
//	/*if(age<18)
//	{
//	printf("未成年\n");
//	}
//	else
//	{
//	printf("成年\n");
//	}*/
//	/*if(age<18)
//	{
//	printf("未成年\n");
//	printf("不能去网吧\n");
//	}*/
//	system("pause");
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	short age;
//	float weight;
//};
//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	struct Stu s = {"张三", 20, 55.5};
//	struct Stu* ps = &s;
//	//printf("%s %d %f\n", (*ps).name, (*ps).age, (*ps).weight);
//	printf("%s %d %f\n", ps->name, ps->age, ps->weight);
//	//printf("%s %d %f\n", s.name, s.age, s.weight);
//	system("pause");
//	return 0;
//}

//指针变量的大小
//int main()
//{
//	//printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(char*));//
//	printf("%d\n", sizeof(short*));//
//	printf("%d\n", sizeof(int*));//
//	printf("%d\n", sizeof(long*));//
//	printf("%d\n", sizeof(long long*));//
//	printf("%d\n", sizeof(float*));//
//	printf("%d\n", sizeof(double*));//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", ch);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 10;//4
//	int * p = &a;//指针变量
//	*p = 20;//解引用操作符//间接访问操作符
//	printf("%d\n", a);
//	system("pause");
//	//printf("%p\n", &a);
//	return 0;
//}

//
//#define MAX(x, y) ((x)>(y)?(x):(y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	//int max = a>b?a:b;
//	printf("%d\n", max);
//	system("pause");
//	return 0;
//}

//#define MAX 1000
//
//int main()
//{
//	int a = MAX;
//	printf("a = %d\n", a);
//	system("pause");
//	return 0;
//}

//声明外部符号的
//extern int g_val;
//
//extern int Add(int x, int y);
//
//int main()
//{
//	//printf("g_val = %d\n", g_val);//
//	int sum = Add(1, 2);
//	printf("%d\n", sum);
//
//	system("pause");
//	return 0;
//}

//static
//静态的
//1. static修饰局部变量
//改变了变量的生命周期，作用域不变
//2. static修饰全局变量
//改变了变量的作用域，使得静态全局变量的只能在当前的源文件内部使用
//《C和指针》
//3. static修饰函数-链接属性（外部链接属性-->内部链接属性）
//使得这个函数只能在自己的所在源文件内部使用
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
//	system("pause");
//	return 0;
//}

//
//typedef unsigned int uint;
//
//typedef struct S
//{
//	int a;
//	char c;
//}S;
//
//int main()
//{
//	S s;
//	//建议
//	//register int a = 10;
//	//typedef 类型重定义
//	unsigned int a = 10;
//	uint b = 20;
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	printf("%d\n", arr[5]);//arr[5] *(arr+5) *(5+arr) 5[arr]
//	printf("%d\n", 5[arr]);
//	system("pause");
//	return 0;
//}

// int main()
// {
// 	int arr[10] = {1,2,3};
// 	arr[5];
// 	printf("hehe");
// 	return 0;
// }

//int main()
//{
//	/*int a = 10;
//	int b = 20;
//	int max = 0;
//	if(a>b)
//	max = a;
//	else
//	max = b;
//	printf("max = %d\n", max);
//
//	max = (a>b)?(a):(b);
//	printf("max = %d\n", max);*/
//
//	int a = 10;
//	int b = 2;
//	int c = 5;
//
//	int d = (a=b-3, b=c+3, c=10+a);
//	printf("%d\n", d);
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = a||b;
//	printf("c = %d\n", c);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = (int)3.14;
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	//int b = a++;//先使用，后++
//	//int b = ++a;//先++，后使用
//	//int b = a--;
//	int b = --a;
//	printf("a = %d\n", a);//9
//	printf("b = %d\n", b);//9
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//00000000000000000000000000001010
//	int a = 0;
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111-补码
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001
//
//	//10000000000000000000000000000001-原码
//	//11111111111111111111111111111110-反码
//	//11111111111111111111111111111111-补码
//	printf("%d\n", ~a);
//	system("pause");
//	return 0;
//}
//
//int  main()
//{
//	//printf("%d\n", !0);
//	int a = 10;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	a = 20;
//	a = a+10;
//	a += 10;//复合赋值符
//	return 0;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//011
//	//101
//	//110-4
//	int c = a^b;//按（二进制）位异或
//	//int c = a|b;//按（二进制）位或
//	//int c = a&b;//按（二进制）位与
//	printf("c = %d\n", c);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	//00000000000000000000000000001010
//	//
//	//二进制位
//	int b = a<<1;
//
//	printf("%d\n", b);//20
//	printf("%d\n", a);//10
//
//	system("pause");
//	//a<<1;
//	return 0;
//}
//
//int main()
//{
//	int a = 5.0%2.0;//err
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	float a = 5/2.0;
//	printf("%f\n", a);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	while(i<10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	//printf("%d\n", arr[4]);
//	system("pause");
//	//char ch[5] = {'a', 'b', 'c'};
//	return 0;
//}
//int Add(int x, int y)
//{
//	int ret = x+y;
//	return ret;
//}
//int  main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	//sum = num1+num2;
//	sum = Add(num1, num2);
//	//函数
//	//f(x) = 2*x+1;
//	//f(x, y) = x+y;
//	printf("%d\n", sum);
//	sum = Add(2, 3);
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
//

//
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while(line<=20000)
//	{
//		printf("好好敲代码!\n");
//		if(line == 10000)
//			break;
//		line++;
//	}
//
//	if(line>20000)
//		printf("好offer\n");
//	else
//		printf("半途而废\n");
//	system("pause");
//	//while
//	//for
//	//do while
//
//	return 0;
//}


//
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？>:");
//	scanf("%d", &input);
//	if (1 == input)
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