#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);//7
//	//打印上半部分
//	for(i=0; i<line; i++)
//	{
//		//打印一行
//		//1. 打印空格
//		int j = 0;
//		for(j=0; j<line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//2. 打印*
//		for(j=0; j<2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for(i=0; i<line-1; i++)
//	{
//		//打印一行
//		//1. 空格
//		int j = 0;
//		for(j=0; j<=i; j++)
//		{
//			printf(" ");
//		}
//		//2. *
//		for(j=0; j<2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//

#include <math.h>

int main()
{
int i = 0;
for(i=0; i<=999999; i++)
{
	//判断i是否为水仙花数
	//1. 求位数
	//123
	int count = 1;
	int tmp = i;
	int sum = 0;

	while(tmp/10)
	{
		count++;
		tmp = tmp/10;
	}
	//2. 计算次方和
	tmp = i;
	
	while(tmp)
	{
		sum += pow(tmp%10, count);
		tmp = tmp/10;
	}
	//3. 判断
	if(sum == i)
	{
		printf("%d ", i);
	}
}
return 0;
}
