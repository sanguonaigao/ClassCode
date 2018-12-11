#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//
//int main()
//{
//	//5.5;
//	//101.1
//	//(-1)^0 * 1.011*2^2
//	//0100 0000 1011 0000 0000000000000000
//	//40 b0 00 00
//	float f = 5.5f;
//
//	//-1 ^ s * M * 2^E
//	//9.0
//	//1001.0
//	//1.001*2^3
//	//-1^0 * 1.001 * 2^3
//	//0.5
//	//0.1
//	//1.0*2^-1
//	//
//	+- 1.xxxx * 2^-127
//
//	//
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
//
//int main()
//{
//	int n = 9;
//	//[0 00000000 00000000000000000001001]
//	//-1^0 * 0.00000000000000000001001 * 2^-126
//	//
//	//
//	float *pFloat = (float *)&n;
//	printf("n的值为：%d\n",n);
//	printf("*pFloat的值为：%f\n",*pFloat);
//
//	*pFloat = 9.0;
//	//1001.0
//	//1.001*2^3
//	//-1^0 * 1.001 * 2^3
//	//01000001000100000000000000000000
//	//
//	//
//	printf("num的值为：%d\n",n);
//	printf("*pFloat的值为：%f\n",*pFloat);//9.000000
//	system("pause");
//	return 0;
//}


//
//int main()
//{
//// 	char c = 'w';
//// 	char* pc = &c;
//// 	char* p = "abcdef";
//// 	char arr[10] = "abcdef";
//// 	char *p2 = arr;
//	//char *p1 = "abcdef";
//	//char *p2 = "abcdef";
//	//if(p1 == p2)
//	//{
//	//	printf("p1 == p2\n");
//	//}
//	//else
//	//{
//	//	printf("p1 != p2\n");
//	//}
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	if(arr1 == arr2)
//	{
//		printf("arr1 == arr2\n");
//	}
//	else
//	{
//		printf("arr1 != arr2\n");
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	//int arr[10];//
//	//char ch[4];//
//	int* arr[5] = {0};//指针数组
//	char* arr2[7] = {0};//
//	printf("%d\n", sizeof(arr));//20
//	printf("%d\n", sizeof(arr2));//28 
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int arr[10];
//	//
//	// sizeof(arr)- 数组名表示整个数组-计算的是整个数组的大小
//	// &arr       - 数组名表示整个数组-取出的是数组的地址
//	// 除此之外，你遇到的所有的数组名都是首元素的地址
//	//
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(arr+0));//4
//
//	//printf("%p\n", arr);//首元素的地址
//	//printf("%p\n", arr+1);
//
//	//printf("%p\n", &arr[0]);//首元素的地址
//	//printf("%p\n", &arr[0]+1);
//
//	//printf("%p\n", &arr);//数组的地址
//	//printf("%p\n", &arr+1);//数组的地址
//
//
//	/*int a = 10;
//	int* p = &a;
//	char*pc = (char *)&a;*/
//
//	system("pause");
//	//int* p = arr;
//	return 0;
//}
//
//void print(int *arr, int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", *(arr+i));
//	}
//}

//
//void print( int(*arr)[10], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", (*arr)[i]);
//	}
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	print(&arr, sz);
//
//	//int* arr[10] = {0};
//	//int* (*p)[10] = &arr;
//	//int arr[10] = {0};
//	//数组指针
//	//int (*p)[10] = &arr;
//	system("pause");
//	return 0;
//}


//void print(int arr[3][4], int row, int col)
//void print(int (*arr)[4], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for(i=0; i<row; i++)
//	{
//		for(j=0; j<col; j++)
//		{
//			printf("%d ", *(*(arr+i)+j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][4] = {1,2,3,4,2,3,4,5,3,4,5,6};
//	print(arr, 3, 4);
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//// 	int arr1[5] = {0};
//// 	int arr2[5] = {1};
//// 	int arr3[5] = {2};
//
//	//int (*parr3[10])[5] = {&arr1, &arr2, &arr3};
//	//int a;
//	//int* pa;
//	//int (*p)[10];
//	return 0;
//}
//
//
// void test(int** p)
// {
// 
// }
// int main()
// {
// 	int a = 10;
// 	int *pa = &a;
// 	int **ppa = &pa;
// 	int* arr[10];
// 	test(arr);
// 	return 0;
// }
//一级指针
//二级指针
//数组指针
//函数指针
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//char* my_strcpy(char* dest, const char* src)
//{
//	//...
//}
//
int main()
{
	//int* p;
	char* (*pf)(char*, const char*);// = my_strcpy;

	//printf("%p\n", &Add);
	//printf("%p\n", Add);
	//int (*p)[10];
	//函数指针
	//int (*p)(int, int) = Add;
	//printf("%d\n", (*p)(2, 3));
	//Add(2, 3)
	system("pause");
	return 0;
}



