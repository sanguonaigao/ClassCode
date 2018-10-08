#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int arr[3][4] = {1,2,3,4};
	int i = 0;
	int j = 0;
	for(i=0; i<3; i++)
	{
		//
		for(j=0; j<4; j++)
		{
			//printf("%d ", arr[i][j]);
			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
		}
		//printf("\n");
	}
	//int arr1[3][4] = {{1,2}, {4,5}};
	//int arr2[][4] = {{1,2}, {4,5}};

	return 0;
}
// 
// int main()
// {
// 	int arr[10] = {0};
// 	int i = 0;
// 	int sz = sizeof(arr)/sizeof(arr[0]);
// 	for(i=0; i<sz; i++)
// 	{
// 		arr[i] = i;
// 	}
// 	for(i=0; i<sz; i++)
// 	{
// 		//printf("%d ", arr[i]);
// 		printf("%d ", *(arr+i));
// 	}
// // 	for(i=0; i<sz; i++)
// // 	{
// // 		printf("&arr[%d] = %p\n",i, &arr[i]);
// // 	}
// // 	printf("---------------------------------\n");
// // 	for(i=0; i<sz; i++)
// // 	{
// // 		printf("arr+%d = %p\n",i, arr+i);
// // 	}
// 	return 0;
// }
// 
// 
// int main()
// {
// 	//int arr[] = {1,2,3,4,5,6,7,8,9,0, -1};
// 	//char arr2[] = "abcde";
// 	//char arr3[] = {'a', 'b', 'c', 'd', 'e'};
// 	//printf("%s\n", arr2);
// 	//printf("%s\n", arr3);	
// 	//printf("%d\n", strlen(arr2));
// 	//printf("%d\n", strlen(arr3));
// 	int arr[10] = {0};
// 	//arr[0]
// 	int i = 0;
// 	int sz = sizeof(arr)/sizeof(arr[0]);
// 	for(i=0; i<sz; i++)
// 	{
// 		scanf("%d", &arr[i]);
// 	}
// 	for(i=0; i<sz; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 
// 	return 0;
// }
//
//1 1 2 3 5 8 13 21 34 55 ...
//

//int count = 0;

//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	int i = 0;
//
//	if(n<=2)
//		return 1;
//	else
//	{
//		for(i=0; i<n-2; i++)
//		{
//			c = a+b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//}

//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	int i = 0;
//
//	for(i=0; i<n-2; i++)
//	{
//		c = a+b;
//		a = b;
//		b = c;
//	}
//	//
//	//CVTE
//	//
//	return c;
//}



//int fib(int n)
//{
//	if(n == 3)
//		count++;
//	if(n<=2)
//		return 1;
//	else
//		return fib(n-1)+fib(n-2);
//}

//
//40
//39 38
//38 37 37 36
//37 36 36 35 36 35 35 34
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//
//int fac(int n)
//{
//	if(n<=1)
//		return 1;
//	else
//		return n*fac(n-1);
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fac(n);
//	printf("%d\n", ret);
//
//	return 0;
//}
// void test(int n)
// {
// 	if(n<10000)
// 		test(n+1);
// }
// int main()
// {
// 	test(1);
// 	return 0;
// }

// void print(unsigned int n)
// {
// 	if(n>9)
// 		print(n/10);
// 	printf("%d ", n%10);
// }
// 
// int main()
// {
// 	unsigned int num = 0;
// 	scanf("%d", &num);//1234
// 	print(num);//1234
// 	//
// 	//print(1234)
// 	//print(123) 4
// 	//print(12) 3 4
// 	//print(1) 2 3 4
// 	//
// 	return 0;
// }
// 
// int main()
// {
// 	main();
// 	return 0;
// }


//#include "arr.h"
//
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	//Print(arr, sz);
//	//Init(arr, sz, 2);
//	Print(arr, sz);
//	//Empty(arr, sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//
//	return 0;
//}
//


