//#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//2 1 3
//	//算法实现
//	//a中放最大值
//	//b次之
//	//c中放最小值
//	if(a<b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if(a<c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if(b<c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//
// 
// int main()
// {
// 	int i = 0;
// 	for(i=1; i<=100; i++)
// 	{
// 		if(i%3 == 0)
// 			printf("%d ", i);
// 	}
// 	return 0;
// }

//
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d", &m ,&n);
//	while(r=m%n)
//	{
//		//r = m%n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//
//int main()
//{
//	int year = 0;	
//	int count = 0;
//	for(year=1000; year<=2000; year++)
//	{
//		//判断year是否为闰年
//		//1. 能被4整除并且不能被100整除是闰年
//		//2. 能被400整除是闰年
//		//if(year%4==0 && year%100!=0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		//else if(year%400==0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		if(((year%4==0)&&(year%100!=0))||(year%400==0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=100; i<=200; i++)
//	{
//		//判读i是否为素数
//		//素数判断的规则
//		//1. 试除法
//		//产生2->i-1
//		int j = 0;
//		for(j=2; j<i; j++)
//		{
//			if(i%j == 0)
//			{
//				break;
//			}
//		}
//		if(j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//sqrt - 开平方的数学库函数
//	for(i=100; i<=200; i++)
//	{
//		//判读i是否为素数
//		//素数判断的规则
//		//1. 试除法
//		//产生2->i-1
//		int j = 0;
//		for(j=2; j<=sqrt(i); j++)
//		{
//			if(i%j == 0)
//			{
//				break;
//			}
//		}
//		if(j>sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//sqrt - 开平方的数学库函数
//	for(i=101; i<=200; i+=2)
//	{
//		//判读i是否为素数
//		//素数判断的规则
//		//1. 试除法
//		//产生2->i-1
//		int j = 0;
//		for(j=2; j<=sqrt(i); j++)
//		{
//			if(i%j == 0)
//			{
//				break;
//			}
//		}
//		if(j>sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//
// <素数求解的n种境界>
// 

//
//
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) 
//			break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b-5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
////
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=1; i<=100; i++)
//	{
//		if(i%10 == 9)
//			count++;
//		if(i/10 == 9)
//			count++;
//	}
//	//9 19 29 39 .. 99 - 10
//	//90 91 92 .... 99 - 10
//	//
//	printf("count = %d\n", count);
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for(i=1; i<=100; i++)
//	{
//		sum += flag*1.0/i;
//		flag = -flag;
//	}
//	//1/1+1/2+1/3...
//	//1+0+0+0.. = 1
//	printf("%lf\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
//	int max = arr[0];//最大值
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=1; i<sz; i++)
//	{
//		if(arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

//
//在屏幕上输出9*9乘法口诀表
//
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//4*1=4 .....
//....
//9*1=9 ....
//
//int main()
//{
//	int i = 0;
//	//确定打印9行
//	for(i=1; i<=9; i++)
//	{
//		//打印一行
//		int j = 1;
//		for(j=1; j<=i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//猜数字游戏
//1. 电脑会生成一个随机数
//2. 猜数字
#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("**********************************\n");
//	printf("****   1. play    0.exit      ****\n");
//	printf("**********************************\n");
//}
//
////RAND_MAX-32767
//
//void game()
//{
//	//1. 生成一个随机数
//	int ret = 0;
//	int guess = 0;//接收猜的数字
//	//拿时间戳来设置随机数的生成起始点
//	//time_t time(time_t *timer)
//	//time_t
//	ret = rand()%100+1;//生成1-100之间随机数
//	//printf("%d\n", ret);
//	//2. 猜数字
//	while(1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if(guess>ret)
//		{
//			printf("猜大了\n");
//		}
//		else if(guess<ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do 
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			game();//猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//
//int main()
//{
//	printf("hello bit\n");
//	goto again;
//	printf("你好\n");
//again:
//	printf("hehe\n");
//	return 0;
//}

#include <string.h>
//
//int main()
//{
//	char input[20] = {0};
//	//shutdown -s -t 60
//	//system()- 执行系统命令的
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入:我是猪，就取消关机\n请输入>:");
//	scanf("%s", input);
//	if(strcmp(input, "我是猪") == 0)//比较两个字符串-strcmp()
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


int main()
{
	//char input[20] = {0};
	////shutdown -s -t 60
	////system()- 执行系统命令的
	//system("shutdown -s -t 60");
	//while(1)
	//{
	//	printf("请注意，你的电脑在1分钟内关机，如果输入:我是猪，就取消关机\n请输入>:");
	//	scanf("%s", input);
	//	if(strcmp(input, "我是猪") == 0)//比较两个字符串-strcmp()
	//	{
	//		system("shutdown -a");
	//		break;
	//	}
	//}
	char arr[10] = {0};
	scanf("%s", arr);
	return 0;
}