#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
//int main()
//{
//	//printf("hello world\n");//\n  转义字符
//	//\0
//	//printf("c:\\test\\test.c\n");//\t -水平制表符 
//	//printf("(are you ok??)\n");//ok?
//	//printf("%c\n", '\'');
//	//printf("%s\n", "\"");
//	//printf("\a\a\a\a\a\a");
//	//printf("%d\n", strlen("abc"));//string length
//	//printf("%d\n", strlen("c:\test\478\test.c"));//
//	//printf("%c\n", '\x030');
//	//printf("%c\n", '\54');
//	//@#QW
//	//A-65
//	//a-97
//	//ASCII 编码
//	//ASCII 码值
//	//ASCII 码表
//	//
//	//14 15 12 13 
//	system("pause");
//	return 0;
//}
//


//
//int main()
//{
//	/*
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	*/
//	//printf("haha\n");
//
//	return 0;
//}
//
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要学习吗？(1/0)\n");
//	scanf("%d", &input);
//	if(input == 0)
//	{
//		printf("放弃学习\n");
//	}
//	else if(input == 1)
//	{
//		printf("好offer\n");
//	}
//	system("pause");
//	return 0;
//}
//switch

//
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	//
//	while(line<=20000)
//	{
//		printf("我要敲代码\n");
//		line++;
//	}
//	if(line>20000)
//	{
//		printf("找工作\n");
//	}
//	else
//	{
//		printf("中途放弃\n");
//	}
//	system("pause");
//	return 0;
//}
//

//f(x) = 2*x+1;
//f(x, y) = x+y
//
//int Add(int x, int y)
//{
//// 	int z = x+y;
//// 	return z;
//	return x+y;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	//int sum = num1+num2;
//	//sum = 20+25;
//	int sum = Add(num1, num2);
//	printf("%d\n", sum);
//	sum = Add(2, 3);
//	printf("%d\n", sum);
//
//	system("pause");
//	return 0;
//}
//

//
//int main()
//{
//	int arr[12] = {1,2,3,4,5,6,7,8,9,10, 11, 12};
//	//printf("%d\n", arr[4]);
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	while(i<sz)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	//int a = 5/2;
//	//int a = 5/2.0;
//	//printf("%d\n", a);
//	//int a = 5%2;
//	//printf("%d\n", a);
//	int a = 15;
//	int b = a>>1;
//	//a = a<<1;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	//<< 移位操作符-移动的是二进制位
//	//原码-反码-补码
//	//00000000000000000000000000001111-原码-反码-补码相同
//	//00000000000000000000000000011110
//	//
//	//-1
//	//10000000000000000000000000000001-原码
//	//11111111111111111111111111111110-反码
//	//11111111111111111111111111111111-补码
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//int c = a&b;//按(二进制)位与
//	//011
//	//101
//	//001
//	//int c = a|b;//按(二进制)位或
//	//011
//	//101
//	//111
//	//int c = a^b;//按(二进制)位异或
//	//011
//	//101
//	//110
//	printf("%d\n", c);//
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
//
//int main()
//{
//	int a = 0;
//	//printf("%d\n", !a);//
//	printf("%d\n", ~a); //
//	//000000000000000000000000000000000
//	//111111111111111111111111111111111
//	//111111111111111111111111111111110
//	//100000000000000000000000000000001
//	//-1
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++,先使用，后++
//	//printf("%d\n", a);//11
//	//printf("%d\n", b);//10
//	//int b = ++a;//前置++,先++，后使用
//	//printf("%d\n", a);//11
//	//printf("%d\n", b);//11
//	int b = a--;//
//	printf("%d\n", a);//9
//	printf("%d\n", b);//10
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 1;
//	int b = (++a)+(++a)+(++a);
//	printf("%d\n", b);
//	//3
//	//6
//	//9
//	//
//	system("pause");
//	return 0;
//}
//
//int  main()
//{
//	//int a = (int)3.14;
//
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}
//
//
//
//int  main()
//{
//	int a = 0;
//	int b = 0;
//	int c = a||b;
//	printf("%d\n", c);
//	//a&b;
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	if(a>b)
//		max = a;
//	else
//		max = b;
//
//	max = (a>b)?(a):(b);
//	return 0;
//}
//
//int main()
//{
//	//int a = (1,2,3,4,5);
//	int a = 10;
//	int b = 2;
//	int c = 4;
//	int d = (a=b+c, b=c-a, c=c+b);
//
//	printf("%d\n", d);
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
//	//int arr[10] = {0};
//	//arr[4] = 5;//[] 下标引用操作符
//	//Add(2, 3);//() 函数调用操作符
//	return 0;
//}
//
//int main()
//{
//	auto int a = 10;
//
//	return 0;
//}


//声明外部符号
extern int g_val;

//register
// 
// int main()
// {
// 	//register int a = 10;//建议的作用
// 	signed int a = 10;//-10
// 	unsigned int b = -10;
// 	//10000000000000000000000000001010
// 	//11111111111111111111111111110101
// 	//11111111111111111111111111110110
// 	//
// 	//
// 	printf("%u\n", b);
// 	system("pause");
// 	return 0;
// }
// 
// typedef unsigned int uint;
// 
// typedef struct Node
// {
// 	int data;
// 	struct Node* next;
// } Node;
// 
// int main()
// {
// 	struct Node n;
// 	Node n1;
// 	unsigned int a = 10;
// 	uint b = 10;
// 
// 	return 0;
// }
//
//int main()
//{
//	//int _2b = 0;
//	//char firstname[20] = {0};
//	//char FirstName[20] = {0};
//	//char first_name[20] = {0};
//	//char First_Name[20];//
//
//	int i=0;
//	int j = 0;
//	for(i=0;i<10;i++)
//	{
//
//	}
//	for(i=0; i<10; i++)
//	{
//
//	}
//
//	return 0;
//}
//



