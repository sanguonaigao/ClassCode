#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	//printf("%d\n", strlen("abcdef"));
//
//	//printf("%d", printf("%d", printf("%d", 43)));
//	//43
//	return 0;
//}
//
//#include "add.h"
//
////#pragma comment(lib, "add.lib")
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//
//	return 0;
//}
//

//
//void Print(int n)
//{
//	if(n>9)
//	{
//		Print(n);
//	}
//	printf("%d ", n%10);
//}
//
//int main()
//{
//	int num = 1234;
//	Print(num);
//	//
//	//Print(1234);
//	//Print(123) 4
//	//Print(12) 3 4
//	//Print(1) 2 3 4
//	//1 2 3 4
//	//
//	return 0;
//}
//void test(int n)
//{
//	if(n<10000)
//	{
//		test(n+1);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//my_strlen("abc")
//1+my_strlen("bc")
//1+1+my_strlen("c")
//1+1+1+my_strlen("")
//1+1+1+0=3


//
// int a = 2;
// int b = a+1;//
// int b = ++a;//
//
//
//int my_strlen(char* str)
//{
//	if(*str != '\0')
//		return 1+my_strlen(str+1);
//	else
//		return 0;
//}
//
//int main()
//{
//	//char arr[] = "abc";
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//
//	return 0;
//}
// 
// int fac(int n)
// {
// 	if(n<=1)
// 		return 1;
// 	else
// 		return n*fac(n-1);
// }
// 
// int main()
// {
// 	int n = 0;
// 	int ret = 0;
// 	scanf("%d", &n);
// 	ret = fac(n);
// 	printf("%d\n", ret);
// 	return 0;
// }


//µÚn¸öì³²¨ÄÇÆõ
//1 1 2 3 5 8 13 21 34 55 ...
// 
// int count = 0;
// int fib(int n)
// {
// 	if(n == 3)
// 	{
// 		count++;
// 	}
// 	if(n<=2)
// 		return 1;
// 	else
// 		return fib(n-1)+fib(n-2);
// }

//
//50 
//48 49
//46 47 47 48
//44 45 45 46 45 46 46 47
//....
//
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//
//	if(n<=2)
//		return 1;
//	else
//	{
//		while(n>2)
//		{
//			c = a+b;
//			a = b;
//			b = c;
//			n--;
//		}
//		return c;
//	}
//}


int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while(n>2)
	{
		c = a+b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d\n", fib(n));

	return 0;
}