#define _CRT_SECURE_NO_WARNINGS 1

//
//int main()
//{
//	int a = 10;//初始化
//
//	int arr[10] = {10, 11, 12, 13};
//	int arr3[] = {1,2,3};
//
//	char arr2[5];
//
//	//int n = 10;
//	//int arr3[n];//err
//
//	return 0;
//}

#include <stdio.h>
//
//int main()
//{
//	char arr1[] = "bit";//4
//	char arr2[] = {'b', 'i', 't'};//3
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//3 x
//
//	return 0;
//}

//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
//	//0 9
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//

//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
//	//0 9
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=0; i<sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}



//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
//	//0 9
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int* p = arr;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	return 0;
//}

//
//int main()
//{
//	int arr[][4] = {{1,2,3,4},{2,3,4,5},{3,4,5}};
//	int i = 0;
//	int j = 0;
//	for(i=0; i<3; i++)
//	{
//		for(j=0; j<4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//
//
//
//int main()
//{
//	int arr[][4] = {{1,2,3,4},{2,3,4,5},{3,4,5}};
//	int i = 0;
//	int j = 0;
//	int* p = &arr[0][0];
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
//	}
//	*/
//	return 0;
//}
//
//
//
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//确定趟数
//	for(i=0; i<sz-1; i++)
//	{
//		int j = 0;
//		//一趟内的比较
//		for(j=0; j<sz-1-i; j++)
//		{
//			if(arr[j] > arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	//排序-升序
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(arr, sz);//冒泡排序
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//
//数组名
//数组名是首元素的地址
//1. sizeof(数组名)，数组名不是首元素的地址，而表示整个数组
//2. &数组名，数组名表示的整个数组
//
//
//int main()
//{
//	int arr[10] = {0};
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//
//	//printf("%d\n", sizeof(arr));//40
//	return 0;
//}
