#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 0;
//	if(a = 5)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//
//int main()
//{
//// 	&; //按位与
//// 	&&;//与
//// 	|;//按位或
//// 	||;
//	int a = 1;
//	int b = 2;
//	int c = a||b;
//
//	printf("%d\n", c);
//	//01
//	//10
//	//11
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	//max = (a>b?a:b);
//	if(a<b)
//		max = a;
//	else
//		max = b;
//
//	printf("max = %d\n", max);
//	return 0;
//}
//
//int main()
//{
//	int a = 2;
//	int b = 4;
//	int c = 10;
//	int d = (a=b-5, b=c+a, c=a-b);
//
//	printf("%d\n", d);
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//arr[4];//下标引用操作符
//	//a+b;
//	printf("%d\n", 4[arr]);//*(arr+4)
//	printf("%d\n", arr[4]);
//	return 0;
//}

// int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//	int ret = Add(2, 3);
//	return 0;
//}
//
//typedef unsigned int uint;
//
//int main()
//{
//	//int num = 10;
//	//register int num = 10;//建议把num放在寄存器中
//	unsigned int num = 10;
//	uint num2 = 20;
//
//	return 0;
//}
//
//typedef struct Stu
//{
//	char name[20];
//	int age;
//}Stu;
//
//int main()
//{
//	return 0;
//}

//static-静态的
//static修饰局部变量
//static修饰全局变量
//static修饰函数



//static修饰局部变量
//改变了局部变量的生命周期
//void test()
//{
//	static int a = 0;
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
//	return 0;
//}

//static修饰全局变量
//改变的是全局变量的作用域


//static修饰函数
//改变的是函数的作用域
//
//extern int val;
//extern int Add(int x, int y);
//
//int main()
//{
//	//printf("val = %d\n", val);
//	int ret = Add(2, 3);
//	printf("%d\n", ret);
//	return 0;
//}

// #define NUM 100
// 
// int main()
// {
// 	printf("%d\n", NUM);
// 	return 0;
// }
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//#define MUL(X, Y) ((X)*(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	//宏
//	c = MUL(1+2, 3+4);
//	//c = a+b;
//	//1+2*3+4
//	printf("%d\n", c);
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	//printf("%p\n", &a);//取地址操作符
//	int * pa = &a;//指针变量
//	*pa = 20;//解引用操作符
//	printf("%d\n", a);
//
//	//00000000000000000000000000001010
//	//0000000a
//	//
//
//// 	char ch = 'w';
//// 	char * pc = &ch;
//	return 0;
//}
//
//int main()
//{
//	//int a = 10;
//
//	//printf("%d\n", sizeof(char));//1
//	//printf("%d\n", sizeof(int));//4
//	//printf("%d\n", sizeof(a));//4
//
//	//printf("%d\n", sizeof(double));//8
//
//	//char *pc = 0;
//
//	printf("%d\n", sizeof(char*));//
//	printf("%d\n", sizeof(int*));//
//	printf("%d\n", sizeof(double*));//
//
//
//	return 0;
//}
//
