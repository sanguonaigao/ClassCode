#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));//string length
//	//"abcdef";
//	//char arr[] = "abcdef";//'\0'是字符串的一个结束标志
//	//char arr2[] = {'a', 'b', 'c', 'd', 'e', 'f', '\0'};
//	//printf("%s\n", "abcdef");
//	//printf("%s\n", arr);
//	//printf("%s\n", arr2);
//
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	printf("c:\code\test.c\n");
//	system("pause");
//	return 0;
//}
//
//
//int main()
//{
//	//printf("%c", '\'');
//	//printf("%s\n", "abc");
//	//printf("%s\n", "a");
//	//printf("%s\n", "\"");
//	//printf("c:\\code\\test.c\n");
//	//printf("\a\a\a\a\a\a\a");
//
//	system("pause");
//	return 0;
//}
// 
// int main()
// {
// 	//printf("%d\n", strlen("c:test\130\test.c"));
// 	//aA@#$%
// 	//ASCII编码
// 	//A-65
// 	//a-97
// 	//1234
// 	//
// 	//printf("%s\n", "c:test\138\test.c");
// 	//printf("%c\n", '\x030');
// 	//printf("%d\n", 'a');
// 	system("pause");
// 	return 0;
// }
//
//int main()
//{
//	int a = 10;
//	//printf("a = %d\n", a);//C++注释风格
//	/*printf("a = %d\n", a);*///C语言注释风格
//	/*
//	printf("a = %d\n", a);
//	printf("a = %d\n", a);
//	printf("a = %d\n", a);
//	printf("a = %d\n", a);
//	*/
//	return 0;
//}
//

//if
//switch
//
//int main()
//{
//	int input = 0;
//	printf("加入比特，你要好好学习吗？\n");
//	scanf("%d", &input);
//	if(1 == input)
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
//


//for  while  do while
//int main()
//{
//	int line = 0;
//
//	while(line<=20000)
//	{
//		printf("好好学习\n");
//		line++;
//	}
//
//	printf("大牛:%d\n", line);
//	system("pause");
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//
//	scanf("%d%d", &num1, &num2);
//	//sum = num1+num2;
//	sum = Add(num1, num2);
//	printf("sum = %d\n", sum);
//	system("pause");
//	return 0;
//}

//
//f(x, y) = x+y;
//

//
//int main()
//{
//	//int a = 10;
//	//数组
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//下标
//	//printf("%d\n", arr[5]);
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	//char arr2[20] = {0};
//	return 0;
//}
//
//int main()
//{
//	//float a = 3/2.0;
//	//printf("%f\n", a);
//	//int a = 5%2;
//	//printf("a = %d\n", a);
//	//整数
//	//正数
//	//负数
//	//原码
//	//反码
//	//补码
//
//	int a = -1;
//	//f
//	//1111
//	//8421
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//
//	//11111111111111111111111111111110-补码
//	//11111111111111111111111111111101
//	//10000000000000000000000000000010
//	//-2
//	int b = a<<1;
//	//左移操作符-二进制位
//	//
//	//1111
//	//8421
//	//00000000000000000000000000001010
//	//
//	//4字节
//	//32bit
//	//
//	printf("%d\n", b);
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}

//
//jie jian
//ing in
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//int c = a&b;//按位与
//	//int c = a|b;//按位或
//	int c = a^b;//按位异或
//	c = 20;
//	c = c+1;
//	c += 1;
//	//011
//	//101
//	//110
//	//
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//int a = 0;
//	//printf("%d\n", !a);
//	//int a = 0;//
//	//printf("%d\n", ~a);//
//	//int a = 10;
//	//int b = a++;//后置++，先使用，再++
//	//int b = ++a;//前置++，先++，后使用
//	//printf("a = %d\n", a);//11
//	//printf("b = %d\n", b);//11
//	int a = (int)3.14;
//	//int a = int(3.14);//err
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}
// 
// int main()
// {
// 	int a = 1;
// 	int b = 2;
// 	int c = 3;
// 	int d = (a=3, b=a+4, b, c/2);
// 	printf("%d\n", d);
// 	/*int a = 0;
// 	int b = 0;
// 	int max = 0;
// 	if(a>b)
// 	max = a;
// 	else
// 	max = b;
// 
// 	max = (a>b) ? (a) : (b);*/
// 
// // 	//int c = a && b;
// // 	int c = a || b;
// // 	printf("%d\n", c);
// 	system("pause");
// 	return 0;
// }
// 
//
//int main()
//{
//	//register int a = 10;//建议把a放在寄存器中
//	unsigned int num1 = 10;
//	typedef unsigned int uint;
//	uint num2 = 10;
//	return 0;
//}
// 
// int main()
// {
// 	int a = 10;
// 	int age = 0;
// 	char first_name[10];
// 	char FirstName[10];
// 
// 	return 0;
// }


//int main()
//{
//	int a = 10;//1
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//
//	}
//	return 0;
//}

//void test()
//{
//	static int num = 0;
//	num++;
//	printf("%d ", num);
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
//extern 声明外部符号
//
//extern int g_val;
//extern void test();
//
//int main()
//{
//	//printf("%d\n", g_val);
//	test();//hehe
//	system("pause");
//	return 0;
//}

//总结：
//static修饰局部变量
//	改变生命周期，不变作用域
//static修饰全局变量
//	改变了作用域，不变生命周期
//	被修饰的全局变量只能在自己所在的源文件内部使用，不能被外部使用
//static修饰函数
//	改变了作用域，不变生命周期
//	被修饰的函数只能在自己所在的源文件内部使用，不能被外部使用


//#define 
//define定义标识符常量
#define MAX 100
//define定义宏
//#define ADD(x, y) x+y

// 
// int main()
// {
// 	//int a = MAX;
// 	int sum = ADD(2, 3);
// 	printf("sum = %d\n", sum);
// 	system("pause");
// 	return 0;
// }
// 
// #define SQUARE(x) ((x)*(x))
// 
// int main()
// {
// 	printf("%d\n", SQUARE(2+1));
// 	//printf("%d\n", 2+1*2+1);
// 	system("pause");
// 	return 0;
// }



