#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//switch case
//if else
//
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？");
//	scanf("%d", &input);
//	//选择语句
//	if(input == 1)
//	{
//		printf("好offer\n");
//	}
//	else if(input == 0)
//	{
//		printf("卖红薯\n");
//	}
//	else
//	{
//		printf("你在干啥\n");
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int line = 0;//记录代码行数
//	printf("加入比特\n");
//
//	while(line < 20000)
//	{
//		printf("写代码\n");
//		line++;
//	}
//	if(line == 20000)
//	{
//		printf("找工作\n");
//	}
//
//	return 0;
//}

//for
//do while
//自定义函数
//int Add(int x, int y)
//{
//// 	int z = 0;
//// 	z = x+y;
//// 	return z;
//	return x+y;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &num1, &num2);
//	//sum = num1+num2;//加法
//	//函数
//	sum = Add(num1, num2);
//	printf("sum = %d\n", sum);
//	//sum = a+b;//加法
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}
//
//int main()
//{
//	//数组
//	int a = 1;
//	int b = 2;
//
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//0-9
//	int i = 0;
//	while(i<10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//
//	/*printf("%d\n", arr[0]);
//	printf("%d\n", arr[6]);*/
//
//	//char arr2[20] = {0};
//
//	return 0;
//}


//>> <<
//
//int main()
//{
//	int a = 20;//4*3=32
//	//00000000000000000000000000010100
//	//
//	//
//	//int b = a>>2;//右移-二进制位
//	int b = a<<1;  //
//	printf("%d\n", b);
//	printf("%d\n", a);
//	
//	return 0;
//}

//& 按位与-二进制
//^ 按位异或
//| 按位或
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//int c = a & b;
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000001
//	//
//	/*int c = a | b;*/
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000111
//	//7
//
//	int c = a ^ b;
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000110
//	//
//	printf("%d\n", c);
//	return 0;
//}
//

// int main()
// {
// 	int a = 10;
// 	a = 20;//赋值
// 	a = a+10;//1
// 	a += 10;//2  复合赋值
// 	a = a+b;
// 	return 0;
// }
//
//int main()
//{
//	int flag = 0;
//	if(!flag)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//
//	return 0;
//}

//
//f-1111
  //8421
//
//int main()
//{
//	int a = 0;
//	//原码
//	//10000000000000000000000000000001
//	//反码
//	//11111111111111111111111111111110
//	//补码
//	//11111111111111111111111111111111
//
//
//	printf("%d\n", ~a);
//	//
//	//
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	//int b = a++;//先使用，再++
//	//int b = ++a;  //先++，后使用
//	//int b = a--;
//	int b = --a;
//
//	printf("a = %d\n", a);//
//	printf("b = %d\n", b);//
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = (++a)+(++a)+(++a);
//	printf("%d\n", b);
//	return 0;
//}
//
//int main()
//{
//	int a = (int)3.14;
//
//	//int a = int(3.14);//err
//	return 0;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 4;
//	int c = a|b;//7
//	int d = a || b;//1
//
//	//int c = a&b;//011  100  000
//	//int d = a && b;
//
//	return 0;
//}
//
//int main()
//{
//	/*int a = 10;
//	int b = 20;
//	int max = 0;
//	if(a>b)
//	max = a;
//	else
//	max = b;
//	max = (a>b ? a : b);*/
//
//	int a = 3;
//	int b = 5;
//	int c = 10;
//	int d = (b=a+3, a=b-5, c=c+b);//16
//	printf("%d\n", d);
//	return 0;
//}
//
//void test()
//{
//	printf("test\n");
//}
//int Add(int x, int y)
//{
//	return x+y;
//}

//int main()
//{
//	//int arr[10] = {0};
//	test();//函数调用操作符
//	//arr[4] = 5;//下标引用操作符
//	Add(2, 3);
//	return 0;
//}


//用来声明符号的
//extern int g_val;
//
//int main()
//{
//	//register-建议
//	register int a = 10;
//
//	//int a = 10;//局部变量
//	printf("%d\n", g_val);
//	return 0;
//}
//
//typedef unsigned int u_int;
//
//typedef struct S
//{
//	int a;
//	char c;
//	double d;
//}S;
//
//int main()
//{
//	//int char;
//	struct S s;
//	S ss;
//	unsigned int num = 0;
//	u_int num2 = 0;
//	return 0;
//}

//static
//1. 修饰局部变量
//改变了局部变量的生命周期
//2. 修饰全局变量
//改变了全局变量的作用域-改变了链接属性（外部-->内部）
//3. 修饰函数
//改变了函数的作用域-改变了链接属性（外部-->内部）

//void Test()
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
//		Test();
//	}
//	return 0;
//}

//extern int g_val;
//
//extern int Add(int x, int y);
//
//int main()
//{
//	int sum = Add(2, 3);
//	printf("sum = %d\n", sum);
//	//printf("g_val = %d\n", g_val);
//	return 0;
//}


//#define MAX 1000
//宏
//#define MAX(X, Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	//int a = MAX;
//	printf("%d\n", MAX(3, 5));
//	return 0;
//}

int main()
{
	int a = 0;
	int * p = &a;//指针变量
	*p = 20;//解引用操作
	//printf("%p\n", &a);
	printf("%d\n", a);

	return 0;
}