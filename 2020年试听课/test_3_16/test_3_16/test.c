#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//stdio.h std input output 

//main 函数 - 主函数 - 程序的入口
//
// int main()
// {
// 	//printf - print function - 打印函数 - 输出函数
// 	//库函数-引入头文件
// 	printf("hello world\n");
// 	return 0;
// }


//交换2个整数的值
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//int c = 0;//空瓶
//	//3. 异或法
//	//异或 - 按（2进制）位异或
//	//规则：相同为0，相异以1
//	//
//	printf("a = %d b = %d\n", a, b);
//	a = a^b;//1
//	b = a^b;//2
//	a = a^b;//3
//
//	//011-b
//	//101-a
//	//110
//	printf("a = %d b = %d\n", a, b);
//	//2. 加减法
//	//问题：溢出
//	//int - 4字节-32bit - 整型变量有上限
///*
//	printf("a = %d b = %d\n", a, b);
//	a = a+b;
//	b = a-b;
//	a = a-b;
//	printf("a = %d b = %d\n", a, b);
//*/
//	//1. 临时变量的方法
//	/*printf("a = %d b = %d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("a = %d b = %d\n", a, b);*/
//
//	return 0;
//}

//
//int main()
//{
//	int arr[] = {1,2,3,4,5,1,2,3,4};
//	//2. 异或法
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=0; i<sz; i++)
//	{
//		ret = ret^arr[i];
//	}
//	printf("%d\n", ret);
//	//3^3^5 = 5
//	//
//	//3^3 = 0
//	//011
//	//011
//	//000
//	//0^5 = 5
//	//000
//	//101
//	//101
//	//
//	//1. 暴力求解法
//	//找出只出现一次的数字
//// 	int i = 0;
//// 	int sz = sizeof(arr)/sizeof(arr[0]);
//// 	for(i=0; i<sz; i++)
//// 	{
//// 		//统计arr[i]中数字在arr数组中出现的次数
//// 		int j = 0;
//// 		int count = 0;//计数器
//// 		for(j=0; j<sz; j++)
//// 		{
//// 			if(arr[i] == arr[j])
//// 			{
//// 				count++;
//// 			}
//// 		}
//// 		if(count == 1)
//// 		{
//// 			printf("%d\n", arr[i]);
//// 			break;
//// 		}
//// 	}
//	return 0;
//}


#include <stdlib.h>
#include <string.h>

int main()
{
	//关机程序
	//命令关机
	//cmd - command - 命令
	char input[20] = {0};
	system("shutdown -s -t 60");//执行系统命令
again:
	printf("请注意，你的电脑在1分钟后关机，如果输入我是猪，就取消关机\n");
	printf("请输入:>");
	scanf("%s", input);
	if(strcmp(input, "我是猪") == 0)//字符串比较-strcmp()
	{
		system("shutdown -a");//取消关机
	}
	else
	{
		goto again;
	}

	return 0;
}