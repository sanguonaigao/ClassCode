#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
//
//int main()
//{
//	int arr[10] = {0};
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(int [5]));//
//	return 0;
//}
//
//
//#include <stdio.h>
//
//void test(void)
//{
//	printf("haha\n");
//}
//
//
//int main()
//{
//	test();
//
//	return 0;
//}

//
//int main()
//{
//	//int a = 0x11223344;
//	int a = -10;
//	//10000000000000000000000000001010-原码
//	//11111111111111111111111111110101-反码
//	//11111111111111111111111111110110-补码
//	//FFFFFFF6
//	return 0;
//}
//
//int main()
//{
//
//	//1-1;//
//	//1+(-1);
//	//00000000000000000000000000000001
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//00000000000000000000000000000001
//	//00000000000000000000000000000000
//	//10000000000000000000000000000010
//	//-2
//	return 0;
//}

//int main()
//{
//	int a = 1;//00 00 00 01
//	char* pc = (char*)&a;
//
//	if(*pc == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//
//	return 0;
//}
//
//int check_sys()
//{
//	int a = 1;
//	char*pc = (char*)&a;
//	if(*pc == 1)
//		return 1;
//	else
//		return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	char*pc = (char*)&a;
//	return *pc;
//}
//
//int check_sys()
//{
//	int a = 1;
//	//返回0，表示大端
//	//但会1，表示小端
//	return *(char*)&a;
//}
//
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//返回1，表示小端
//	//返回0，表示大端
//	return u.c;
//}
//
//int main()
//{
//	int ret = check_sys();
//	if(ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}
//

//联合体
//共用体


//struct S
//{
//	char name[20];
//	int age;
//};
//
//union Un
//{
//	int i;//4
//	char c;//1
//};
//
//int main()
//{
//	union Un u = {0};
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.i));
//	printf("%p\n", &(u.c));
//
//	//8 5 
//	return 0;
//}

//输出什么？
#include <stdio.h>
// 
// int main()
// {
// 	char a = -1;
// 	//10000000000000000000000000000001
// 	//11111111111111111111111111111110
// 	//11111111111111111111111111111111
// 	signed char b = -1;
// 	unsigned char c = -1;
// 	//11111111111111111111111111111111-a
// 	//11111111-b
// 	//00000000000000000000000011111111-c
// 	printf("a=%d,b=%d,c=%d",a,b,c);
// 	//-1 -1 255
// 	return 0;
// }
// 

//#include <stdio.h>
//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000
//	//11111111111111111111111110000000-a
//	printf("%u\n", a);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	char a = 128;
//	printf("%u\n",a);
//	return 0;
//}
//int main()
//{
//	int i= -20;
//	unsigned  int  j = 10;
//	printf("%d\n", i+j); 
//	//10000000000000000000000000010100
//	//11111111111111111111111111101011
//	//11111111111111111111111111101100
//	//00000000000000000000000000001010
//	//11111111111111111111111111110110
//	//11111111111111111111111111110101
//	//10000000000000000000000000001010
//	//-10
//	return 0;
//}

//#include <windows.h>
//
//int main()
//{
//	unsigned int i;
//	for(i = 9; i >= 0; i--)
//	{
//		Sleep(100);
//		printf("%u\n",i);
//	}
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
//	//-1 -2 -3 -4 ... 
//	printf("%d",strlen(a));
//	//1000
//	//
//	return 0;
//}

//
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

//char  -128 127
//unsigned char 0-255

//
//int main()
//{
//	int n = 9;
//	//0 00000000 00000000000000000001001
//	//
//	//0.00000000000000000001001*2^-126
//	//
//	float *pFloat = (float *)&n;
//	printf("n的值为：%d\n",n);//9
//	printf("*pFloat的值为：%f\n",*pFloat);//0.000000
//	*pFloat = 9.0;
//	//1001.0
//	//1.001*2^3
//	//0 10000010 00100000000000000000000
//	//
//	printf("n的值为：%d\n",n);//
//	printf("*pFloat的值为：%f\n",*pFloat);//9.0
//	return 0;
//}


//5.5
//101.1
//1.011*2^2
//(-1)^0 *1.011 * 2^2
//S=0
//M=1.011
//E=2
//
//(-1)^S * M * 2^E
//
//0.5
//0.1
//1.0*2^-1

//
//int main()
//{
//	float f = 5.5f;
//	//5.5
//	//101.1
//	//(-1)^0 * 1.011*2^2
//	//0100 0000 1011 00000000000000000000
//	//40B00000
//	//
//	return 0;
//}
//
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//
//int main()
//{
//	int arr[10][10] = {0};
//	int i = 0;
//	int j = 0;
//	for(i=0; i<10; i++)
//	{
//		for(j=0; j<10; j++)
//		{
//			if(j==0)
//				arr[i][j] = 1;
//			if(i == j)
//				arr[i][j] = 1;
//			if(i>=2 && j>=1)
//			{
//				arr[i][j] = arr[i-1][j-1]+arr[i-1][j];
//			}
//		}
//	}
//	for(i=0; i<10; i++)
//	{
//		for(j=0; j<=i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//
//杨辉三角
//杨氏矩阵
//去哪儿网
//

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int avg = a+(b-a)/2;
//	//avg = a+((b-a)>>1);
//	int avg = (a&b) + ((a^b)>>1);
//	printf("%d\n", avg);
//
//	return 0;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,1,2,3,4};
//	int ret = 0;
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=0; i<sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}