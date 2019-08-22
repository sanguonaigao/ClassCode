#define _CRT_SECURE_NO_WARNINGS 1
//输出什么？
#include <stdio.h>
//
//int main()
//{
//	char a = -1;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//00000000000000000000000011111111
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}

#include <stdio.h>
//
//int main()
//{
//	char a = -128;
//
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000
//	//11111111111111111111111110000000
//	//
//	printf("%u\n",a);
//	//128
//	return 0;
//}
//
//
//#include <stdio.h>
//int main()
//{
//	char a = 128;
//	//00000000000000000000000010000000
//	//11111111111111111111111110000000
//	//
//	printf("%u\n",a);
//	return 0;
//}
////
//
//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a+b;
//	printf("%d\n", c);
//	return 0;
//}
//
//
//int main()
//{
//	int i= -20;
//	//1000000000000000000000000010100
//	//1111111111111111111111111101011
//	//1111111111111111111111111101100
//	//0000000000000000000000000001010
//	//1111111111111111111111111110110
//	//1111111111111111111111111110101
//	//1000000000000000000000000001010
//	//-10
//
//	unsigned  int  j = 10;
//	printf("%d\n", i+j); 
//
//	return 0;
//}
//
//#include <windows.h>
//int main()
//{
//	unsigned int i;
//	for(i = 9; i >= 0; i--)
//	{
//		Sleep(1000);
//		printf("%u\n",i);
//	}
//
//	return 0;
//}
//
//int main()
//{
//	char a[1000];
//	int i;
//	for(i=0; i<1000; i++)
//	{
//		a[i] = -1-i;
//	}
//	//-1 -2 -3 ..-128 127 126 125 ... 3 2 1 0 -1 
//	printf("%d",strlen(a));
//	return 0;
//}
//


#include <stdio.h>
//
//unsigned char i = 0;
//int main()
//{
//	for(i = 0;i<=255;i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int n = 9;
//	//0 00000000 00000000000000000001001
//	//0.00000000000000000001001*2^-126
//	//
//	//
//	float *pFloat = (float *)&n;
//	printf("n的值为：%d\n",n);//9
//	printf("*pFloat的值为：%f\n",*pFloat);//0.000000
//
//	*pFloat = 9.0;
//	//9.0
//	//1001.0
//	//1.001*2^3
//	//0 10000010 00100000000000000000000
//	//
//	printf("num的值为：%d\n",n);
//	printf("*pFloat的值为：%f\n",*pFloat);//9.0
//	return 0;
//}

//123.4
//1.234*10^2
//
//9.0
//1001.0
//(-1)^0 * 1.001*2^3
//(-1)^S * M * 2^E

//S=0
//M=1.001
//E=3
//
//0.5
//0.1
//1.0*2^-1
//
//
//int main()
//{
//	float f = 5.5;
//	//101.1
//	//(-1)^0* 1.011*2^2
//	//S=0
//	//M=1.011
//	//E=2
//	//0100 0000 1011 0000 0000000000000000
//	//40 B0 00 00
//
//	return 0;
//}

//
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//
//	const char* p = "abcdef";
//
//	return 0;
//}
//
//int main()
//{
//	/*char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	if(arr1 == arr2)
//	{
//		printf("arr1 == arr2\n");
//	}
//	else
//	{
//		printf("arr1 !=  arr2\n");
//	}*/
//
//	char*p1 = "abcdef";
//	char*p2 = "abcdef";
//	p1 == p2;//
//
//	return 0;
//}
//int* 整型指针
//char* 字符指针
//数组指针
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//	int arr[10] = {0};
//	//数组指针
//	int (*parr)[10] = &arr;
//
//
//	char arr2[5] = {'a'};
//	char (*parr2)[5] = &arr2;
//
//	return 0;
//}

//int main()
//{
//	int* arr[10];
//	int* (*p)[10] = &arr;
//
//	int** p2 = arr;
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {0};
//	int* p = arr;
//	p = &arr;
//
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int (*p)[10] = &arr;
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//
//	return 0;
//}
//void Print(int arr[3][5], int x, int y)
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
//
//void Print(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	//p[i] == *(p+i)
//	for(i=0; i<x; i++)
//	{
//		for(j=0; j<y; j++)
//		{
//			printf("%d ", *(*(p+i)+j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = {1,2,3,4,5,2,3,4,5,6,3,4,5,6,7};
//	Print(arr, 3, 5);
//	return 0;
//}

//数组指针
//指针数组

void test(int** p)
{

}
int main()
{
	int *ptr = NULL;
	int* arr[10] = {0};//指针数组
	//
	test(&ptr);
	test(arr);

	return 0;
}



