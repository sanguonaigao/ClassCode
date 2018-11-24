#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	//int arr[10];
//	//int arr[8+2];//??
//	//char arr[20];
//	//double arr[4];
//	//int n = 10;
//	//int arr[n] = {0};//C99
//	//int a = 0;
//	//int arr[5] = {1,2,3,4,5};
//	//int arr[] = {1,2,3,4,5,6};
//	//char arr1[] = {'a', 'b', 'c'};
//	//char arr2[] = "abc";
//
//	//printf("%s\n", arr1);//
//	//printf("%s\n", arr2);//
//	//printf("%d\n", strlen(arr1));//x
//	//printf("%d\n", strlen(arr2));//3
//
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//
//	if(arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//
//	if(p1 == p2)
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {0};
//	//arr[4] = 5;
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=0; i<sz; i++)
//	{
//		arr[i] = i+1;
//	}
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int* p = arr;
//
//	/*for(i=0; i<sz; i++)
//	{
//		printf("&arr[%d] = %p   <===>  p+%d = %p\n", i, &arr[i], i, p+i);
//	}*/
//	for(i=0; i<sz; i++)
//	{
//		*(p+i) = i;
//	}
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[][4] = {{'a', 'b'}, {'c', 'd'}, {'e'}};
//	//int arr2[4][6];
//
//	return 0;
//}
//
//int main()
//{
//	int arr[3][5] = {1,2,3,4,5,6,7,8,9,0};
//	int i = 0;
//	for(i=0; i<3; i++)
//	{
//		int j = 0;
//		for(j=0; j<5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//
//int main()
//{
//	int arr[3][5] = {1,2,3,4,5,6,7,8,9,0};
//	int i = 0;
//	int *p = &arr[0][0];
//	for(i=0; i<15; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//// 	for(i=0; i<3; i++)
//// 	{
//// 		int j = 0;
//// 		for(j=0; j<5; j++)
//// 		{
//// 			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//// 		}
//// 	}
//	return 0;
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
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
//	//趟数
//	for(i=0; i<sz-1; i++)
//	{
//		int flag = 0;
//		//每一趟的比较
//		int j = 0;
//		for(j=0; j<sz-1-i; j++)
//		{
//			if(arr[j] > arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//				flag = 1;
//			}
//		}
//		if(flag == 0)
//			break;
//	}
//}
//
//int main()
//{
//	int arr[] = {0,1,2,3,4,5,6,7,8,9};
//
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	print(arr, sz);
//	bubble_sort(arr, sz);
//	print(arr, sz);
//	return 0;
//}

