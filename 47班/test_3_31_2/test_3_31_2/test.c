#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while(n>2)
//	{
//		c=a+b;
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
//	printf("ret = %d\n", ret);
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	//int arr[10] = {0};
//	//int arr2[5+3] = {0};
//	//const int n = 10;
//	//int arr3[n] = {0};//err
//	//char arr4[0];//err
//	//int arr[3] = {1,2,3};
//	//int arr1[5] = {1,2};
//	//int arr2[] = {1,2,3};
//	//0
//	//'0'-48
//	//'\0'-0
//	//
//// 	char arr1[] = {'a', 'b', 'c', 0};
//// 	char arr2[] = "abc";
//// 	printf("%d\n", strlen(arr1));//
//// 	printf("%d\n", strlen(arr2));//3
//
//	//printf("%s\n", arr1);//?
//	//printf("%s\n", arr2);//?
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5};
//	//arr[i]//0-9
//	int i = 0;
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
//	int arr[10] = {1,2,3,4,5};
//	//arr[i]//0-9
//	int i = 0;
//	for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int arr[][4] = {{1,2},{3,4},5};
//	int i = 0;
//	int j = 0;
//	for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		for(j=0; j<sizeof(arr[0])/sizeof(arr[0][0]); j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	//printf("%d\n", sizeof(arr));//?
//	//printf("%d\n", sizeof(int [3][4]));//?
//
//	//int arr[5] = {0};
//	//printf("%d\n", sizeof(arr));//
//	//printf("%d\n", sizeof(int [5]));//
//
//
//	//int a = 10;
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(int));
//
//	system("pause");
//	//int arr[3][4];
//	//int a;
//	return 0;
//}

//
//int main()
//{
//	int arr[3][4] = {0};
//	int i = 0;
//	int j = 0;
//	for(i=0; i<3; i++)
//	{
//		for(j=0; j<4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int arr[3][4] = {1,2,3,4,2,3,4,5,3,4,5,6};
//	int i = 0;
//	int*p = &arr[0][0];
//	for(i=0; i<12; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//// 	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//// 	int* p = arr;
//// 	int i = 0;
//// 	for(i=0; i<10; i++)
//// 	{
//// 		printf("%d ", *(p+i));
//// 	}
//	system("pause");
//	return 0;
//}
//
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//ÌËÊı
//	for(i=0; i<sz-1; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for(j=0; j<sz-1-i; j++)
//		{
//			if(arr[j] > arr[j+1])
//			{
//				flag = 0;
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//		if(flag == 1)
//			break;
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	print_arr(arr, sz);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	system("pause");
//	return 0;
//}
//

