#define _CRT_SECURE_NO_WARNINGS 1

//
//把 VS2013 - IDE - 集成开发环境
//

//#include - 包含 - 预处理指令
#include <stdio.h>

//全局变量 - 全局声明
//int g_val = 2000;

//main函数-函数的声明
// int main()
// {
// 	//创建/定义解题所需要的几个变量
// 	int a = 0
// 	int b = 0;
// 	int max = 0;
// 	//声明一下函数-告诉我们有一个函数叫：Max.他的参数类型是int,int;函数的返回值类型也是int
// 	int Max(int x, int y);
// 	
// 	//输入语句-格式
// 	scanf("%d%d", &a, &b);//printf
// 	//借助于函数来完成
// 	max = Max(a, b);//函数的调用，函数调用的返回值存放到了max
// 	printf("max = %d\n", max);//打印max的值
// 	return 0;
// }


int main()
{
	//两个整数的相加
	//描述数据 - 数据结构 - 链表+顺序表+二叉树+栈和队列+红黑树
	int a = 10;
	int b = 20;
	//
	int sum = 0;//
	//对数据的操作 - 算法
	sum = a+b;

	return 0;
}