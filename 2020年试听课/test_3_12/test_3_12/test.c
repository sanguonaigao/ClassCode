#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//关机程序
//cmd - command - 命令行

int main()
{
	char input[20] = {0};//用来存放输入的信息
	//执行关机命令
	system("shutdown -s -t 60");//执行系统命令的
again:
	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
	printf("请输入:>");
	scanf("%s", input);
	if(strcmp(input, "我是猪") == 0)//判断两个字符串是否相等-strcmp()
	{
		system("shutdown -a");//取消关机
	}
	else
	{
		goto again;
	}
	return 0;
}



//
//int main()
//{
//	int arr[] = {1,2,3,4,5,1,2,3,4,6,5};
//	//数数字-暴力求解
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);//计算数组元素个数
//	for(i=0; i<sz; i++)
//	{
//		int count = 0;
//		int j = 0;
//		for(j=0; j<sz; j++)
//		{
//			if(arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if(count == 1)
//		{
//			printf("%d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}

//
//int main()
//{
//	int num1 = 3;//int sizeof(int)-4字节-最大值
//	int num2 = 5;
//
//	//3. 异或 - 位运算
//	printf("num1 = %d num2 = %d\n", num1, num2);
//	num1 = num1^num2;//1
//	num2 = num1^num2;//2
//	num1 = num1^num2;//3
//
//	//
//	//异或-按2进制位异或
//	//规则：相同为0，相异为1
//	//011-num2
//	//101-num1
//	//110-
//
//	printf("num1 = %d num2 = %d\n", num1, num2);
//
//	//2. 加减法-溢出问题
//	//printf("num1=%d num2=%d\n", num1, num2);
//	//num1 = num1+num2;//num1=30 num2=20
//	//num2 = num1-num2;//num1=30 num2=10
//	//num1 = num1-num2;
//	//printf("num1=%d num2=%d\n", num1, num2);
//
//	//1.
//	//int num3 = 0;
//	//printf("num1=%d num2=%d\n", num1, num2);
//	//num3 = num1;
//	//num1 = num2;
//	//num2 = num3;
//	//printf("num1=%d num2=%d\n", num1, num2);
//
//	return 0;
//}
// 
// int main()
// {
// 	//实现
// 	//printf - print function - 打印函数-库函数
// 	//
// 	printf("hello world");
// 	return 0;
// }
// 

