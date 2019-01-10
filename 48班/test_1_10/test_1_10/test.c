#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}


//my_strlen("abc");
//1+my_strlen("bc")
//1+1+my_strlen("c")
//1+1+1+my_strlen("");
//1+1+1+0
//3
//int my_strlen(char *str)
//{
//	if(*str != '\0')
//		return 1+my_strlen(str+1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char* p = "abcdef";
//	//char arr[] = "abcdef";
//	int len = my_strlen(p);
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}
//1 1 2 3 5 8 13 21 34 55 ...
//
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
// 	scanf("%d", &n);
// 	ret = fac(n);
// 	printf("ret = %d\n", ret);
// 	system("pause");
// 	return 0;
// }
//
//int count = 0;
//int fib(int n)
//{
//	if(n==3)
//	{
//		count++;
//	}
//	if(n<=2)
//		return 1;
//	else
//		return fib(n-1)+fib(n-2);
//}

//
//50
//49 48
//48 47 47 46
//47 46 46 45 46 45 45 44
//
//
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while(n>2)
//	{
//		c = a+b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d\n", ret);
//	//printf("\ncount = %d\n", count);//
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//// 	int arr1[10] = {0};
//// 	int arr2[5+5] = {0};
//// 	int n = 10;
//// 	int arr3[n] = {0};
//	//int arr[] = {1,2,3,4,5,6,7};
//	char arr1[] = "abc";
//	char arr2[] = {'a', 'b', 'c'};
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	printf("%d\n", strlen(arr1));//
//	printf("%d\n", strlen(arr2));//
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		arr[i] = 0;
//	}
//	for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int* p = arr;//int
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=0; i<sz; i++)
//	{
//		//printf("%d ", arr[i]);
//		//printf("%d ", *(p+i));
//		//printf("%d ", i[arr]);
//		printf("%d ", *(arr+i));
//		//arr[i] == *(arr+i)
//	}
//	//
//	//arr[i] == *(p+i) == *(i+p) == i[arr] == *(arr+i)
//	//for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
//	//{
//	//	printf("&arr[%d] = %p  <===> p+%d = %p\n",i,&arr[i], i, p+i);
//	//}
//
//	/*for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
//	{
//	printf("&arr[%d] = %p\n", i, &arr[i]);
//	}*/
//// 	printf("%p\n", arr);
//// 	printf("%p\n", &arr[0]);
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int arr[3][4] = {{1,2},{3,4},{5}};
//	int i = 0;
//	int j = 0;
//	int *p = &arr[0][0];
//	for(i=0; i<12; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	/*for(i=0; i<3; i++)
//	{
//	for(j=0; j<4; j++)
//	{
//	printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//	}
//	printf("\n");
//	}*/
//	/*for(i=0; i<3; i++)
//	{
//	for(j=0; j<4; j++)
//	{
//	printf("%d ", arr[i][j]);
//	}
//	printf("\n");
//	}*/
//	system("pause");
//	//double arr2[2][6];
//	return 0;
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//冒泡排序的趟数
//	for(i=0; i<sz-1; i++)
//	{
//		//一趟的调整
//		int j = 0;
//		int flag = 1;
//		for(j=0; j<sz-1-i; j++)
//		{
//			if(arr[j] > arr[j+1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//				flag = 0;
//			}
//		}
//		if(flag == 1)
//			break;
//	}
//}
//
//int main()
//{
//	int arr[] = {1,3,5,7,9,2,4,6,8,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	print(arr, sz);
//	bubble_sort(arr, sz);
//	print(arr, sz);
//	system("pause");
//	return 0;
//}