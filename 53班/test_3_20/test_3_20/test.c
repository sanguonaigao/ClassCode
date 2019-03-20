#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	//int a = 0;
//	int arr1[10] = {1};
//	int arr2[] = {1, 2};
//	char arr[] = {'a', 98, 'c'};
//	char arr3[] = "abcdef";
//	/*const int n = 10;
//	int arr3[n];
//	int arr1[10];
//	int arr2[5+5];*/
//	//char arr[10];
//	//float f[20];
//	return 0;
//}
#include <stdlib.h>
#include <string.h>
//
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = {'b', 'i', 't'};
//	//printf("%s\n", arr1);//bit
//	//printf("%s\n", arr2);//bitxxxx
//	printf("%d\n", strlen(arr1));//
//	printf("%d\n", strlen(arr2));//
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int arr[12] = {1,2,3,4,5,6};
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//
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
//	int arr[10] = {1,2,3,4,5,6};
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int *p = arr;//&arr[0]
//	/*for(i=0; i<sz; i++)
//	{
//	printf("&arr[%d] = %p <==> p+%d =%p\n", i, &arr[i], i, p+i);
//	}*/
//
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", *(p+i));//arr[i]  *(p+i) *(arr+i) p[i]
		                              //*(i+p)  i[p]
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int arr[3][4] = {1,2,3,4,4,5,6,7,5,6,7,8};
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
//	system("pause");
//	//int arr[][4] = {{1,2,3},{3,4,5}};
//	//char arr2[4][6];
//	return 0;
//}

//
//int main()
//{
//	int arr[3][4] = {1,2,3,4,4,5,6,7,5,6,7,8};
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
//	//int arr[][4] = {{1,2,3},{3,4,5}};
//	//char arr2[4][6];
//	return 0;
//}
//
//int main()
//{
//	int arr[3][4] = {1,2,3,4,4,5,6,7,5,6,7,8};
//	int* p = &arr[0][0];
//	int i = 0;
//	for(i=0; i<12; i++)
//	{
//		//printf("%d ", *(p+i));
//		printf("%d ", p[i]);
//	}
//	system("pause");
//	
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int *p = arr;
//	printf("%d\n", *(5+p));//*(p+5) *(5+p)
//	printf("%d\n", arr[5]);//6
//	printf("%d\n", *(arr+5));//6
//	printf("%d\n", *(5+arr));//6
//	printf("%d\n", 5[arr]);//6
//
//	system("pause");
//	return 0;
//}
void BubbleSort(int arr[], int sz)
{
	int i = 0;
	//ÌËÊý
	for(i=0; i<sz-1; i++)
	{
		//Ò»ÌËÃ°ÅÝÅÅÐò
		int flag = 0;
		int j = 0;
		for(j=0; j<sz-1-i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
				flag = 1;
			}
		}
		if(flag == 0)
			break;
	}
}

void PrintArr(int arr[], int sz)
{
	int i = 0;
	for(i=0; i<sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	//int arr[] = {10,9,8,7,6,5,4,3,2,1};
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr)/sizeof(arr[0]);
	BubbleSort(arr, sz);//ÅÅÐò
	PrintArr(arr, sz);
	system("pause");
	return 0;
}

