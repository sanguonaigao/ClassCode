#define _CRT_SECURE_NO_WARNINGS 1



// 1. 交换两个整型变量的值

#include <stdio.h>
//
//int main()
//{
//	int num1 = 3;//int 整型的大小4个字节 == 32bit == 
//	int num2 = 5;
//
//	//异或 ^
//	printf("num1 = %d num2 = %d\n", num1, num2);
//	num1 = num1^num2;
//	num2 = num1^num2;//2
//	num1 = num1^num2;//3
//
//	//011 -num2
//	//101 -num1
//	//110 -
//	//
//
//	//异或 -- 按（2进制）位异或
//	//对应的二进制位如果相同，结果是0
//	//                  相异，结果是1
//	//num1 = 3
//	//011
//	//num2 = 5
//	//101
//	printf("num1 = %d num2 = %d\n", num1, num2);
//
//	//有没有可能存在问题?
//	//printf("num1 = %d num2 = %d\n", num1, num2);
//	//num1 = num1+num2;
//	//num2 = num1-num2;//30-20
//	//num1 = num1-num2;//30-10
//	//* / --  num1 和 num2 != 0
//	//printf("num1 = %d num2 = %d\n", num1, num2);
//
//	//int tmp = 0;//创建了一个临时变量
//	//printf("num1 = %d num2 = %d\n", num1, num2);
//	//tmp = num1;//num1-->tmp
//	//num1 = num2;
//	//num2 = tmp;
//	//printf("num1 = %d num2 = %d\n", num1, num2);
//
//	return 0;
//}
//
//int main()
//{
//	//一组数
//	int arr[] = {1,2,3,4,1,2,3,4,5,6,5};
//	//1. 遍历数组找出每个元素
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);//计算数组元素个数 9
//	for(i=0; i<sz; i++)
//	{
//		//2. 拿arr[i]和数组的每个元素再次比较，计算arr[i]出现的次数
//		int j = 0;
//		int count = 0;//计数器
//		for(j=0; j<sz; j++)
//		{
//			if(arr[i] == arr[j])
//				count++;
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
//	int arr[] = {1,2,3,4,5,1,2,3,4};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i = 0;
//	int ret = 0;
//	for(i=0; i<sz; i++)
//	{
//		ret = ret^arr[i];
//	}
//	printf("%d\n", ret);
//	//3^3
//	//011
//	//011
//	//000
//	//
//	//0^a = a
//	//000
//	//011
//	//011
//	return 0;
//}
//cmd = command
//shutdown -s -t 60 //60秒后关机
//shutdown -a //取消关机


#include <stdlib.h>
#include <string.h>

int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");//系统函数-执行系统命令	
again:
	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", input);//"我是猪"-字符串
	if(strcmp(input, "我是猪") == 0)//两个字符串的比较-strcmp
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}

