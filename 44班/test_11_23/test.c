#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//1. 编译型错误
//2. 链接型错误
//3. 运行时错误
//
//extern int Add(int, int);
//
//int main()
//{
//	//printf("hehe\n");
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//

// int main()
// {
// 	char a = -1;
// 	signed char b = -1;
// 	unsigned char c = -1;
// 	printf("%d %d %d\n", a, b, c);
// 	return 0;
// }
// 
//
//int main()
//{
//	int arr[10] = {0};
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(int [10]));//40
//	printf("%d\n", sizeof(char [5]));//5
//
//
//	//int a = 0;
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(int));
//
//	return 0;
//}
//

// 
// void test(void)
// {
// 	printf("hehe\n");
// }
// 
// int main()
// {
// 	test(10);	
// 	return 0;
// }
//
//int main()
//{
//	int a = 0x11223344;
//	//int a = 10;
//	//00000000000000000000000000001010
//	//0x00 00 00 0a
//	//
//	//int a = 1;
//	//int b = 1;
//	//int c = a-b;
//	//      1-1
//	//      1+(-1)
//	//
//	//00000000000000000000000000000001
//	//11111111111111111111111111111111
//	//00000000000000000000000000000000
//	//
//	//
//
//	//int a = 1;
//	//      00000000000000000000000000000001
//	//
//	//4-32bit
//	//整型在内存中存储的时候
//	//原码- 10000000000000000000000000000001
//	//反码- 11111111111111111111111111111110
//	//补码- 11111111111111111111111111111111
//	//
//	return 0;
//}
//
//int check_sys()
//{
//	int a = 1;
//	char *p = (char*)&a;//int*
//
//	if(*p == 1)
//		return 1;
//	else
//		return 0;
//}

//
//int check_sys()
//{
//	int a = 1;
//	//小端返回1
//	//大端返回0
//	return *(char*)&a;
//}
//
//int main()
//{
//	if(check_sys() == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}

//union //联合体/共用体

// struct S
// {
// 	char c;
// 	int i;
// };
//
//int check_sys()
//{
//	union Un
//	{
//		char c;//1
//		int i;//4
//	}u;
//	u.i = 1;
//
//	return u.c;
//}
//int main()
//{
//	if(check_sys() == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	//struct S s;
//	//union Un u;
//
//	//printf("%d\n", sizeof(u));//4
//
//	//printf("%p\n", &(u.c));
//	//printf("%p\n", &(u.i));
//
//	return 0;
//}
// 
// #include <stdio.h>
// int main()
// {
// 	char a= -1;
// 	//11111111111111111111111111111111
// 	//11111111111111111111111111111111-a
// 	//
// 	signed char b=-1;
// 	unsigned char c=-1;
// 	//00000000000000000000000011111111
// 	//
// 
// 	printf("a=%d,b=%d,c=%d",a,b,c);
// 	return 0;
// }

#include <stdio.h>
//int main()
//{	
//	char a = 100;
//	char b = 200;
//	char c = a+b;
//	printf("%d\n", c);
//
//	//00000000
//	//00000001
//	//00000010
//	//...
//	//01111111
//	//10000000
//	//10000001
//	//10000010
//	//...
//	//11111101
//	//11111110
//	//11111111
//
//	//char a = -128;
//	//printf("%d\n", a);
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000
//	//11111111111111111111111110000000-a
//	//11111111111111111111111101111111
//	//10000000000000000000000010000000
//}

// #include <stdio.h>
// int main()
// {
// 	//char a = 128;
// 	////00000000000000000000000010000000
// 	////11111111111111111111111110000000
// 	////
// 	//printf("%u\n",a);
// 	int i= -20;
// 	//10000000000000000000000000010100
// 	//11111111111111111111111111101011
// 
// 	//11111111111111111111111111101100
// 	//00000000000000000000000000001010
// 	//11111111111111111111111111110110-补码
// 	//11111111111111111111111111110101
// 	//10000000000000000000000000001010
// 	//-10
// 	unsigned  int  j = 10;
// 	printf("%d\n", i+j); 
// 	return 0;
// }
// 
// int main()
// {
// 	char a = -128;//10000000
// 	unsigned char b = -128;//10000000
// 
// 	printf("%d\n", a);//-128
// 	printf("%d\n", b);//
// 
// 	return 0;
// }
// 


//
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
#include <stdio.h>
#include <string.h>


int main()
{
	char a[1000];
	int i;
	for(i=0; i<1000; i++)
	{
		a[i] = -1-i;
	}
	printf("%d",strlen(a));
	return 0;
}





