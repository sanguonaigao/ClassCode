#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//
//	if(n<=2)
//		return 1;
//	else
//	{
//		int i = 0;
//		for(i=2; i<n; i++)
//		{
//			c = a+b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//}
//
//
//CVTE--
//
//arr[1000] = {1,1,2,3,5,...};
//
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	int i = 0;
//
//	for(i=2; i<n; i++)
//	{
//		c = a+b;
//		a = b;
//		b = c;
//	}
//	return c;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", fib(n));
//}
//
//int count = 0;
//
//int fib(int n)
//{
//	if(n == 3)
//		count++;
//	if(n<=2)
//		return 1;
//	else
//		return fib(n-1) + fib(n-2);
//}
//int main()
//{
//	//50
//	//49 48
//	//48 47 47 46
//	//47 46 46 45 46 45 45 44
//	//
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d\n", ret);
//	printf("count = %d\n", count);
//
//	return 0;
//}


//1 1 2 3 5 8 13 21 34 55 ...


// 
// int fac(int n)
// {
// 	if(n<=1)
// 		return 1;
// 	else
// 		return n*fac(n-1);
// }
// 
// int main()
// {
// 	int n = 0;
// 	int ret = 0;
// 
// 	scanf("%d", &n);//3
// 	ret = fac(n);
// 
// 	printf("ret = %d\n", ret);
// 	return 0;
// }
//
//void test(int n)
//{
//	if(n<10000)
//		test(n+1);
//}
//
//int main()
//{
//	test(1);
//	return 0;
//}
//
//void print(int n)
//{
//	if(n>9)
//		print(n/10);
//	printf("%d ", n%10);
//}
//
//int main()
//{
//	//栈溢出
//	int num = 0;
//	scanf("%d", &num);//1234
//	print(num);//1234
//	/*print(1234)
//	print(123) 4
//	print(12) 3 4
//	print(1) 2 3 4*/
//
//	return 0;
//}
// int main()
// {
// 	main();
// 	return 0;
// }


//
//#include <stdio.h>
//#include "add.h"
//#include "add.h"
//#include "add.h"
//#include "add.h"
//
//
//#pragma comment(lib, "add.lib")
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("ret = %d\n", ret);
//	return 0;
//}



// void Init(int arr[],int sz, int set)
// {
// 	int i = 0;
// 	for(i=0; i<sz; i++)
// 	{
// 		arr[i] = set;
// 	}
// }
// 
// void Print(int* arr, int sz)
// {
// 	int i = 0;
// 	for(i=0; i<sz; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 	printf("\n");
// }
// 
// void Empty(int arr[], int sz)
// {
// 	int i = 0;
// 	for(i=0; i<sz; i++)
// 	{
// 		arr[i] = 0;
// 	}
// }
// void Reverse(int arr[], int sz)
// {
// 	int left = 0;
// 	int right = sz-1;
// 
// 	while(left<right)
// 	{
// 		int tmp = arr[left];
// 		arr[left] = arr[right];
// 		arr[right] = tmp;
// 		left++;
// 		right--;
// 	}
// }
// 
// int main()
// {
// 	int arr[] = {11,3,5,7,9,2,4,6,8,0, 1};
// 	int sz = sizeof(arr)/sizeof(arr[0]);
// 
// 	//Init(arr, sz, 1);
// 	//Print(arr, sz);
// 	//Empty(arr, sz);
// 	Print(arr, sz);
// 	Reverse(arr, sz);
// 	Print(arr, sz);
// 
// 	//
// 	//1 2 3 4 5 6 7 8 9 10
// 	//
// 	return 0;
// }
//
//void print_table(int n)
//{
//	int i = 0;
//	for(i=1; i<=n; i++)
//	{
//		//打印一行
//		int j = 0;
//		for(j=1; j<=i; j++)
//		{
//			printf("%d*%d=%2d ",i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);//
//	print_table(line);
//	return 0;
//}
//
