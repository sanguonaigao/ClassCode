#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,0};
//	//arr[i];//下标引用操作符
//	int i = 0;
//	for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		//0-6
//		printf("%d ", arr[i]);
//	}
//
//	//a+b;
//	//char arr1[] = "abc";
//	//char arr2[] = {'a', 'b', 'c'};
//	//printf("%d\n" , strlen(arr1));//3
//	//printf("%d\n" , strlen(arr2));//x
//
//	//printf("%s\n", arr1);//abc
//	//printf("%s\n", arr2);//abc
//
//	//char arr[] = "abcdef";
//	//int n = 5;
//	//int arr[] = {1,2,3,4,5};
//
//	//int arr2[3+2];
//	//char arr3[0];
//	//double arr4[6];
//	//int arr3[n];//err
//	return 0;
//}


// int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int* p = arr;
//
//	/*for(i=0; i<sz; i++)
//	{
//		printf("&arr[%d] = %p  <=====>  p+%d = %p\n", 
//			i, &arr[i],i, p+i);
//	}*/
//
//	for(i=0; i<sz; i++)
//	{
//		//printf("%d ", arr[i]);
//		printf("%d ", *(p+i));
//	}
//
//	return 0;
//}
//
//int main()
//{
//	//int arr[3][4] = {1,2,3,4,5,6,7};
//	int arr[3][4] = {{1,2}, {3,4}};
//	int i = 0;
//	int j = 0;
//	int *p = &arr[0][0];
//	for(i=0; i<12; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//
//	//“int *”与“int (*)[4]”
//	/*for(i=0; i<3; i++)
//	{
//		for(j=0; j<4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}*/
//
//
//
//	//char arr2[3][5];
//
//	return 0;
//}
//
//
//void bubble_sort(int arr[], int sz)
//{
//	//趟数
//	int i = 0;
//	for(i=0; i<sz-1; i++)
//	{
//		//每一趟的比较
//		int isSorded = 1;
//		int j = 0;
//		for(j=0; j<sz-1-i; j++)
//		{
//			if(arr[j] > arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//				isSorded = 0;
//			}
//		}
//		if(isSorded == 1)
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
//
//int main()
//{
//	int arr[] = {0,1,2,3,4,5,6,7,8,9};
//
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	print_arr(arr, sz);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}