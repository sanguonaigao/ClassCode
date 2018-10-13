#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>





//
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//冒泡排序的趟数
//	for(i=0; i<sz-1; i++)
//	{
//		int j = 0;
//		int flag = 0;
//		for(j=0; j<sz-1-i; j++)
//		{
//			//一对元素的比较
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


//
//int main()
//{
//	int arr[3][4] = {0};
//	int i = 0;
//	int j = 0;
//
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
//	//int arr[3][4] = {1,2,3,4};
//	//int arr[][4] = {{1,2}, {4,5}};
//	//int arr2[3][1] = {0};
//	//char arr3[5][6] = {0};
//	int arr[3][4] = {0};
//	int i = 0;
//	int j = 0;
//	int *p = &arr[0][0];
//	for(i=0; i<3; i++)
//	{
//		for(j=0; j<4; j++)
//		{
//			arr[i][j] = i*4+j+1;
//		}
//	}
//
//	for(i=0; i<12; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	//for(i=0; i<3; i++)
//	//{
//	//	for(j=0; j<4; j++)
//	//	{
//	//		printf("%d ", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	return 0;
//}

//
//int  main()
//{
//	int arr[10] = {0};
//	//&arr[i]
//	int i = 0;
//	int* p = arr;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//
//
//	//
//	//for(i=0; i<sz; i++)
//	//{
//	//	printf("%d ", i[arr]);
//	//}
//	//
//
//	//for(i=0; i<sz; i++)
//	//{
//	//	//arr[i] = i;
//	//	//*(arr+i) = i;
//
//	//	//*(i+arr) = i;
//	//	//i[arr] = i;
//	//	*(p+i) = i;
//	//}
//	//0 - 9
//	//for(i=0; i<sz; i++)
//	//{
//	//	printf("%d ", *(arr+i));
//	//}
//
//	/*for(i=0; i<sz; i++)
//	{
//		printf("%d ", *(p+i));
//	}*/
//
//	//for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
//	//{
//	//	printf("&arr[%d] = %p <==> arr+%d = %p\n",
//	//		i, &arr[i], i, arr+i);//arr
//	//}
//	return 0;
//}
// int main()
// {
// 	int arr[20] = {0};
// 	int i = 0;
// 	int sz = sizeof(arr)/sizeof(arr[0]);
// 
// 	for(i=0; i<sz; i++)
// 	{
// 		arr[i] = i;
// 	}
// 	for(i=0; i<sz; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 
// 	//a+b;
// 	//arr[4] = 5;
// 	return 0;
// }
//
//int main()
//{
//	//int arr1[10] = {0,1,2,3,4,5,6,7,8,9};
//	//int arr2[10] = {0};
//	//char arr3[5] = {'b', 'i', 't'};
//	//int arr4[] = {1,2,3,4};
//	//char arr5[] = {'a', 98, 'c'};
//	//char arr6[] = "abcdef";
//	//char arr7[] = {'a', 'b', 'c', 'd', 'e', 'f', 0};
//	//printf("%d\n", strlen(arr6));//6 
//	//printf("%d\n", strlen(arr7));//
//
//	//printf("%s\n", arr6);
//	//printf("%s\n", arr7);
//
//	return 0;
//}