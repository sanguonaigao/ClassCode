#define _CRT_SECURE_NO_WARNINGS 1

//include -- 包含/引入
#include <stdio.h>
//stdio -- standard input output
//标准输入输出头文件
//int 表示main函数的返回类型-int-整数

//int main()     //main-主函数-程序的入口-有且仅有一个
//{	
//	//完成功能都在这里
//	/*
//	printf("hehe\n");//printf -- print function - 打印函数
//	printf("郭强\n");
//	*/
//	return 0;//表示返回0,0是整数
//}

//注释


//int main()
//{
//	//定义两个数(变量)
//	int num1 = 10;//常见一个整型变量
//	int num2 = 20;//
//	int sum = 0;
//	sum = num1+num2;
//	printf("sum is %d\n", sum);
//	//3+5 = 8;
//	return 0;
//}

//函数
//f(x) = x+x;
//f(x,y) x+y;

int main()
{
	//求两个数的较大值
	int num1 = 100;
	int num2 = 20;

	if(num1>num2)
		printf("较大值是：%d\n", num1);
	else
		printf("较大值是：%d\n", num2);

	return 0;
}



