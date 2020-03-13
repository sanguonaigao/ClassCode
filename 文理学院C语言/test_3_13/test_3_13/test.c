#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	//实现算法
//	//求 5！
//	int t = 1;
//	int i = 2;
//
//	while(i<=5)
//	{
//		t = t*i;//1
//		i = i+1;//2
//	}
//
//	printf("t = %d\n", t);
//	return 0;
//}
//
//int main()
//{
//	double sum = 1.0;
//	int deno = 2;
//	int sign = 1;
//	double term = 0.0;
//
//	while(deno<=100)
//	{
//		sign = sign*(-1);
//		term = sign*(1.0/deno);
//		sum = sum+term;
//		deno = deno+1;
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}
//
//int main()
//{
//	//判断素数
//	//判断n是否为素数
//	//2->n-1
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	//产生 2->n-1去试除n
//	for(i=2; i<n; i++)
//	{
//		if(n%i==0)
//		{
//			break;
//		}
//	}
//	//1,2
//	if(i<n)
//		printf("%d不是素数\n", n);
//	else
//		printf("%d是素数\n",  n);
//
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		if(i==5)
//			continue;//跳过本次循环，continue后边的代码，直接到for循环的调整部分
//
//		//if(i == 5)
//		//	break;//终止循环
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//
//关机程序
//运行程序，你的电脑在1分钟后就关机，如果输入：我是猪，取消关机
//cmd - command - 命令

#include <stdlib.h>
#include <string.h>

int main()
{
	char input[20] = {0};//存放接收的输入
	//1. 定时关机
	system("shutdown -s -t 60");//执行系统命令的
	//2. 输入：我是猪
again:
	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", input);//输入
	if(strcmp(input, "我是猪") == 0)//两个字符串的比较-strcmp()
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}

