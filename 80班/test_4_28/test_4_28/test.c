#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//
//int main()
//{
//// 	int a = 10;
//// 	int b = 20;
//// 	int c = 30;
//	//int n = 5;
//	//int arr1[5] = {0};
//	//int arr2[6] = {0};
//	//printf("%d\n", sizeof(arr1));//20
//	//printf("%d\n", sizeof(int [5]));//420
//	//int arr2[2+3];
//	//char arr3[5];
//	//char arr4[6];
//	//int arr3[n];//err
//	//int a = 10;
//	//printf("%d\n", sizeof(a));//4
//	//printf("%d\n", sizeof(int));//4
//
//	//int arr[10] = {1};
//	
//	char arr1[4] = {'a', 'b', 'c'};
//	char arr2[] = "abc";
//
//	//printf("%s\n", arr1);//abc
//	//printf("%s\n", arr2);//abc
//	printf("%d\n", strlen(arr1));//
//	printf("%d\n", strlen(arr2));//3
//
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//arr[0]
//	int i = 0;
//	//[]-下标引用操作符
//	int sz = sizeof(arr)/sizeof(arr[0]);
//
//	for(i=0; i<sz; i++)
//	{
//		arr[i] = 0;
//	}
//	for(i=0; i<sz; i++)
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
//	int* p = arr;//&arr[0]
//	
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	/*for(i=0; i<sz; i++)
//	{
//	printf("&arr[%d] = %p   <====>  p+%d = %p\n", i, &arr[i], i, p+i);
//	}*/
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	//int arr1[] = {1,2,3};
//
//	int arr[3][4] = {{1,2,3},{4,5}};
//	int i = 0;
//	for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		//i
//		int j = 0;
//		for(j=0; j<sizeof(arr[0])/sizeof(arr[0][0]); j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int arr[3][4] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int j = 0;
//	int* p = &arr[0][0];
//	for(i=0; i<12; i++)
//	{
//		printf("%d\n", *(p+i));
//	}
//	/*for(i=0; i<3; i++)
//	{
//		for(j=0; j<4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}*/
//	system("pause");
//	return 0;
//}
//
//void bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	int j = 0;
//	//冒泡排序的趟数
//	for(i=0; i<sz-1; i++)
//	{
//		int flag = 1;//假设有序
//		for(j=0; j<sz-1-i; j++)
//		{
//			if(arr[j] > arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//				flag = 0;//无序
//			}
//		}
//		if(flag == 1)
//		{
//			return;
//		}
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
//	int arr[] = {1,3,5,7,9,2,4,6,8,0};
//	
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	//打印
//	print_arr(arr, sz);
//	//排序
//	bubble_sort(arr, sz);
//	//打印
//	print_arr(arr, sz);
//
//	system("pause");
//	return 0;
//}

int main()
{
	int arr[10] = {0};

	int sz = sizeof(arr)/sizeof(arr[0]);
	printf("%p\n", arr);//1-数组首元素的地址
	printf("%p\n", arr+1);//1-数组首元素的地址

	printf("%p\n", &arr[0]);//2-数组首元素的地址
	printf("%p\n", &arr[0]+1);//2-数组首元素的地址


	printf("%p\n", &arr);//3-数组的地址
	printf("%p\n", &arr+1);//3-数组的地址


	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(arr+0));//

	//通常讲：数组名是首元素的地址
	//但是有两个例外：
	//1. sizeof(数组名)，数组名表示整个数组，计算的是整个数组的大小，单位是字节
	//2. &数组名，数组名表示整个数组，取出的是整个数组的地址
	//

	system("pause");
	return 0;
}