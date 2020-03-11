#define _CRT_SECURE_NO_WARNINGS 1


//写出主函数

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//1. 关机
	//shutdown -s -t 60 //设置时间关机
	//2. 提示输入：我是猪
	char input[20];//创建一个字符数组，用来存储：我是猪
	system("shutdown -s -t 60");//执行系统命令
again:
	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", input);//
	//3. 判断输入的正确性
	if(strcmp(input, "我是猪") == 0)//strcmp专门是用来比较两个字符串的大小的	
	{
		system("shutdown -a");
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
//	int arr[] = {1,2,3,4,5,1,2,3,4};//9 0-8
//	//方法2
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);//计算数组的元素个数
//	for(i=0; i<sz; i++)
//	{
//		ret = ret^arr[i];
//	}
//	printf("ret = %d\n", ret);
//	//
//	//3 5 3
//	//1 2 5 1 2
//	//
//
//	//3^3
//	//011
//	//011
//	//000
//	//0^5
//	//000
//	//101
//	//101-5
//	//
//	//暴力求解
//	//int i = 0;
//	//int sz = sizeof(arr)/sizeof(arr[0]);//9
//	//for(i=0; i<sz; i++)
//	//{
//	//	//统计arr[i]这个值，在数组中出现的次数
//	//	int j = 0;
//	//	int count = 0;//计数器
//	//	for(j=0; j<sz; j++)
//	//	{
//	//		if(arr[i] == arr[j])
//	//		{
//	//			count++;
//	//		}
//	//	}
//	//	if(count == 1)
//	//	{
//	//		printf("%d\n", arr[i]);
//	//		break;
//	//	}
//	//}
//	return 0;
//}
//
//int main()
//{
//	//printf - 库函数- 打印
//	//printf("呵呵\n");
//
//	
//	//交换2个整型变量，但是不能使用临时变量
//	//方法1
//	/*
//	empty = num1;
//	num1 = num2;
//	num2 = empty;
//	*/
//
//    //方法2
//	//int - 整型 - 4字节 - 32bit - 32个二级制位
//	//最大值
//	//
//	//long 
//	//long long
//	//long long long - 不存在
//	//
//	//num1 = num1+num2;//num1 = 30 num2 = 20
//	//num2 = num1-num2;//num1 = 30 num2 = 10
//	//num1 = num1-num2;//num1 = 20 num2 = 10
//	//
//	//方法3
//	//异或操作- 按(2进制)位异或
//	//异或的计算方法：
//	//对应的二进制位如果相同，异或则为0
//	//对应的二进制位如果相异，异或则为1
//	int num1 = 3;//酱油
//	int num2 = 5;//醋
//	int empty = 0;
//
//	printf("num1 = %d num2 = %d\n", num1, num2);
//	//011 - num2
//	//101 - num1
//	//110 - 
//
//	num1 = num1^num2;//1
//	num2 = num1^num2;//2
//	num1 = num1^num2;//3
//
//	printf("num1 = %d num2 = %d\n", num1, num2);
//	//ctrl+F5
//	return 0;
//}
