#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//
//int main()
//{
//	int i = 101;
//	int count = 0;
//	while(i<=200)
//	{
//		//printf("%d ", i);
//		//判断i是否为素数
//		int j = 2;
//		while(j<=sqrt(i))
//		{
//			if(i%j == 0)
//			{
//				break;
//			}
//			j++;
//		}
//		//1,2
//		if(j>sqrt(i))//素数
//		{
//			printf("%d ", i);
//			count++;
//		}
//		i+=2;
//	}
//	printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}
//素数求解的N种境界
//
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//....
//
//int main()
//{
//	int i = 0;
//	for(i=1; i<=9; i++)
//	{
//		//打印一行
//		int j = 0;
//		for(j=1; j<=i; j++)
//		{
//			//打印一项
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for(year=1000; year<=2000; year++)
//	{
//		if((year%4==0 && year%100!=0) || (year%400==0))
//		{
//			printf("%d ", year);
//		}
//		//if(year%4==0)
//		//{
//		//	if(year%100 != 0)
//		//	{
//		//		printf("%d ", year);
//		//	}
//		//}
//		//if(year%400==0)
//		//{
//		//	printf("%d ", year);
//		//}
//	}
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int tmp = 0;//空瓶
//	printf("a = %d b = %d\n", a, b);
//	/*tmp = a;
//	a = b;
//	b = tmp;*/
//
//	/*a = a+b;
//	b = a-b;
//	a = a-b;*/
//	//a=3
//	//b=5
//	//011-b
//	//101-a
//	//110
//	a = a^b;
//	b = a^b;
//	a = a^b;
//
//	printf("a = %d b = %d\n", a, b);
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int arr[] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
//	int max = arr[0];
//	int i = 0;
//	for(i=1; i<10; i++)
//	{
//		if(arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	system("pause");
//	return 0;
//}
//

//当实参传给形参的时候
//形参是实参的一份的临时拷贝
//所以对形参的修改，不会改变实参

//形参
//void Swap(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//
//	if(a<b)
//	{
//		//实参
//		Swap(&a, &b);
//	}
//	if(a<c)
//	{
//		Swap(&a, &c);
//	}
//	if(b<c)
//	{
//		Swap(&b, &c);
//	}
//
//	printf("%d %d %d\n", a, b, c);
//	//printf("%d %d %d\n", a, c, b);
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	*p = 20;
//	printf("a = %d\n", a);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 18;
//	int b = 24;
//
//	int c = 0;
//	while(c=a%b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("b = %d\n", b);
//	system("pause");
//	return 0;
//}
//

// int main()
// {
// 	int i = 1;//初始化
// 
// 	while(i<=10)//判断
// 	{
// 		printf("%d ", i);
// 		i++;//调整
// 	}
// 	system("pause");
// 	return 0;
// }
//
//int main()
//{
//	int i = 0;
//	for(i=1; i<=10; i++)
//	{
//		if(i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}
//
//
//
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for(i=0; i<=12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//
//	//<C陷阱和缺陷>
//
//// 	int i = 0;
//// 	for(i=0; i<10; i++)
//// 	{
//// 		printf("%d\n", i);
//// 		i += 5;
//// 	}
//	system("pause");
//	return 0;
//}
//
//

//
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	for(i=0; i<=9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//// 	for(;;)
//// 	{
//// 		printf("hehe\n");
//// 	}
//// 	int i = 0;
//// 	for(; i<10; i++)
//// 	{
//// 		printf("%d ", i);
//// 	}
//	int i = 0;
//	int j = 0;
//	for(; i<10; i++)
//	{
//		for(; j<10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int x=0;
//	int y=0;
//	for (x = 0, y = 0; y<5, x<2; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	system("pause");
//}
//
//int main()
//{
//	int i = 1;
//	do
//	{
//		if(i==5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	while(i<=10);
//	system("pause");
//	return 0;
//}
//
//
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	//1 2 6 = 9
//	for(n=1; n<=3; n++)
//	{
//		i = 1;
//		ret = 1;
//		while(i<=n)
//		{
//			ret *= i;
//			i++;
//		}
//		sum += ret;
//	}
//	
//	printf("sum = %d\n", sum);
//	system("pause");
//	return 0;
//}


//
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	//1 2 6 = 9
//	for(n=1; n<=3; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//
//	printf("sum = %d\n", sum);
//	system("pause");
//	return 0;
//}