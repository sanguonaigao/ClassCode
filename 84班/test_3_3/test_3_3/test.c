
#include <stdio.h>


int main()
{
	char ch = 'w';
	char* pc = &ch;
	printf("%d\n", sizeof(pc));
	//*pc = 'a';
	//printf("%c\n", ch);
	return 0;
}
//
//int main()
//{
//	int a = 10;//4个字节
//	int* p = &a;//取地址
//	//printf("%p\n", &a);
//	//printf("%p\n", p);
//	*p = 20;//* - 解引用操作符
//	printf("a = %d\n", a);
//
//	//有一种变量是用来存放地址的-指针变量
//	//printf("%p\n", &a);
//
//	return 0;
//}
//#define 定义标识符常亮
//#define MAX 100
//#define 可以定义宏-带参数

//函数的实现
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
////宏的定义
//#define MAX(X,Y) (X>Y?X:Y)
//
//int  main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	//函数
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//宏的方式
//	max = MAX(a, b);
//	//max = (a>b?a:b);
//	printf("max = %d\n", max);
//	return 0;
//}
//1. static 修饰局部变量
//局部变量的生命周期变长
//2. static 修饰全局变量
//改变了变量的作用域 - 让静态的全局变量只能在自己所在的源文件内部使用
//出了源文件就没法再使用了
//3. static修饰函数
//也是改变了函数的作用域-不准确
//static修饰函数改变了函数的链接属性
//外部链接属性 -> 内部链接属性
//

//声明外部函数
//extern int Add(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//
//int main()
//{
//	//extern - 声明外部符号的
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}
//
//void test()
//{
//	static int a = 1;//a 是一个静态的局部变量
//	a++;
//	printf("a = %d\n", a);//2 3 4 5 6
//}
//int main()
//{
//	int i = 0;
//	while (i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//
//int main()
//{
//	//int float;//err
//	//typedef - 类型定义 - 类型重定义
//	//张三 -- 小三 -- 
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//	u_int num2 = 20;
//	return 0;
//}
//int 
//float
//
//int main()
//{
//	//register int a = 10;//建议把a定义成寄存器变量
//	int a = 10;
//	a = -2;
//	//int 定义的变量是有符号的
//	//signed int;
//	unsigned int num = 1;
//	//struct - 结构体关键字
//	//union - 联合体/共用体
//
//	return 0;
//}
//int main()
//{
//	auto int a = 10;//局部变量-自动变量
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//-1 -- 整形 -32
//1  -- 整形 -32
//
//[1][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]
//[0][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]
//
//有符号数
//
//
//只要是整数，内存中存储的都是二进制的补码
//正数--原码,反码，补码 相同
//负数:
//原码                     --->          反码        --- >     补码
//直接按照正负            原码的符号位不变             反码+1
//写出的二进制序列        其他位按位取反得到   
//-2
//10000000000000000000000000000010 - 原码
//11111111111111111111111111111101 - 反码
//11111111111111111111111111111110 - 补码



//11111111111111111111111111111111
//100000000000000000000000000000000
//1*2^32-1
////
//
//int  main()
//{
////	int arr[10] = { 0 };
////	arr[4];//[] - 下标引用操作符
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//()-- 函数调用操作符
//
//	return 0;
//}
//
//& * . ->
//

//
//int main()
//{
//	int a = 100;
//	int b = 20;
//	int max = 0;
//
//	max = (a > b ? a : b);
//
//	if (a > b)
//		max = a;
//	else
//		max = b;
//
//	return 0;
//}

//int main()
//{
//	//真  - 非0
//	//假  -  0
//	//&& - 逻辑与
//	//|| - 逻辑或
//	int a = 3;
//	int b = 5;
//	//int c = a && b;
//	int c = a || b;
//	printf("c = %d\n", c);
//	return  0;
//}
//
//int main()
//{
//	int a = (int)3.14;//double --> int
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++，先使用，再++
//	//int b = ++a;//前置++，先++，再使用
//	//int b = a--;//后置--，先使用，再--
//	int b = --a;//前置--，先--，再使用
//	printf("a = %d b = %d\n", a, b);//
//
//	return 0;
//}

//int main()
//{
//	int a = 0;//4个字节，32bit位
//	int b = ~a;//b是有符号的整形，
//	//~ -- 按（2进制）位取反
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//原码、反码、补码
//	//负数在内存中存储的时候，存储的是二进制的补码
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001
//	printf("%d\n", b);//使用的，打印的是这个数的原码
//	//
//
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int a = 10;
//	int arr[] = { 1, 2, 3, 4, 5, 6 };//6*4=24 --> int[6]
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof a);//4
//	//printf("%d\n", sizeof int);//err
//	printf("%d\n", sizeof(arr));//计算数组大小，单位是字节
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//6
//	return 0;
//}
//
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("较大值是：%d\n", num1);
//	else
//		printf("较大值是：%d\n", num2);
//
//	return 0;
//}
//int main()
//{
//	printf("%d\n", strlen("c:\test\121"));
//	return 0;
//}

//int main()
//{
//	//字符串的结束标志：'\0'
//	//"abcdef";
//	//'\0'-转义字符-0
//	//0->数字0
//	//'0' -> 48
//	//'a' 'b' 'c' '0' '1' '2'
//	//	EOF - end of file - 文件结束标志 -1
//
//	return 0;
//}