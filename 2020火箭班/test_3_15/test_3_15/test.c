#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//
//int main()
//{
//	//"abc";//字符串
//	char arr1[] = "abc";//'\0' 的 ASCII码值是0
//	char arr2[] = {'a', 'b', 'c'};
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	//printf("%d\n", strlen(arr1));
//	//printf("%d\n", strlen(arr2));
//
//	return 0;
//}

//知乎
//
//int main()
//{
//	//int n = 10;
//	//int arr[n] = {1,2,3,4,5,6,7,8,9,10};
//	int a = 10;
//	a = -a;
//
//	return 0;
//}
//

//
//int main()
//{
//	int a = 10;
//	int arr[6] = {0};
//	//printf("%d\n", sizeof(arr));//24
//	//printf("%d\n", sizeof a);//sizeof()计算结果的单位是字节
//	//printf("%d\n", sizeof(int));//
//	//printf("%d\n", sizeof(double));//
//
//	return 0;
//}
//

//int main()
//{
//	int a = 10;
//	//4字节-32bit
//	//00000000000000000000000000001010
//	//11111111111111111111111111110101
//	//
//	int b = ~a;
//	printf("%d\n", b);//疑问
//
//	//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int b = ++a;
//	printf("b=%d a=%d\n", b, a);
//
//// 	int b = a++;//后置++:先使用，后++
//// 	printf("b = %d a = %d\n", b, a);
//
//	//int b = --a;//前置--：先--，再使用
//	//printf("b = %d a = %d\n", b, a);//
//// 	int b = a--;//后置--：先使用a的值，再--
//// 	printf("b = %d a = %d\n", b, a);//10 9
//	return 0;
//}
//
//
//int main()
//{
//	//强制类型转换
//	//int a = (int)3.14;//double
//	int a = 0;
//	int b = 0;
//	if(a || b)
//		printf("hehe\n");
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;//存放找到的较大值
//	
//// 	if(a>b)
//// 		max = a;
//// 	else
//// 		max = b;
//	//条件操作符-三目操作符
//	max = (a>b) ? (a) : (b);
//
//	printf("%d\n", max);
//
//	return 0;
//}


// int  main()
// {
// 	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
// 	printf("%d\n", arr[4]);
// 	//下标引用-操作符
// 
// 	return 0;
// }

//函数调用操作符

//int Add(int x, int y)
//{
//	int z = x+y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//调用函数
//	int sum = Add(a, b);//()是函数调用操作符
//
//	printf("sum = %d\n", sum);
//	return 0;
//}


//int main()
//{
//	float a;
//	return 0;
//}
// 
// int main()
// {
// 	int a = 10;//局部变量 - auto 
// 	return 0;
// }
// 

//typedef 类型重命名
//typedef unsigned int u_int;
//int main()
//{
//	//定义一个年龄变量
//	unsigned int age;
//	u_int age2;
//
//	return 0;
//}
//
//
//int main()
//{
//	register int a = 0;//假设a未来会被频发大量的是使用
//	//register 就是建议把a放在寄存器中
//
//	return 0;
//}
//static的作用
//1. 修饰局部变量
//2. 修饰全局变量
//3. 修饰函数


//
//static 饰局部变量
//改变了变量的生命周期 - 变长
//出了局部范围也不销毁
//
//void test()
//{
//	static int a = 1;//修饰局部变量
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//
//	while(i<10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//

//static修饰全局变量
//改变了全局变量的作用域-变小了
//static修饰的全局变量只能在自己所在的.c文件中使用，不能在其他源文件内使用


//声明一下全局变量
//extern 是 声明外部符号的
//extern int g_val;
//
//int main()
//{
//	printf("g_val = %d\n", g_val);
//
//	return 0;
//}

//static修饰函数
//改变了函数的作用域
//这个被修饰的函数只能在自己所在的源文件内部使用，其他源文件不能使用


//声明函数
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}


//strlen 和 sizeof有什么区别

//1. 他们就没有什么关联
//2. strlen()是一个库函数，只能用来求字符串的长度（从字符串的开始位置向后数字符的个数，
//   直到'\0',个数中不包含'\0'）
//3. sizeof()是操作符,是用来计算某个对象或者类型的大小的，单位是字节
//int a = 10;
//int arr[10] = {0};
//sizeof(a) sizeof(int) sizeof(arr)
//


//#define 定义常量
// #define MAX 10
// 
// int main()
// {
// 	int a = MAX;
// 	printf("%d\n", a);
// 	return 0;
// }

//#define 定义宏
//
//int Max(int x, int y)
//{
//	//三目操作符/条件操作符
//	return (x>y ? x:y);
//}
//
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的方式
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//
//	//宏的方式
//	max = MAX(a, b);
//	printf("max = %d\n", max);
//	
//	return 0;
//}
//10进制
//0-9
//16进制
//0 1 2 3 4 5 6 7 8 9 a b c d e f
//
//int main()
//{
//	int a = 10;//创建整型变量a，并且赋值10
//	//要存储10
//	//要有内存空间
//	//a在创建的时候，向内存申请了四个子节的空间
//	//printf("%p\n", &a); //& 取地址操作符
//	int* p = &a;//p是指针变量
//
//	printf("%p\n", p);
//	printf("%p\n", &a);
//
//	//%p 以地址的形式进行打印
//
//	return 0;
//}
//
//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//	*pc = 'w';
//	printf("%c\n", ch);
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;//*-解引用操作符 *pa 就是 a
//	printf("%d\n", a);//20
//	return 0;
//}

int main()
{
	char ch = 'a';
	int a = 10;
	char*pc = &ch;
	int*pa = &a;

	printf("%d\n", sizeof(pc));//
	printf("%d\n", sizeof(pa));//

	return 0;
}