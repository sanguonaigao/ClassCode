#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//1234
//111
//15%2=1
//15/2=7

//int count_one_bit(unsigned int n)
//{
//	int count = 0;
//	while(n)
//	{
//		if(n%2==1)
//		{
//			count++;
//		}
//		n=n/2;
//	}
//	return count;
//}
//00000000000000000000000000001111
//00000000000000000000000000000001
//00000000000000000000000000000000
//
//int count_one_bit(int n)
//{
//	int i = 0;
//	int count = 0;
//	for(i=0; i<32; i++)
//	{
//		if(((n>>i)&1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//n=n&(n-1)
//00001111-n
//00001110-n-1
//00001110-n
//00001101-n-1
//00001100-n
//00001011-n-1
//00001000-n
//00000111-n-1
//00000000
//
//int count_one_bit(int n)
//{
//	int count = 0;
//	while(n)	
//	{
//		n=n&(n-1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = -1;//-1
//	int ret = 0;
//	ret = count_one_bit(n);
//
//	printf("%d\n", ret);
//	system("pause");
//	//
//	//00000000000000000000000000001111-4
//	//-1
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111-32
//
//	return 0;
//}

//
//int main()
//{
//	int n = 10;
//	int i = 0;
//	//00000000000000000000000000001111
//	for(i=30; i>=0; i-=2)
//	{
//		printf("%d ", (n>>i)&1);
//	}
//	printf("\n");
//	for(i=31; i>=1; i-=2)
//	{
//		printf("%d ", (n>>i)&1);
//	}
//	printf("\n");
//
//	system("pause");
//
//	return 0;
//}
//
//int count_one_bit(int n)
//{
//	int count = 0;
//	while(n)	
//	{
//		n=n&(n-1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d%d", &m, &n);
//	count = count_one_bit(m^n);
//	/*for(i=0; i<32; i++)
//	{
//	if(((m>>i)&1) != ((n>>i)&1))
//	{
//	count++;
//	}
//	}*/
//	printf("count = %d\n", count);
//
//	system("pause");
//	return 0;
//}
//


//牛客网-刷题
//leetcode
//
//int main()
//{
//// 	char ch = 'w';
//// 	char *p = &ch;
//// 	*p = 'b';
//	//char arr[] = "abcdef";
//	//char *p1 = arr;
//
//	//常量字符串
//	//const char* p2 = "abcdef";
//	//printf("%c\n", *p2);
//	//*p2 = 'c';
//
//// 	const char *p1 = "abcdef";
//// 	const char *p2 = "abcdef";
//// 
//// 	if(p1 == p2)
//// 	{
//// 		printf("hehe\n");
//// 	}
//// 	else
//// 	{
//// 		printf("haha\n");
//// 	}
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//
//	if(arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int*p = &a;
//	int* arr[3] = {&a};
//	return 0;
//}
//
//int main()
//{
//	//int* p;
//	//char *pc;
//	//数组指针
//	//int arr[10] = {0};
//	//int* p = arr;
//	//int (*parr)[10] = &arr;//数组指针
//	//int* arr2[10];
//
//	char* arr[5];
//	char* (*p)[5] = &arr;
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {0};
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(&arr));//4
//
//	printf("%p\n", arr);//int* p = arr;
//	printf("%p\n", &arr);//int(*p2)[10] = &arr;
//
//	printf("%p\n", arr+1);//int* 
//	printf("%p\n", &arr+1);//
//	system("pause");
//	return 0;
//}
//
//数组名表示数组首元素的地址
//但是有两个例外：
//1. &数组名，数组名表示整个数组
//2. sizeof(数组名)，数组名表示整个数组
//

//void print(int *p, int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	print(arr, 10);
//	system("pause");
//	return 0;
//}
//
//void print(int (*p)[10], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	print(&arr, 10);
//	system("pause");
//	return 0;
//}

//void print(int arr[3][5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for(i=0; i<row; i++)
//	{
//		for(j=0; j<col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//数组指针
//void print(int (*p)[5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for(i=0; i<row; i++)
//	{
//		for(j=0; j<col; j++)
//		{
//			printf("%d ", *((*(p+i)+j)));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = {1,2,3,4,5,2,3,4,5,6,3,4,5,6,7};
//	print(arr, 3, 5);
//	system("pause");
//	return 0;
//}
//
//void test2(int *p)
//{
//
//}
//void test(char *s)
//{
//
//}
//void test3(char **p)
//{
//
//}
//
//int main()
//{
//	//int (*parr3[10])[5];
//	char ch  = 'w';
//	char arr[] = "abcdef";
//	char *p = &ch;
//	char *arr2[5];
//	test(&ch);
//	test(p);
//	test(arr);
//
//	test3(&p);
//	test3(arr2);
//	return 0;
//}

// int Add(int x, int y)
// {
// 	return x+y;
// }
// 
// int main()
// {
// 	int Add(int, int);
// 	return 0;
// }

//int main()
//{
//	//printf("%p\n", Add);
//	//printf("%p\n", &Add);
//	//函数指针
//	int (*pf)(int, int) = Add;
//	printf("%d\n", (*pf)(2, 3));
//	printf("%d\n", Add(2, 3));
//
//	//printf("%d\n", *pf(2, 3));
//
//// 
//// 	int arr[10];
//// 	int (*parr)[10] = &arr;
//
//	system("pause");
//	return 0;
//}


//void (*signal(int, void(*)(int)))(int);
//
//signal是一次函数声明
//signal函数的第一个参数是int类型，第二个参数是一个函数指针，
//该函数指针指向的函数参数是int，返回类型为void
//signal函数的返回类型是一个函数指针，该指针指向的函数，参数是int，返回类型是void
//

typedef unsigned int uint;

typedef void(*pf_t)(int) ;
pf_t signal(int , pf_t);


//STL-标准模板库
void (*signal(int, void(*)(int)))(int);

int main()
{
	return 0;
}