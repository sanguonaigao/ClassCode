#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	//大小端
//	int a = 0x11223344;
//
//	//1-1;
//	//1+(-1);
//
//	//00000000000000000000000000000001
//	//11111111111111111111111111111111
//	//100000000000000000000000000000000
//
//	//10000000000000000000000000000001
//	//10000000000000000000000000000010
//	//
//	//int a = 10;
//	//
//	//int b = -10;
//	//10000000000000000000000000001010-原码
//	//11111111111111111111111111110101-反码
//	//11111111111111111111111111110110-补码
//	//FFFFFFF6
//	return 0;
//}
#include <stdio.h>

//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	return *p;
//}
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	int ret = check_sys();
//	if(ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	//01 00 00 00
//	//00 00 00 01
//
//	return 0;
//}
//
//
//struct S
//{
//	int i;
//	double d;
//};
//
//union Un
//{
//	int i;
//	double d;
//};
//
//int main()
//{
//	/*struct S s = {0};
//	printf("%p\n", &(s.i));
//	printf("%p\n", &(s.d));*/
//	union Un u = {0};
//	printf("%p\n", &(u.i));
//	printf("%p\n", &(u.d));
//
//
//	//printf("%d\n", sizeof(struct S));//
//	//printf("%d\n", sizeof(union Un));//
//
//	return 0;
//}
//
//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u = {0};
//	u.i = 1;
//	if(u.c == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//
//	return 0;
//}


//输出什么？
//#include <stdio.h>
//int main()
//{
//	char a= -1;
//	signed char b=-1;
//	unsigned char c=-1;
//	//11111111111111111111111111111111
//	//00000000000000000000000011111111
//
//	printf("a=%d,b=%d,c=%d",a,b,c);
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	char a = -128;
//	//
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000
//	//11111111111111111111111110000000
//	//
//	printf("%u\n",a);//
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	char a = 128;
//	//00000000000000000000000010000000
//	//11111111111111111111111110000000
//	printf("%u\n",a);
//	return 0;
//}

//
//int main()
//{
//	int i= -20;
//	//10000000000000000000000000010100
//	//11111111111111111111111111101011
//	//11111111111111111111111111101100
//	//00000000000000000000000000001010
//	//11111111111111111111111111110110
//	//11111111111111111111111111110101
//	//10000000000000000000000000001010
//	//-10
//
//	unsigned  int  j = 10;
//	printf("%d\n", i+j); 
//
//	return 0;
//}
#include <windows.h>

//int main()
//{
//	unsigned int i;
//	for(i = 9; i >= 0; i--)
//	{
//		printf("%u\n",i);
//		//Sleep(1000);
//	}
//	return 0;
//}



//int main()
//{
//	char a[1000];
//	int i;
//	for(i=0; i<1000; i++)
//	{
//		a[i] = -1-i;
//	}
//	//-1 -2 -3 -4 .. -128 127 126 ... 3 2 1 0 -1 -2 ...
//	printf("%d",strlen(a));
//	return 0;
//}

//#include <stdio.h>
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
//	//(-1)^0*0.00000000000000000001001 * 2^-126
//	//
//	float *pFloat = (float *)&n;
//	printf("n的值为：%d\n",n);//9
//	printf("*pFloat的值为：%f\n",*pFloat);//0.000000
//
//	*pFloat = 9.0;
//	//1001.0
//	//1.001*2^3
//	//0 10000010 00100000000000000000000
//	//
//	printf("num的值为：%d\n",n);//9
//	printf("*pFloat的值为：%f\n",*pFloat);//9.0
//	//3.140
//	//0.125
//	//11.001
//	return 0;
//}
//
//int main()
//{
//	/*0.5;
//	0.1;
//	1.0*2^-1;*/
//
//	float f = 5.5;
//	//101.1
//	//(-1)^0*1.011*2^2
//	//s=0
//	//m=1.011
//	//E=2
//	//0100 0000 101100000000000000000000
//	//40B00000
//	//
//	return 0;
//}
//
//

//
//int main()
//{
//	double d = -5.5;
//	//-101.1;
//	//-1.011*2^2;
//	//1100 0000 0001 0110 00000....
//	//C016 00 00 00 ..
//	return 0;
//}
//
//
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char *str3 = "hello bit.";
//	char *str4 = "hello bit.";
//
//	if(str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if(str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}

//void Print(int arr[3][5], int row, int col)
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
//void Print(int(*arr)[5], int row, int col)
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
//	int arr[3][5] = {{1,2,3},{2,3,4},{4,5,6}};
//	Print(arr, 3, 5);
//	return 0;
//}
////
//int main()
//{
//// 	int a = 10;
//// 	char ch = 'w';
//// 	int* pa = &a;//整型指针
//// 	char* pc = &ch;//字符指针
//	//数组指针-指向数组的指针
//	//int arr[10] = {1,2,3,4,5};
//	//int(*p)[10] = &arr;//数组指针
//	/*char* arr[5] = {"hello", "world", "bit"};
//	char **p = arr;
//	printf("%s\n", p[0]);
//	printf("%s\n", p[1]);
//	printf("%s\n", p[2]);*/
//
//
//	//char* (*pa)[5] = &arr;
//	//printf("%s\n", (*pa)[0]);
//	//printf("%s\n", (*pa)[1]);
//	//printf("%s\n", (*pa)[2]);
//	//printf("%p\n", arr);
//	//printf("%p\n", arr+1);
//	//printf("%p\n", &arr[0]);
//	//printf("%p\n", &arr[0]+1);
//	//printf("%p\n", &arr);
//	//printf("%p\n", &arr+1);
//
//
//
//	//int* p = arr;//err
//	return 0;
//}

//int main()
//{
//	//int arr[10];
//	//arr;//int* 
//	//int(*p)[10] = &arr;//int(*)[10]
//
//	int arr[5];
//	int *parr1[10];
//	int (*parr2)[10];
//
//	int (*parr3[10])[5];
//
//	return 0;
//}
//
//#include <stdio.h>
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++) 
//	{ 
//		printf("%d, ", sum(a)); 
//	} 
//	return 0;
//} 




