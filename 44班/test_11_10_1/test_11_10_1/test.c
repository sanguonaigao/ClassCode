#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

int is_leap_year(int year)
{
	return (year%4==0 && year%100!=0) || (year%400==0);
// 	if((year%4==0 && year%100!=0) || (year%400==0))	
// 	{
// 		return 1;
// 	}
// 	else
// 	{
// 		return 0;
// 	}
//}
// 
// int main()
// {
// 	//TDD-测试驱动开发
// 	int year = 0;
// 	for(year=1000; year<=2000; year++)
// 	{
// 		if(is_leap_year(year))
// 		{
// 			printf("%d ", year);
// 		}
// 	}
// 	return 0;
// }

//
//int is_prime(int n)//9
//{
//	//n是素数返回1, 不是素数返回0
//	int j = 0;
//	for(j=2; j<=sqrt(n); j++)
//	{
//		if(0 == n%j)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=100; i<=200; i++)
//	{
//		if(is_prime(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//
//void Swap1(int* p1, int* p2)
//{
//	int tmp = 0;
//	tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//
//void Swap2(int m, int n)
//{
//	int tmp = 0;
//	tmp = m;
//	m = n;
//	n = tmp;
//}
//
//
//int main()
//{
//	int x = 10;
//	int y = 20;
//	printf("x=%d y = %d\n", x, y);
//	Swap1(&x, &y);//传址调用
//	Swap2(x, y);  //传值调用
//
//	printf("x=%d y = %d\n", x, y);
//	return 0;
//}

//当时参数传给形参的时候
//形参是实参的一份临时拷贝
//对形参的修改,不会改变实参

//形参

//调试
//int main()
//{
//	int x = 10;
//	int y = 20;
//	//int tmp = 0;
//	printf("x = %d y = %d\n", x, y);
//	//实参
//	Swap(x, y);
//	//tmp = x;
//	//x = y;
//	//y = tmp;
//
//	printf("x = %d y = %d\n", x, y);
//
//	return 0;
//}
//函数
//int get_max(int m, int n)
//{
//	return (m>n?m:n);
//}
//
//int main()
//{
//	int x = 0;
//	int y = 20;
//
//	//int max = x>y?x:y;
//	int max = get_max(5+3, get_max(3,4));
//	printf("%d\n", max);
//	return 0;
//}
//
//VMWARE WORKSTATION
//.vmdk
//

// int main()
//{
//flag:
//	printf("hehe\n");
//	goto flag;
//	return 0;
//}
//
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// 
// int main()
// {
// 	char arr[] = "abcdefghi";
// 	memset(arr, 'q', 6);
// 	printf("%s\n", arr);
// 	return 0;
// }


//
//f(x) = 2*x+6;
//f(x, y) = x+y*10;
//
//
//NULL
//
//Null
//Nul
//NUL
//'\0'
//

//char *strcpy( char *strDestination, const char *strSource );
//
//int main()
//{
//	char arr[20] = "hhhhhhhhhhhhhh";
//	//"bit";
//	char arr2[] = {'b', 'i', 't', '\0'};
//	strcpy(arr, arr2);
//	printf("%s\n", arr);
//	//int a = 0;
//	//int* p = NULL;
//	return 0;
//}

//
//void test()
//{
//flag:
//	printf("hello bit\n");
//}
//
//int main()
//{
//	printf("hehe\n");
//	goto flag;
//	return 0;
//}
//
//int main()
//{
//	//shutdown -s -t 60
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//	//
//	while(1)
//	{
//		printf("电脑在1分钟后关进,如果输入:我是猪,就取消关机\n");
//		scanf("%s", input);
//		if(strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}

//
//int main()
//{
//	//shutdown -s -t 60
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//	//
//again:
//	printf("电脑在1分钟后关进,如果输入:我是猪,就取消关机\n");
//	scanf("%s", input);
//	if(strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


