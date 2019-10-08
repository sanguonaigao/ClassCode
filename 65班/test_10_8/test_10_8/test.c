#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//int main()
//{
//	int n = 10;
//	int arr[10] = {0};
//	printf("%d\n", sizeof(n));//4
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int [5]));
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int arr2[10] = {1,2,3};//不完全初始化
//	int arr3[] = {1,2,3};
//
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	char arr1[] = {'a', 'b', 'c', '\0'};
//	char arr2[] = "abc";
//	printf("%s\n", arr1);//
//	printf("%s\n", arr2);//
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = {1,2,3};
//	//arr[2] = 10;
//	//0-9
//	int i = 0;
//	for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		//printf("%d ", arr[i]);
//		arr[i] = i;
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int* p = arr;
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//
//	/*for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
//	{
//	printf("&arr[%d] = %p\n", i, &arr[i]);
//	}*/
//
//	return 0;
//}
//


//
//void print(int arr[3][4], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for(i=0; i<x; i++)
//	{
//		for(j=0; j<y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][4] = {{1,2,3},{4,5,6},{7,8,9}};
//	
//	print(arr, 3, 4);
//	return 0;
//}


//int main()
//{
//	int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//
//	int i = 0;
//	int j = 0;
//	for(i=0; i<3; i++)
//	{
//		for(j=0; j<4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	int *p = &arr[0][0];
//	int i = 0;
//	for(i=0; i<12; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	return 0;
//}

//
//void bubble_sort(int arr[], int sz)
//{
//	//趟数
//	int i = 0;
//	
//	for(i=0; i<sz-1; i++)
//	{
//		//处理一趟排序的比较
//		int flag = 1;//
//		int j = 0;
//		for(j=0; j<sz-i-1;j++)
//		{
//			if(arr[j] > arr[j+1])
//			{
//				int tmp  = 0;
//				flag = 0;
//				tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//		if(flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//void print(int arr[], int sz)//int *arr
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	//冒泡排序-函数
//	int sz = sizeof(arr)/sizeof(arr[0]);
//
//	bubble_sort(arr, sz);
//	print(arr, sz);
//	return 0;
//}
//

//
//int main()
//{
//	int arr[10] = {0};
//	printf("%p\n", &arr[0]);
//	printf("%p\n", arr);//数组名-数组首元素的地址
//	printf("%p\n", arr+1);//数组名-数组首元素的地址
//
//	printf("%p\n", &arr);//数组的地址
//	printf("%p\n", &arr+1);//数组的地址
//
//	sizeof(arr);
//	arr+1;
//	return 0;
//}
//

//
//int main()
//{
//	int arr[][4] = {{1,2,3}, {4,5,6}, {5,6,7}};
//
//
//	return 0;
//}