#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#define MAX 1000

//性别
//创建一个性别枚举类型
//enum Sex
//{
//	//枚举常量
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	//常量
//	//1. 字面常量
//	//300;
//	//3.14;
//	//2. const 修饰的常变量
//	//const int num = 10;
//	//num = 20;
//	//printf("num = %d\n", num);
//	//补充
//	//const int n = 10;
//	//int arr[n] = {0};
//	//3. #define 定义的标识符常量
//	//int a = MAX;
//	//printf("a = %d\n", a);
//	//4. 枚举常量
//	//枚举---一一列举
//	//性别：男、女、保密
//	//三原色：红、黄、蓝
//
//	int num = 10;
//	enum Sex s = MALE;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//
//	return 0;
//}

#include <string.h>
//
//int main()
//{
//	//"abc";//字面字符串
//	//"";//空字符串
//	//字符数组中
//	//#@$%Qa
//	//a-97
//	//A-65
//	//编码
//	//ASCII编码
//	//
//	char arr1[] = "abc";
//	char arr2[] = {'a', 'b', 'c'};//
//	printf("%d\n", strlen(arr1));//strlen - string strlen - 计算字符串长度的
//	printf("%d\n", strlen(arr2));//随机值
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//
//	return 0;
//}

//
//int main()
//{
//	//
//	//转义字符
//	//\t - 水平制表符
//	//
//	//printf("c:\\test\\32\\test.c");
//	//printf("hehe\n");
//	//printf("%c", '\'');
//	//printf("%s\n", "\"");
//	//printf("\a\a\a\a\a\a\a");
//	//%c 打印字符
//	//%d 打印整型
//	//%s 字符串
//	//%f 浮点型
//	//%p 打印地址
//	//printf("hello\nworld\n");
//
//	//printf("%d\n", strlen("c:\test\32\test.c"));//3
//	//printf("%c\n", '\32');//把8进制的32转换成10进制数后，作为ASCII码值代表的那个字符
//	printf("%c\n", '\x41');
//	//4*16^1+1*16^0
//	//64+1 = 65
//	//32
//	//
//	return 0;
//}
//


//int main()
//{
//	//C++注释风格
//	//创建整型变量a,并赋值10-注释
//
//	//C的注释风格
//	/*
//	int a = 10;
//	*/
//	return 0;
//}
//
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗(1/0)?\n");
//	scanf("%d", &input);
//	if(input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//
//	return 0;
//}

//
//20000 - BAT - TMD
//
//
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while(line<20000)
//	{
//		printf("敲代码:%d\n", line);
//		line++;
//	}
//	printf("好offer\n");
//	return 0;
//}

//函数
//f(x,y) = x+y;
//C语言中的函数
//Add(x, y) 
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x+y;
//	return z;
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
//	scanf("%d%d", &num1, &num2);
//	//sum = num1+num2;//计算方法
//	sum = Add(num1, num2);
//	printf("%d\n", sum);
//
//	//sum = a+b;//计算方法
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//printf("%d\n", arr[0]);
//	int i = 0;
//	while(i<10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//
//	//int arr2[] = {1,2,3,4,5,6,7,8,9,10};
//	//1-10
//	//数组-一组数组-相同类型的数字
//	//
//// 	int a = 1;
//// 	int b = 2;
//// 	int c = 3;
//// 	//1->10
//// 	//1-10000
//	return 0;
//}
//
//int main()
//{
//	int a = 5%2;
//	printf("%d\n", a);
//	return 0;
//}

// int main()
// {
// 	int a = 3;
// 	int b = 5;
// 	//int c = a&b;//按(2进制)位与
// 	//011
// 	//101
// 	//001
// 	//
// 	
// 	//int c = a|b;//按位或
// 	//011
// 	//101
// 	//111
// 	//
// 	//int c = a^b;//按位异或
// 	//011
// 	//101
// 	//110
// 	//
// 	//printf("c = %d\n", c);
// 
// 	return 0;
// }
//
//
//int main()
//{
//	int a = 0;//创建变量-初始化
//	//...
//	//a = 10;//给a赋值 = 赋值操作符
//	a = a+1;//1
//	a += 1; //2
//
//	a = a-1;
//	a-=1;
//
//	a = a*10;
//	a *= 10;
//
//	a = a&1;
//	a &= 1;
//
//
//	return 0;
//}

int main()
{
	//int a = 10;
	//int b = 20;
	//int c = a+b;//双目操作符
	//单目操作符-只有一个操作数
	//C语言是如何表示真假的呢?
	//0 - 表示假
	//非0 - 表示真 1 -1 

	//int a = 0;
	//printf("%d\n", !a);//
	//int a = -10;
	//a = -a;
	//a = +a;
// 	int a = 10;
// 	printf("%d\n", sizeof(a));//4 字节
// 	printf("%d\n", sizeof a);//4 字节
// 
// 	printf("%d\n", sizeof(int));//

	int arr[10] = {0};

	int sz = sizeof(arr)/sizeof(arr[0]);//计算数组元素个数

	//printf("%d\n", sizeof(arr));//10*4=40
	printf("%d\n", sz);
	return 0;
}