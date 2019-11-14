#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//
//void menu()
//{
//	printf("****************************\n");
//	printf("*********   1. play   ******\n");
//	printf("*********   0. exit   ******\n");
//	printf("****************************\n");
//}
////RAND_MAX
////0-32767
//
//void game()
//{
//	//1. 生成随机数
//	int guess = 0;
//	int ret = 0;
//	ret = rand()%100+1;
//	//printf("%d\n", ret);
//	//2. 猜数字
//	while(1)
//	{
//		printf("请输入要猜的数字:>");
//		scanf("%d", &guess);
//		if(guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if(guess > ret)
//		{
//			printf("猜大了\n");
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
//
//	do 
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			game();
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


//int main()
//{
//again:
//	printf("hehe\n");
//	printf("hehe\n");
//	goto again;
//	return 0;
//}

#include <string.h>
//
//int main()
//{
//	char input[20] ={0};
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	if(strcmp(input, "我是猪") == 0)//string compare
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//
//int main()
//{
//	char input[20] ={0};
//	system("shutdown -s -t 60");
//	while(1)
//	{
//		printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//		scanf("%s", input);
//		if(strcmp(input, "我是猪") == 0)//string compare
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}
//
//void test()
//{
//	printf("test\n");
//}
//int main()
//{
//again:
//	printf("hehe\n");
//	goto again;
//	return 0;
//}
//f(x) = 2*x+1;
//f(x, y) = x+y;
//NULL

//NUL-'\0'
//null-'\0'


//int main()
//{
//	//int a = 0;
//	//int *p = NULL;
//	char arr1[20] = "#######";
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);//bit
//	return 0;
//}

//memory 
//memset
//
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//
//	return 0;
//}
//
//int get_max(int x, int y)
//{
//	if(x>y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max = %d\n", max);//20
//	max = get_max(30+1, get_max(40, 3));
//	printf("max = %d\n", max);//20
//	return 0;
//}

//形式参数
//void Swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//void Swap2(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("a = %d b = %d\n", a, b);
//	//
//	//把实参传递给形参
//	//形参是实参的一份临时拷贝
//	//对形参的修改不会影响实参
//	//
//	//实际参数
//	Swap1(a, b);
//	Swap2(&a, &b);
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//a = 20;
//	*p = 20;
//	return 0;
//}
#include <math.h>
//
//int is_prime(int i)
//{
//	int j = 0;
//	for(j=2; j<=sqrt(i); j++)
//	{
//		if(i%j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=101; i<=200; i+=2)
//	{
//		//判断i是否为素数
//		if(1 == is_prime(i))//TDD--测试驱动开发
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//int is_leap_year(int y)
//{
//	if(((y%4==0)&&(y%100!=0))||(y%400==0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int is_leap_year(int y)
//{
//	return (((y%4==0)&&(y%100!=0))||(y%400==0));
//}
//
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for(y=1000; y<=2000; y++)
//	{
//		if(1 == is_leap_year(y))
//		{
//			count++;
//			printf("%d ", y);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz-1;
//
//	while(left<=right)
//	{
//		int mid = (left+right)/2;
//		if(arr[mid]>k)
//		{
//			right = mid-1;
//		}
//		else if(arr[mid]<k)
//		{
//			left = mid+1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//
//	int ret = binary_search(arr, k, sz);
//	if(ret == -1)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//
//	return 0;
//}
//
//void Add(int *p)
//{
//	(*p)++;
//}
//
//int Add(int n)
//{
//	n++;
//	return n;
//}
//
//int main()
//{
//	int num = 0;
//	//Add(&num);
//	num = Add(num);
//	printf("%d\n", num);
//	//Add(&num);
//	num = Add(num);
//	printf("%d\n", num);
//	return 0;
//}
//
//int main()
//{
//	int len = strlen("bit");
//	printf("%d\n", len);//3
//
//	printf("%d\n", strlen("bit"));
//	return 0;
//}

//int  main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//
//	return 0;
//}


#include "add.h"

//导入静态库
#pragma comment(lib, "add.lib")

int main()
{
	int a = 10;
	int b = 20;
	int ret = Add(a, b);
	printf("%d\n", ret);
	return 0;
}






