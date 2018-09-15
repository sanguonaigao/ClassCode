//#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//标识符常量
//#define MAX 10

extern int g_val;
extern void test();

int main()
{
	//static int a;
	int x = 1;
	int y = 2;
	int c = x+y;

	printf("%d\n", c);
	return 0;
}
//
//int main()
//{
//	test();
//	//printf("%d\n", g_val);
//	return 0;
//}
//作用域
//生命周期

//局部变量---
//static修饰的局部变量---
//
//void test()
//{
//	static int a = 0;	
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		test();
//	}
//	return 0;
//}
//
//void test()
//{
//	int a = 10;
//	//..
//	//..
//
//}
//int main()
//{
//	printf("a = %d\n", a);
//
//	return 0;
//}

//int main()
//{
//	//num = 10;
//	//int num = 10;
//	//num = 20;
//	//printf("%p\n", &num);
//	volatile const int num = 10;
//
//	int *p = (int *)&num;
//	*p = 20;
//
//	printf("%d\n", num);
//	return 0;
//}


//typedef unsigned int uint;
//
//int main()
//{
//	unsigned int num = 0;
//	uint num = 0;
//
//	return 0;
//}
//声明外部符号
//extern int g_val;
//
//int main()
//{
//	//int float;//
//
//	//建议
//	register int i = 0;
//
//	for(i=0; i<100; i++)
//	{
//
//	}
//	//int num = 10;
//	printf("%d\n", g_val);
//	return 0;
//}
//

// int main()
// {
// 	int weight = 0;
// 	int n = 0;
// 	return 0;
// }
//
//enum Sex
//{
//	MALE=7,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	//3.14;
//	//15;
//	const int num = 10;
//	int n = 10;
//	int arr[MAX] = {0};
//	//num = 20;
//	return 0;
//}
// int main()
// {
// 	printf("hehe\n");
// 	return 0;
// }


// 
// int main()
// {
// 	int year=0;
// 	int count = 0;
// 	for(year=1000; year<=2000; year++)
// 	{
// 		if((year%4==0 && year%100!=0) || (year%400==0))
// 		{
// 			count++;
// 			printf("%d ", year);
// 		}
// // 		//判断year是否为闰年
// // 		if(year%4==0)
// // 		{
// // 			if(year%100!=0)
// // 			{
// // 				count++;
// // 				printf("%d ", year);
// // 			}
// // 		}
// // 		if(year%400==0)
// // 		{
// // 			count++;
// // 			printf("%d ", year);
// // 		}
// // 		
// 	}
// 	printf("\ncount = %d\n", count);
// 	return 0;
// }

//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//....
// 
// int main()
// {
// 	int i = 0;
// 	for(i=1; i<=9; i++)
// 	{
// 		//打印一行
// 		int j = 0;
// 		for(j=1; j<=i; j++)
// 		{
// 			printf("%d*%d=%-2d ", i, j, i*j);
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }
// 
//
//《素数求解的n中境界》
//
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=101; i<=200; i+=2)
//	{
//		//判断i是否为素数
//		int j = 0;
//		for(j=2; j<=sqrt(i); j++)
//		{
//			if(i%j == 0)
//				break;
//		}
//		if(j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

// 
// int main()
// {
// 	//int num = 0;
// 	//scanf("%d", &num);
// 	//printf("%d\n", num);
// 	char arr[4] = {0};
// 	scanf("%s", arr);
// 	printf("%s\n", arr);
// 	return 0;
// }
// 
// 
// int main()
// {
// 	//printf("hello world\n");
// 	//getchar();
// 	//system("pause");
// 	return 0;
// }
// 
// 

